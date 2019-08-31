<?php
/**
 * @file
 * class AuthorsNodeWrapper
 */

class AuthorsNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'authors';

  /**
   * Create a new authors node.
   *
   * @param array $values
   * @param string $language
   * @return AuthorsNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new AuthorsNodeWrapper($entity_wrapper->value());
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
   * Sets field_photo
   *
   * @param $value
   *
   * @return $this
   */
  public function setPhoto($value) {
    $this->set('field_photo', $value);
    return $this;
  }

  /**
   * Retrieves field_photo
   *
   * @return mixed
   */
  public function getPhoto() {
    return $this->get('field_photo');
  }

  /**
   * Retrieves field_photo as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getPhotoHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_photo');
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
   * Retrieves field_photo as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getPhotoUrl($image_style = NULL) {
    $image = $this->get('field_photo');
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

     public static function getAllAuthorsKeyedByNID($changedFrom=NULL){

        $authors  = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
           
            $query .= " WHERE n.type = 'authors' "; 
            $query .= " AND n.status = 1 "; // Only published=YES will be returned
            
            
            if($changedFrom != NULL){
               //$query .= " AND n.changed >= ". strtotime($changedFrom); 
                $query .= " AND n.changed >= ". $changedFrom; 
            }
            
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $authors[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[Authors::getAllAuthorsKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $authors;
    }
  
    /*
    * Retrieve all new or recently changed species
    */
    
    public static function allAuthors($changedFrom=NULL){
        $authors= array();
        $changedAuthors = AuthorsNodeWrapper::getAllAuthorsKeyedByNID($changedFrom);
        try{

            if(count($changedAuthors) != 0){
                foreach ($changedAuthors as $nid => $title){
                    if($nid != NULL){

                        $author     = new AuthorsNodeWrapper($nid);
                     
                        if($author){
                        
                            $body       = $author->getBody();
                            $imageFile  = $author->getPhoto();
                            $origImage  = image_load($imageFile['uri']);
                            global $base_url;

                            //$path_to_file = $base_url.'/sites/default/files/'.$imageFile['filename'];
                            $path_to_file = $imageFile['filename'];
                            
                            //global $base_url;

                            //$path_to_file = $base_url.'/sites/default/files/'.$imageFile['filename'];
                            
                            /*$authors[] = array(
                                'nid'                   => intval($author->getId()),
                                'title'                 => strip_tags($author->getTitle()),
                                'image_url'             => $path_to_file,
                            );*/
                            $authors[] = array(
                                '_nid'                   => intval($author->getId()),
                                '_name'                 => strip_tags($author->getTitle()),
                                '_details'              => strip_tags($body),
                                '_photo'                => $path_to_file,
                            );

                       }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[AuthorsNodeWrapper::allAuthors()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }
        
        return $authors;

    }
  
}
