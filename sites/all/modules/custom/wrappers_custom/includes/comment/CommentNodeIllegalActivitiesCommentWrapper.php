<?php

/**
 * @file
 * class CommentNodeIllegalActivitiesCommentWrapper
 */
module_load_include('php', 'wrappers_custom', 'includes/comment/WdCommentWrapper');

class CommentNodeIllegalActivitiesCommentWrapper extends WdCommentWrapper {

    protected $entity_type = 'comment';
    private static $bundle = 'comment_node_illegal_activities';

    /**
     * Create a new comment_node_illegal_activities comment.
     *
     * @param array $values
     * @param string $language
     * @return CommentNodeIllegalActivitiesCommentWrapper
     */
    public static function create($values = array(), $language = LANGUAGE_NONE) {
        $values += array('entity_type' => 'comment', 'bundle' => self::$bundle, 'type' => self::$bundle);
        $entity_wrapper = parent::create($values, $language);
        return new CommentNodeIllegalActivitiesCommentWrapper($entity_wrapper->value());
    }

    /**
     * 
     * Maka izay 'comment' rehetra 
     * @param type $uid
     * @param type $nid
     * @param type $changedFrom
     * @param type $synced
     * @return type
     */
    public static function getComments($uid = NULL, $nid = NULL, $changedFrom = NULL, $synced = FALSE) {

        $comments = array();
        module_load_include('php', 'wrappers_custom', 'includes/node/IllegalActivitiesNodeWrapper');

        try {

            $query = " SELECT 
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
                           illegalActivityNode.uuid illegalActivityUUID
                    ";

            $query .= " FROM {comment} c ";

            $query .= " JOIN field_data_comment_body body ";
            $query .= " ON body.entity_id    = c.cid ";
            $query .= " AND body.entity_type = 'comment' ";
            $query .= " AND body.bundle      = 'comment_node_illegal_activities' ";

            $query .= " JOIN node illegalActivityNode ";
            $query .= " ON  illegalActivityNode.nid  = c.nid ";
            $query .= " AND illegalActivityNode.type = 'publication' ";


            $query .= " JOIN field_data_field_is_deleted deleted ";
            $query .= " ON  deleted.entity_id   = c.cid ";
            $query .= " AND deleted.entity_type = 'comment' ";
            $query .= " AND deleted.bundle      = 'comment_node_illegal_activities' ";


            if ($synced !== NULL) {
                $query .= " JOIN field_data_field_is_synced synced ";
                $query .= " ON  synced.entity_id   = c.cid ";
                $query .= " AND synced.entity_type = 'comment' ";
                $query .= " AND synced.bundle      = 'comment_node_publication' ";
            }


            $query .= " WHERE (1=1) ";
            $query .= " AND c.status = 1 "; // Only published=YES will be returned

            if ($nid !== NULL) {
                $query .= " AND c.nid    = " . $nid;
            }

            if ($synced !== NULL) {
                $query .= " AND synced.field_is_synced_value    = " . intval($synced);
            }

            if ($uid !== NULL) {
                $query .= " AND illegalActivityNode.uid    = " . $uid;
            }

            if ($changedFrom !== NULL) {
                $query .= " AND c.changed >= " . intval($changedFrom);
            }

            $query .= " ORDER BY c.nid ASC";

            $result = db_query($query);

            while ($record = $result->fetchAssoc()) {

                $comments[] = array(
                    'cid' => $record['cid'],
                    'pid' => $record['pid'],
                    'nid' => $record['nid'],
                    'uid' => $record['uid'],
                    'subject' => $record['subject'],
                    'hostname' => $record['hostname'],
                    'created' => $record['created'],
                    'changed' => $record['changed'],
                    'status' => $record['status'],
                    'mail' => $record['mail'],
                    'name' => $record['name'],
                    'language' => $record['language'],
                    'uuid' => $record['uuid'],
                    'body' => $record['body'],
                    'deleted' => $record['deleted'],
                    'illegalActivity_uuid' => $record['illegalActivityUUID'],
                );
            }
        } catch (Exception $e) {
            drupal_set_message(t('[IllegalActivity::getComments()] Error: @e', array('@e' => $e->getMessage())), 'error');
        }

        return $comments;
    }

    /**
     * 
     * Tadiavina ilay UUID sao efa ao anaty base
     * Tasara asiana bundle
     * @param type $uuid
     * @param type $error
     * @param type $cid
     * @return boolean
     */
    public static function lookupUUID($uuid, &$error, &$cid) {
        $cid = 0;
        if ($uuid != NULL) {

            try {

                $query = " SELECT * FROM {comment} where uuid = '" . $uuid . "'";

                $result = db_query($query);

                while ($record = $result->fetchAssoc()) {
                    $cid = $record['cid'];
                    return TRUE;
                }
            } catch (Exception $e) {
                $error = $e->getMessage();
                drupal_set_message(t('[CommentIllegalActivity::lookupUUID()] Error: @e', array('@e' => $e->getMessage())), 'error');
                return FALSE;
            }
        }
        return FALSE;
    }

}
