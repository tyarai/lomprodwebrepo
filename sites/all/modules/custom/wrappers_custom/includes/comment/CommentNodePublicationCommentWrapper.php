<?php
/**
 * @file
 * class CommentNodePublicationCommentWrapper
 */

module_load_include('php','wrappers_custom','includes/comment/WdCommentWrapper');
class CommentNodePublicationCommentWrapper extends WdCommentWrapper {

  protected $entity_type = 'comment';
  private static $bundle = 'comment_node_publication';

  /**
   * Create a new comment_node_publication comment.
   *
   * @param array $values
   * @param string $language
   * @return CommentNodePublicationCommentWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'comment', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new CommentNodePublicationCommentWrapper($entity_wrapper->value());
  }

  /**
   * Sets comment_body
   *
   * @param $value
   *
   * @return $this
   */
  public function setCommentBody($value, $format = NULL) {
    $this->setText('comment_body', $value, $format);
    return $this;
  }

  /**
   * Retrieves comment_body
   *
   * @return mixed
   */
  public function getCommentBody($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('comment_body', $format, $markup_format);
  }

  /**
   * Sets field_photo_comment
   *
   * @param $value
   *
   * @return $this
   */
  public function setPhotoComment($value) {
    $this->set('field_photo_comment', $value);
    return $this;
  }

  /**
   * Retrieves field_photo_comment
   *
   * @return mixed
   */
  public function getPhotoComment() {
    return $this->get('field_photo_comment');
  }

  /**
   * Retrieves field_photo_comment as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getPhotoCommentHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_photo_comment');
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
   * Retrieves field_photo_comment as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getPhotoCommentUrl($image_style = NULL) {
    $image = $this->get('field_photo_comment');
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
     * Tadiavina ilay UUID sao efa ao anaty base
     */
    public static function lookupUUID($uuid,&$error,&$cid){
        $cid = 0;
        if($uuid != NULL){
            
            try{

                $query  = " SELECT * FROM {comment} where uuid = '".$uuid . "'";

                $result = db_query($query);

                while($record = $result->fetchAssoc()){
                    $cid = $record['cid'];
                    return TRUE;
                }

            }catch(Exception $e){
                $error = $e->getMessage();
                drupal_set_message(t('[Comment::lookupUUID()] Error: @e',array('@e'=>$e->getMessage())),'error');
                return FALSE;
            }
        }
        return FALSE;
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

   /*
   * Maka izay 'comment' rehetra 
   * 
   * 1- $nid : Sighting nid
   * 
   */
    public static function getComments($uid=NULL,$nid=NULL,$changedFrom=NULL,$synced=FALSE){

        $comments  = array();
        module_load_include('php','wrappers_custom','includes/node/PublicationNodeWrapper');
        
        try{

            $query  = " SELECT 
                           c.cid   cid,
                           c.pid   pid,
                           c.nid   nid,
                           c.uid   uid,
                           c.subject subject,
                           c.hostname hostname,
                           c.created created,
                           c.changed changed,
                           c.status  status,
                           c.mail mail,
                           c.name name,
                           c.language language,
                           c.uuid uuid,
                           body.comment_body_value  body,
                           deleted.field_is_deleted_value deleted,
                           sightingNode.uuid sightingUUID
                    ";

            $query .= " FROM {comment} c ";

            $query .= " JOIN field_data_comment_body body ";
            $query .= " ON body.entity_id    = c.cid ";
            $query .= " AND body.entity_type = 'comment' ";
            $query .= " AND body.bundle      = 'comment_node_publication' ";

            $query .= " JOIN node sightingNode ";
            $query .= " ON  sightingNode.nid  = c.nid ";
            $query .= " AND sightingNode.type = 'publication' ";

            $query .= " JOIN field_data_field_is_deleted deleted ";
            $query .= " ON  deleted.entity_id   = c.cid ";
            $query .= " AND deleted.entity_type = 'comment' ";
            $query .= " AND deleted.bundle      = 'comment_node_publication' ";


            if($synced !== NULL){
                $query .= " JOIN field_data_field_is_synced synced ";
                $query .= " ON  synced.entity_id   = c.cid ";
                $query .= " AND synced.entity_type = 'comment' ";
                $query .= " AND synced.bundle      = 'comment_node_publication' ";
            }

            
            $query .= " WHERE (1=1) ";
            $query .= " AND c.status = 1 "; // Only published=YES will be returned

            if($nid !== NULL){
                $query .= " AND c.nid    = ". $nid;
            }

            if($synced !== NULL){
                $query .= " AND synced.field_is_synced_value    = ". intval($synced) ;
            }
           
            if($uid !== NULL){
               $query .= " AND sightingNode.uid    = ". $uid;
            }
            
            if($changedFrom !== NULL){
                //$query .= " AND c.changed >= ". intval($changedFrom); 
                $query .= " AND c.changed >= ". strtotime($changedFrom);
            }
            
            $query .= " ORDER BY c.nid ASC";

            $result = db_query($query);

            while($record = $result->fetchAssoc()){

                $comments[] = array(

                   '_cid'       => intval($record['cid']),
                   '_pid'       => intval($record['pid']),
                   '_nid'       => intval($record['nid']),
                   '_uid'       => intval($record['uid']),
                   '_subject'   => $record['subject'],
                   '_hostname'  => $record['hostname'],
                   '_created'   => doubleval($record['created']),
                   '_modified'  => doubleval($record['changed']),
                   '_status'    => intval($record['status']),
                   '_mail'      => $record['mail'],
                   '_name'      => $record['name'],
                   '_language'  => $record['language'],
                   '_uuid'      => $record['uuid'],
                   '_commentBody' => strip_tags($record['body']),
                   '_deleted'   => intval($record['deleted']),
                   '_sighting_uuid' => $record['sightingUUID'], 

                );
            }

         }catch(Exception $e){
             drupal_set_message(t('[Sighting::getSightingComments()] Error: @e',array('@e'=>$e->getMessage())),'error');
         }
        

        //$comments = array("cid"=>"qweqwe123123");
        return $comments;
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

}
