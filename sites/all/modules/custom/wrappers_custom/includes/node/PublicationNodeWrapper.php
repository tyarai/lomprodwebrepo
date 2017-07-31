<?php
/**
 * @file
 * class PublicationNodeWrapper
 */

module_load_include('php', 'wrappers_delight','includes/WdNodeWrapper');
class PublicationNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'publication';

  /**
   * Create a new publication node.
   *
   * @param array $values
   * @param string $language
   * @return PublicationNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new PublicationNodeWrapper($entity_wrapper->value());
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
   * Sets field_associated_species
   *
   * @param $value
   *
   * @return $this
   */
  public function setAssociatedSpecies($value) {
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

    $this->set('field_associated_species', $value);
    return $this;
  }

  /**
   * Retrieves field_associated_species
   *
   * @return LomSpeciesNodeWrapper
   */
  public function getAssociatedSpecies() {
    $value = $this->get('field_associated_species');
    if (!empty($value)) {
      $value = new LomSpeciesNodeWrapper($value);
    }
    return $value;
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


  /**
   * Sets field_place_name
   *
   * @param $value
   *
   * @return $this
   */
  public function setPlaceName($value, $format = NULL) {
    $this->setText('field_place_name', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_place_name
   *
   * @return mixed
   */
  public function getPlaceName($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_place_name', $format, $markup_format);
  }

  /**
   * Sets field_longtitude
   *
   * @param $value
   *
   * @return $this
   */
  public function setLongtitude($value, $format = NULL) {
    $this->setText('field_longtitude', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_longtitude
   *
   * @return mixed
   */
  public function getLongtitude($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_longtitude', $format, $markup_format);
  }

  /**
   * Sets field_latitude
   *
   * @param $value
   *
   * @return $this
   */
  public function setLatitude($value, $format = NULL) {
    $this->setText('field_latitude', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_latitude
   *
   * @return mixed
   */
  public function getLatitude($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_latitude', $format, $markup_format);
  }

  /**
   * Sets field_count
   *
   * @param $value
   *
   * @return $this
   */
  public function setCount($value) {
    $this->set('field_count', $value);
    return $this;
  }

  /**
   * Retrieves field_count
   *
   * @return mixed
   */
  public function getCount() {
    return $this->get('field_count');
  }

  /**
   * Sets field_date
   *
   * @param $value
   *
   * @return $this
   */
  public function setDate($value) {
    $this->set('field_date', $value);
    return $this;
  }

  /**
   * Sets field_is_local
   *
   * @param $value
   *
   * @return $this
   */
  public function setIsLocal($value) {
    $this->set('field_is_local', $value);
    return $this;
  }

  /**
   * Retrieves field_is_local
   *
   * @return mixed
   */
  public function getIsLocal() {
    return $this->get('field_is_local');
  }

  /**
   * Sets field_is_synced
   *
   * @param $value
   *
   * @return $this
   */
  public function setIsSynced($value) {
    $this->set('field_is_synced', $value);
    return $this;
  }

  /**
   * Retrieves field_is_synced
   *
   * @return mixed
   */
  public function getIsSynced() {
    return $this->get('field_is_synced');
  }

  /**
   * Sets field_modified
   *
   * @param $value
   *
   * @return $this
   */
  public function setModified($value) {
    $this->set('field_modified', $value);
    return $this;
  }

  /**
   * Retrieves field_modified
   *
   * @return mixed
   */
  public function getModified() {
    return $this->get('field_modified');
  }

  /**
   * Sets field_uuid
   *
   * @param $value
   *
   * @return $this
   */
  public function setUuid($value, $format = NULL) {
    $this->setText('field_uuid', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_uuid
   *
   * @return mixed
   */
  public function getUuid($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_uuid', $format, $markup_format);
  }

  /**
   * Sets field_is_deleted
   *
   * @param $value
   *
   * @return $this
   */
  public function setIsDeleted($value) {
    $this->set('field_is_deleted', $value);
    return $this;
  }

  /**
   * Retrieves field_is_deleted
   *
   * @return mixed
   */
  public function getIsDeleted() {
    return $this->get('field_is_deleted');
  }

  /**
   * Sets field_place_name_reference
   *
   * @param $value
   *
   * @return $this
   */
  public function setPlaceNameReference($value) {
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

    $this->set('field_place_name_reference', $value);
    return $this;
  }

  /**
   * Retrieves field_place_name_reference
   *
   * @return BestPlacesNodeWrapper
   */
  public function getPlaceNameReference() {
    $value = $this->get('field_place_name_reference');
    if (!empty($value)) {
      $value = new BestPlacesNodeWrapper($value);
    }
    return $value;
  }

  
    public static function getUserLemurLifeList($uid){
        $list = array();
        if($uid != NULL){
            
            $query = "SELECT 
                            _speciesNid,_speciesName,totalObserved,totalSightings 
                        FROM(    
                            SELECT 
                                    species.nid _speciesNid, 
                                    species.title _speciesName,
                                    SUM(field_count.field_count_value) totalObserved,
                                    count(speciesTarget.field_associated_species_target_id) totalSightings 

                                FROM node species

                                JOIN node publication
                                    ON   publication.type       = 'publication'  
                                    AND  publication.status 	 = '1'

                                JOIN field_data_field_count field_count 
                                    ON  field_count.entity_id   = publication.nid 
                                    AND field_count.entity_type = 'node'  
                                    AND field_count.bundle      = 'publication'  
                                    AND field_count.deleted     = '0'  

                                 JOIN field_data_field_associated_species speciesTarget 
                                    ON  speciesTarget.entity_id   = publication.nid 
                                    AND speciesTarget.entity_type = 'node'  
                                    AND speciesTarget.bundle      = 'publication'  
                                    AND speciesTarget.deleted     = '0'  

                                 JOIN field_data_field_is_deleted deleted 
                                    ON  deleted.entity_id   = publication.nid 
                                    AND deleted.entity_type = 'node'  
                                    AND deleted.bundle      = 'publication'  
                                    AND deleted.deleted     = '0'  
                            WHERE 

                                publication.uid = :uid 
                                AND speciesTarget.field_associated_species_target_id = species.nid
                                AND deleted.field_is_deleted_value ='0' 


                    GROUP BY _speciesNid 
                    ORDER BY _speciesName ASC)aa ";
            
            $query = str_replace(':uid', $uid, $query);
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                
                $list[] = array(
                    '_speciesNid'   => $record['_speciesNid'],
                    '_speciesName'  => $record['_speciesName'],
                    'totalObserved' => $record['totalObserved'],
                    'totalSightings'=> $record['totalSightings'],
                );
            }
            
        }
        return $list;
    }
}
