<?php
/**
 * @file
 * class BestPlacesNodeWrapper
 */

module_load_include('php', 'wrappers_custom','includes/node/LomMapNodeWrapper');
class BestPlacesNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'best_places';

  /**
   * Create a new best_places node.
   *
   * @param array $values
   * @param string $language
   * @return BestPlacesNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new BestPlacesNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets body
   *
   * @param $value
   *
   * @return $this
   */
  public function setBody($value, $format = NULL) {
    $this->setText('body', $value, $format);
    return $this;
  }

  /**
   * Retrieves body
   *
   * @return mixed
   */
  public function getBody($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('body', $format, $markup_format);
  }

  /**
   * Sets field_image
   *
   * @param $value
   *
   * @return $this
   */
  public function setImage($value) {
    $this->set('field_image', $value);
    return $this;
  }

  /**
   * Retrieves field_image
   *
   * @return mixed
   */
  public function getImage() {
    return $this->get('field_image');
  }

  /**
   * Retrieves field_image as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getImageHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_image');
    if (!empty($image)) {
      $options += array(
        'path' => $image['uri'],
      );
      if (!is_null($image_style)) {
        $options['style_name'] = $image_style;
        return theme('image_style', $options);
      }
      else {
        return theme('image', $options);
      }
    }
    return NULL;
  }


  /**
   * Retrieves field_image as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getImageUrl($image_style = NULL) {
    $image = $this->get('field_image');
    if (!empty($image)) {
      if (!is_null($image_style)) {
        return image_style_url($image_style, $image['uri']);
      }
      else {
        return url(file_create_url($image['uri']));
      }
    }
    return NULL;
  }

    /*
     * Maka ny watching sites
     */
    public static function getAllSitesKeyedByNID(){

        $species = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
            $query .= " WHERE n.type = 'best_places' ";
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $species[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[LomSpecies::getAllSpeciesKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $species;
    }

  /**
   * Sets field_species_map
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpeciesMap($value) {
    if (is_array($value)) {
      foreach ($value as $i => $v) {
        if ($v instanceof WdNodeWrapper) {
          $value[$i] = $v->value();
        }
      }
    }
    else {
      if ($value instanceof WdNodeWrapper) {
        $value = $value->value();
      }
    }

    $this->set('field_species_map', $value);
    return $this;
  }

  /**
   * Retrieves field_species_map
   *
   * @return LomMapNodeWrapper
   */
  public function getSpeciesMap() {
    $value = $this->get('field_species_map');
    if (!empty($value)) {
      $value = new LomMapNodeWrapper($value);
    }
    return $value;
  }
  
    public static function getAllPlacesKeyedByNID($changedFrom=NULL){

        $places = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
           
            $query .= " WHERE n.type = 'best_places' "; 
            
            
            if($changedFrom != NULL){
               $query .= " AND n.changed >= ". strtotime($changedFrom); 
            }
            
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $places[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[BestPlaces::getAllPlacesKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $places;
    }
    
    /*
     * Retrieve all new or recently changed species
     */
    
    public static function allPlaces($changedFrom=NULL){
        $placeList = array();
        $changedPlaces = BestPlacesNodeWrapper::getAllPlacesKeyedByNID($changedFrom);
        try{

            if(count($changedPlaces) != 0){
                foreach ($changedPlaces as $nid => $title){
                    if($nid != NULL){

                        $place = new BestPlacesNodeWrapper($nid);

                        if($place){

                            $placeList[] = array(
                                'nid'                   => $place->getId(),
                                'title'                 => strip_tags($place->getTitle()),
                                'map_id'                => $place->getSpeciesMap()->getid(),
                                'image'                 => $place->getImage(),
                                'body'                  => strip_tags($place->getBody()),
                            );

                        }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[LomSpecies::allPlaces()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        
        //return drupal_json_encode($placeList);
        return $placeList;

    }

}
