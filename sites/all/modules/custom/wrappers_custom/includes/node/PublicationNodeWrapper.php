<?php
/**
 * @file
 * class PublicationNodeWrapper
 */



module_load_include('php', 'wrappers_delight','includes/WdNodeWrapper');
module_load_include('php', 'wrappers_custom','includes/node/LomSpeciesNodeWrapper');
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

  public function getFieldDate() {
    return $this->get('field_date');
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
    
    public static function resetSynced($uid,$synced_value=0){
        if($uid != NULL){
            $query = " 
                UPDATE field_data_field_is_synced synced

                JOIN node n ON n.nid = synced.entity_id
                AND synced.bundle = 'publication'

                SET synced.field_is_synced_value = ". intval($synced_value);

            $query .= " WHERE n.uid = ". $uid;
            
            $result = db_query($query);
            
        }
        return FALSE;
    }
    /*
     * Tadiavina ilay UUID sao efa ao anaty base
     */
    public static function lookupUUID($uuid,&$nid,&$error){
        $nid = 0;
        if($uuid != NULL){
            
            try{

                $query  = " SELECT * FROM {node} where uuid = '".$uuid . "'";

                $result = db_query($query);

                while($record = $result->fetchAssoc()){
                    $nid      = $record['nid'];
                    return TRUE;
                }

            }catch(Exception $e){
                $error = $e->getMessage();
                drupal_set_message(t('[Sighting::lookupUUID()] Error: @e',array('@e'=>$e->getMessage())),'error');
                return FALSE;
            }
        }
        return FALSE;
    }
    
    public static function getSightingsCount($uid,$changedFrom=NULL,$isSynced=NULL,$isDeleted=NULL){
        
        $count  = 0;
        
        if($uid != NULL){
            
            try{

                $query  = " SELECT COUNT(*) as vCount FROM {node} n ";

                if($isSynced !== NULL){
                    $query .= " JOIN field_data_field_is_synced synced ";
                    $query .= " ON synced.entity_id = n.nid ";
                    $query .= " AND synced.entity_type = 'node' ";
                    $query .= " AND synced.bundle = 'publication' ";
                    $query .= " AND synced.field_is_synced_value = ". intval($isSynced);
                }
                
                if($isDeleted !== NULL) {
                    //-- Updated on march-20-2018 ---//
                    $query .= " JOIN field_data_field_is_deleted deleted ";
                    $query .= " ON deleted.entity_id = n.nid ";
                    $query .= " AND deleted.entity_type = 'node' ";
                    $query .= " AND deleted.bundle = 'publication' ";
                    $query .= " AND deleted.field_is_deleted_value = ". intval($isDeleted);
                }
                //--------------------------------
                
                $query .= " WHERE n.type = 'publication' ";
                $query .= " AND n.status = 1 "; // Only published=YES will be returned
                $query .= " AND n.uid    = ". $uid; 

                if($changedFrom != NULL){
                   //$query .= " AND n.changed >= ". strtotime($changedFrom);
                    $query .= " AND n.changed >= ". $changedFrom; 
                }
                
                
                
               $result = db_query($query);

                while($record = $result->fetchAssoc()){
                    $count = $record['vCount'];
                    break;
                }

            }catch(Exception $e){
                drupal_set_message(t('[Sighting::getSightingsCount()] Error: @e',array('@e'=>$e->getMessage())),'error');
            }
        }

        return $count;
     }
    
    public static function getAllSightingsKeyedByNID($uid,$changedFrom=NULL,$start=NULL,$count=NULL,$isSynced=FALSE){

        $sightings  = array();
        
        if($uid != NULL){
            
            try{

                $query  = " SELECT n.nid,n.title FROM {node} n ";

                if($isSynced !== NULL){
                    $query .= " JOIN field_data_field_is_synced synced ";
                    $query .= " ON synced.entity_id = n.nid ";
                    $query .= " AND synced.entity_type = 'node' ";
                    $query .= " AND synced.bundle = 'publication' ";
                }
                
                $query .= " WHERE n.type = 'publication' ";
                $query .= " AND n.status = 1 "; // Only published=YES will be returned
                $query .= " AND n.uid    = ". $uid;
                
                if($isSynced !== NULL){
                    $query .= " AND synced.field_is_synced_value = ". intval($isSynced);
                }

                if($changedFrom != NULL){
                   //$query .= " AND n.changed >= ". strtotime($changedFrom); 
                    $query .= " AND n.changed >= ". $changedFrom; 
                }
                
                //$query .= " ORDER BY n.changed DESC,n.title ASC ";
                //$query .= " ORDER BY n.nid, n.changed DESC ";
                $query .= " ORDER BY n.nid ASC";
                
                if($start != NULL && $count != NULL){
                    $query .= " LIMIT ". $start .",". $count;
                }

                

                $result = db_query($query);

                while($record = $result->fetchAssoc()){
                    $sightings[$record['nid']] = $record['title'];
                }

            }catch(Exception $e){
                drupal_set_message(t('[Sighting::getAllSightingsKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
            }
        }

        return $sightings;
    }
    
    public static function allSightings($uid,$changedFrom=NULL,$start=NULL,$count=NULL,$synced=NULL,&$modifiedSightings=array()){
        
        $sightings["nodes"] = array();
        $changedSightings   = PublicationNodeWrapper::getAllSightingsKeyedByNID($uid,$changedFrom,$start,$count,$synced);
        $modifiedSightings  = $changedSightings;
        
        module_load_include('php','wrappers_custom','includes/comment/CommentNodePublicationCommentWrapper');
        
        try{

            if(count($changedSightings) != 0){
                
                foreach ($changedSightings as $nid => $title){
                    if($nid != NULL){

                        $sighting = new PublicationNodeWrapper($nid);
                        $wrapper  = entity_metadata_wrapper('node',$nid);
                        
                        if($sighting){
                            
                            global $base_url;
                            
                            $nid                            = intval($sighting->getId());
                            $uuid                           = $sighting->getUuid();
                            $title                          = strip_tags($sighting->getTitle());
                            $species                        = strip_tags($sighting->getAssociatedSpecies()->getTitle());
                            $user_uid                       = intval($sighting->getAuthorId());
                            $body                           = strip_tags($sighting->getBody());
                            $photo_name                     = $base_url.'/'.PUBLIC_PATH .'/'.$sighting->getPhoto()['filename'];
                            $field_photo                    = array(
                                                                'src' => $photo_name,
                                                                'alt' => '',    
                                                            );
                            //$created                        = date('Y-m-d H:i:s',$sighting->getCreatedTime());
                            //$changed                        = date('Y-m-d H:i:s',$sighting->getChangedTime());
			    $created                        = doubleval($sighting->getCreatedTime());
                            $changed                        = doubleval($sighting->getChangedTime());			
	
                            $author_name                    = $sighting->getAuthor()->getName();
                            $speciesNid                     = intval($sighting->getAssociatedSpecies()->getId());
                            $uuid                           = $wrapper->uuid->value();
                            $placeName                      = $sighting->getPlaceName();
                            $latitude                       = $sighting->getLat() != NULL  ? doubleval($sighting->getLat())  : 0.0;
                            $longitude                      = $sighting->getLong() != NULL ? doubleval($sighting->getLong()) : 0.0;
                            $altitude                       = $sighting->getAltitude() != NULL ? doubleval($sighting->getAltitude()) : 0.0;
                            $count                          = intval($sighting->getCount());
                            $isLocal                        = intval($sighting->getIsLocal());
                            $isSynced                       = intval($sighting->getIsSynced());
                            //$date                           = date('Y-m-d',$sighting->getFieldDate());
                            $date                           = doubleval($sighting->getFieldDate());
			    $deleted                        = intval($sighting->getIsDeleted());
                            $refNid                         = intval($sighting->getPlaceNameReference()->getId());
                            $activityTID                    = $sighting->getFieldType() != null ? intval($sighting->getType()->tid) : null ;
                            
                            $comments                       = CommentNodePublicationCommentWrapper::getComments($uid=NULL,$nid,$changedFrom=NULL);
                            
                            //$sightings['nodes'][] = array('node'=> array(
                            $sightings['nodes'][] =  array(
                                    '_nid'                  => $nid,
                                    '_title'                => $title,
                                    '_uuid'                 => $uuid,    
                                    '_speciesName'          => $species,
                                    '_uid'                  => $user_uid,
                                    '_body'                 => $body,
                                    '_photoFileNames'       => $photo_name,
                                    '_createdTime'          => $created,
                                    '_modifiedTime'         => $changed,
                                    '_author_name'          => $author_name,
                                    '_speciesNid'           => $speciesNid,
                                    '_placeName'            => $placeName,
                                    '_placeLatitude'        => $latitude,
                                    '_placeLongitude'       => $longitude,
                                    '_placeAltitude'        => $altitude,
                                    '_speciesCount'         => $count,
                                    '_isLocal'              => 0,//$isLocal,
                                    '_isSynced'             => 1,//$isSynced,
                                    '_date'                 => $date,
                                    '_deleted'              => $deleted,
                                    '_place_name_reference_nid' => $refNid,
                                    '_comments'              => $comments,
                                    '_activityTagTid'       => $activityTID,
                                
                            );

                        }
                    }
                }
            }
            
        }catch(Exception $e){
            
            drupal_set_message(t('[Sighting::allSightings()] Error: @e',array('@e'=>$e->getMessage())),'error');
            
        }
        
        return $sightings;

    }
    
    /*public static function allSightings($uid,$changedFrom=NULL,$start=NULL,$count=NULL,$synced=NULL,&$modifiedSightings=array()){
        
        $sightings["nodes"] = array();
        $changedSightings   = PublicationNodeWrapper::getAllSightingsKeyedByNID($uid,$changedFrom,$start,$count,$synced);
        $modifiedSightings  = $changedSightings;
        
        module_load_include('php','wrappers_custom','includes/comment/CommentNodePublicationCommentWrapper');
        
        try{

            if(count($changedSightings) != 0){
                foreach ($changedSightings as $nid => $title){
                    if($nid != NULL){

                        $sighting = new PublicationNodeWrapper($nid);
                        $wrapper  = entity_metadata_wrapper('node',$nid);
                        
                        if($sighting){
                            
                            global $base_url;
                            
                            $nid                            =  intval($sighting->getId());
                            $title                          =  strip_tags($sighting->getTitle());
                            $species                        = strip_tags($sighting->getAssociatedSpecies()->getTitle());
                            $user_uid                       = intval($sighting->getAuthorId());
                            $body                           = strip_tags($sighting->getBody());
                            $photo_name                     = $base_url.'/'.PUBLIC_PATH .'/'.$sighting->getPhoto()['filename'];
                            $field_photo                    = array(
                                                                'src' => $photo_name,
                                                                'alt' => '',    
                                                            );
                            $created                        = date('Y-m-d H:i:s',$sighting->getCreatedTime());
                            $changed                        = date('Y-m-d H:i:s',$sighting->getChangedTime());
                            $author_name                    = $sighting->getAuthor()->getName();
                            $speciesNid                     = intval($sighting->getAssociatedSpecies()->getId());
                            $uuid                           = $wrapper->uuid->value();
                            $placeName                      = $sighting->getPlaceName();
                            $latitude                       = $sighting->getLat() != NULL  ? doubleval($sighting->getLat())  : 0.000000000;
                            $longitude                      = $sighting->getLong() != NULL ? doubleval($sighting->getLong()) : 0.000000000;
                            $altitude                       = $sighting->getAltitude() != NULL ? doubleval($sighting->getAltitude()) : 0.000000000;
                            $count                          = intval($sighting->getCount());
                            $isLocal                        = intval($sighting->getIsLocal());
                            $isSynced                       = intval($sighting->getIsSynced());
                            $date                           = date('Y-m-d',$sighting->getFieldDate());
                            $deleted                        = intval($sighting->getIsDeleted());
                            $refNid                         = intval($sighting->getPlaceNameReference()->getId());
                            
                            $comments                       = CommentNodePublicationCommentWrapper::getComments($uid=NULL,$nid,$changedFrom=NULL);
                            
                            $sightings['nodes'][] = array('node'=> array(
                                    'nid'                   => $nid,
                                    'title'                 => $title,
                                    'species'               => $species,
                                    'uid'                   => $user_uid,
                                    'body'                  => $body,
                                    'field_photo'           => $field_photo,
                                    'created'               => $created,
                                    'changed'               => $changed,
                                    'author_name'           => $author_name,
                                    'speciesNid'            => $speciesNid,
                                    'uuid'                  => $uuid,
                                    'place_name'            => $placeName,
                                    'latitude'              => $latitude,
                                    'longitude'             => $longitude,
                                    'altitude'              => $altitude,
                                    'count'                 => $count,
                                    'isLocal'               => 0,//$isLocal,
                                    'isSynced'              => 1,//$isSynced,
                                    'date'                  => $date,
                                    'deleted'               => $deleted,
                                    'place_name_reference_nid'=> $refNid,
                                    'comments'              => $comments,
                                    
                                )
                            );

                        }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[Sighting::allSightings()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }
        
        return $sightings;

    }*/
    
   
    
  
    
    
  /**
   * Sets field_lat
   *
   * @param $value
   *
   * @return $this
   */
  public function setLat($value) {
    $this->set('field_lat', $value);
    return $this;
  }

  /**
   * Retrieves field_lat
   *
   * @return mixed
   */
  public function getLat() {
    return $this->get('field_lat');
  }

  /**
   * Sets field_long
   *
   * @param $value
   *
   * @return $this
   */
  public function setLong($value) {
    $this->set('field_long', $value);
    return $this;
  }

  /**
   * Retrieves field_long
   *
   * @return mixed
   */
  public function getLong() {
    return $this->get('field_long');
  }

  /**
   * Sets field_altitude
   *
   * @param $value
   *
   * @return $this
   */
  public function setAltitude($value) {
    $this->set('field_altitude', $value);
    return $this;
  }

  /**
   * Retrieves field_altitude
   *
   * @return mixed
   */
  public function getAltitude() {
    return $this->get('field_altitude');
  }

  /**
   * Sets field_type
   *
   * @param $value
   *
   * @return $this
   */
  public function setFieldType($value) {
    $this->set('field_type', $value);
    return $this;
  }
  public function getFieldType() {
    return $value = $this->get('field_type');
    /*if (!empty($value)) {
      $value = new WdTaxonomyTermWrapper($value);
    }
    return $value;*/
    
  }

}
