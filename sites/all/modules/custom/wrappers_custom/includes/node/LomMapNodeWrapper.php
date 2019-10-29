<?php
/**
 * @file
 * class LomMapNodeWrapper
 */

class LomMapNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'lom_map';

  /**
   * Create a new lom_map node.
   *
   * @param array $values
   * @param string $language
   * @return LomMapNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LomMapNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_map
   *
   * @param $value
   *
   * @return $this
   */
  public function setMap($value) {
    $this->set('field_map', $value);
    return $this;
  }

  /**
   * Retrieves field_map
   *
   * @return mixed
   */
  public function getMap() {
    return $this->get('field_map');
  }

  /**
   * Retrieves field_map as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getMapHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_map');
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
   * Retrieves field_map as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getMapUrl($image_style = NULL) {
    $image = $this->get('field_map');
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
    public static function getAllMapsKeyedByNID($changedFrom=NULL){

        $maps  = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
           
            $query .= " WHERE n.type = 'lom_map' ";
            $query .= " AND n.status = 1 "; // Only published=YES will be returned
            
            
            if($changedFrom != NULL){
               //$query .= " AND n.changed >= ". strtotime($changedFrom); 
                $query .= " AND n.changed >= ". $changedFrom; 
            }
            
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $maps[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[LomMap::getAllMapsKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $maps;
    }
    
    public static function allMaps($changedFrom=NULL){
        $maps= array();
        $changedMaps = LomMapNodeWrapper::getAllMapsKeyedByNID($changedFrom);
        try{

            if(count($changedMaps) != 0){
                foreach ($changedMaps as $nid => $title){
                    if($nid != NULL){

                        $map = new LomMapNodeWrapper($nid);
                        
                        $imageFile = $map->getMap();
                        
                        $origImage = image_load($imageFile['uri']);
                        
                        global $base_url;
                        
                        //$path_to_file = $base_url.'/sites/default/files/'.$imageFile['filename'];
                        $path_to_file = $imageFile['filename'];
                        module_load_include('inc','pathauto','pathauto');
                        $url = file_create_url($origImage->source);
                        $url = rawurldecode($url);
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
                        
                        if($map){

                            /*$maps[] = array(
                                'nid'                   => intval($map->getId()),
                                'title'                 => strip_tags($map->getTitle()),
                                'image_url'             => $path_to_file,
                            );*/
                            $maps[] = array(
                                '_nid'                   => intval($map->getId()),
                                '_title'                 => strip_tags($map->getTitle()),
                                '_file_name'             => $path_to_file,
                            );

                        }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[LomMap::allMaps()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }
        
        return $maps;
        //return json_encode($maps,JSON_UNESCAPED_SLASHES);

    }



    
}
