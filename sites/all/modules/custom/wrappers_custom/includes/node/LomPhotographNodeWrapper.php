<?php
/**
 * @file
 * class LomPhotographNodeWrapper
 */

class LomPhotographNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'lom_photograph';

  /**
   * Create a new lom_photograph node.
   *
   * @param array $values
   * @param string $language
   * @return LomPhotographNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LomPhotographNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_lom_photograph
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomPhotograph($value) {
    $this->set('field_lom_photograph', $value);
    return $this;
  }

  /**
   * Retrieves field_lom_photograph
   *
   * @return mixed
   */
  public function getLomPhotograph() {
    return $this->get('field_lom_photograph');
  }

  /**
   * Retrieves field_lom_photograph as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getLomPhotographHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_lom_photograph');
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
   * Retrieves field_lom_photograph as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getLomPhotographUrl($image_style = NULL) {
    $image = $this->get('field_lom_photograph');
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

     public static function getAllPhotographsKeyedByNID($changedFrom=NULL){

        $photographs  = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
           
            $query .= " WHERE n.type = 'lom_photograph' "; 

            $query .= " AND n.status = 1 "; // Only published=YES will be returned
            
            
            if($changedFrom != NULL){
               //$query .= " AND n.changed >= ". strtotime($changedFrom); 
                $query .= " AND n.changed >= ". $changedFrom; 
            }
            
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $photographs[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[LomPhotograph::getAllPhotographsKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $photographs;
    }
    
    /*
     * Retrieve all new or recently changed species
     */
    
    public static function allPhotographs($changedFrom=NULL){
        $photos= array();
        $changedPhotos = LomPhotographNodeWrapper::getAllPhotographsKeyedByNID($changedFrom);
        try{

            if(count($changedPhotos) != 0){
                foreach ($changedPhotos as $nid => $title){
                    if($nid != NULL){

                        $photograph = new LomPhotographNodeWrapper($nid);
                        
                        $imageFile = $photograph->getLomPhotograph();
                        
                        //$origImage = image_load($imageFile['uri']);
                        
                        global $base_url;
                        
                        $path_to_file = $base_url.'/sites/default/files/'.$imageFile['filename'];
                        //module_load_include('inc','pathauto','pathauto');
                        //$url = file_create_url($origImage->source);
                        //$url = rawurldecode($url);
                        /**
                         * @TODO : Tokony tonga dia manao resizing @ photoshop @zay maivana ny sary midina any @ mobile
                         */
                        
                        /*$width = 1024;
                        $height = 768;
                        
                        if($origImage->info['width'] >= 1024 || $origImage->info['height'] >= 768){
                            if($origImage->info['width'] > $origImage->info['height'] ){
                                image_scale($origImage, $width, NULL,FALSE);
                            }else{
                                image_scale($origImage, NULL, $height,FALSE);
                            }
                            $fileName = basename($imageFile['uri'], ".jpg");
                            $newFilename = $fileName."_mob_".".jpg";
                            $path = drupal_realpath("public://").'/'.$newFilename;
                            image_save($origImage,$path);
                        }
                        
                        $newUri = "public://".$newFilename;
                        $imageUrl = file_create_url($newUri);
                        */
                        
                        if($photograph){

                            $photos[] = array(
                                'nid'                   => intval($photograph->getId()),
                                'title'                 => strip_tags($photograph->getTitle()),
                                'image_url'             => $path_to_file,
                            );

                        }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[LomPhotograph::allPhotographs()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }
        
        //return json_encode($photos,JSON_UNESCAPED_SLASHES);
        return $photos;

    }

}
