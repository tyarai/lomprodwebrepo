<?php

/**
 * @file
 * class IllegalActivitiesNodeWrapper
 */
module_load_include('php', 'wrappers_delight', 'includes/WdNodeWrapper');

class IllegalActivitiesNodeWrapper extends WdNodeWrapper {

    protected $entity_type = 'node';
    private static $bundle = 'illegal_activities';

    /**
     * Create a new illegal_activities node.
     *
     * @param array $values
     * @param string $language
     * @return IllegalActivitiesNodeWrapper
     */
    public static function create($values = array(), $language = LANGUAGE_NONE) {
        $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
        $entity_wrapper = parent::create($values, $language);
        return new IllegalActivitiesNodeWrapper($entity_wrapper->value());
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
     * Sets field_images
     *
     * @param $value
     *
     * @return $this
     */
    public function setImages($value) {
        $this->set('field_images', $value);
        return $this;
    }

    /**
     * Retrieves field_images
     *
     * @return mixed
     */
    public function getImages() {
        return $this->get('field_images');
    }

    /**
     * Retrieves field_images as an HTML <img> tag
     *
     * @param string $image_style
     *   (optional) Image style for the HTML
     * @param array $options
     *   (optional) options to pass to the theme function. If you want to add
     *   attributes, you can do that under the attributes key of this array.
     *
     * @return string[]
     */
    public function getImagesHtml($image_style = NULL, $options = array()) {
        $images = $this->get('field_images');
        $image_html = array();
        if (!empty($images)) {
            foreach ($images as $i => $image) {
                $options += array(
                    'path' => $image['uri'],
                );
                if (!is_null($image_style)) {
                    $options['style_name'] = $image_style;
                    $image_html[$i] = theme('image_style', $options);
                } else {
                    $image_html[$i] = theme('image', $options);
                }
            }
        }
        return $image_html;
    }

    /**
     * Retrieves field_images as a URL
     *
     * @param string $image_style
     *   (optional) Image style for the URL
     * @param bool $absolute
     *   Whether to return an absolute URL or not
     *
     * @return string
     */
    public function getImagesUrl($image_style = NULL) {
        $images = $this->get('field_images');
        if (!empty($images)) {
            foreach ($images as $i => $image) {
                if (!is_null($image_style)) {
                    $images[$i] = image_style_url($image_style, $image['uri']);
                } else {
                    $images[$i] = url(file_create_url($image['uri']));
                }
            }
        }
        return $images;
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
     * Sets field_offence
     *
     * @param $value
     *
     * @return $this
     */
    public function setOffence($value) {
        $this->set('field_offence', $value);
        return $this;
    }

    /**
     * Retrieves field_offence
     *
     * @return mixed
     */
    public function getOffence() {
        return $this->get('field_offence');
    }

    /**
     * 
     * Tadiavina ilay UUID raha efa ao anaty base
     *
     * @param type $uuid
     * @param type $nid
     * @param type $error
     * @return boolean
     */
    public static function lookupUUID($uuid, &$nid, &$error) {
        $nid = 0;
        if ($uuid != NULL) {

            try {

                $query = " SELECT * FROM {node} where uuid = '" . $uuid . "'";

                $result = db_query($query);

                while ($record = $result->fetchAssoc()) {
                    $nid = $record['nid'];
                    return TRUE;
                }
            } catch (Exception $e) {
                $error = $e->getMessage();
                drupal_set_message(t('[IllegalActivity::lookupUUID()] Error: @e', array('@e' => $e->getMessage())), 'error');
                return FALSE;
            }
        }
        return FALSE;
    }

    /**
     * 
     * @param type $uid
     * @param type $changedFrom
     * @param type $start
     * @param type $count
     * @param type $isSynced
     * @return type
     */
    public static function getAllIllegalActivitiesKeyedByNID($uid, $changedFrom = NULL, $start = NULL, $count = NULL, $isSynced = FALSE) {

        $sightings = array();

        if ($uid != NULL) {

            try {

                $query = " SELECT n.nid,n.title FROM {node} n ";
                // manao join maka amin'ilay offence koa
                $query .= " JOIN field_data_field_offence offence ";
                $query .= " ON  offence.entity_id   = n.nid ";
                $query .= " AND offence.entity_type = 'node' ";
                $query .= " AND offence.bundle      = 'illegal_activities' ";

                if ($isSynced !== NULL) {
                    $query .= " JOIN field_data_field_is_synced synced ";
                    $query .= " ON synced.entity_id = n.nid ";
                    $query .= " AND synced.entity_type = 'node' ";
                    $query .= " AND synced.bundle = 'illegal_activities' ";
                }

                $query .= " WHERE n.type = 'illegal_activities' ";
                $query .= " AND n.status = 1 "; // Only illegal_activities = YES and offence = FALSE will be returned
                $query .= " AND offence.field_offence_value = 0 ";
                $query .= " AND n.uid    = $uid";

                if ($isSynced !== NULL) {
                    $query .= " AND synced.field_is_synced_value = " . intval($isSynced);
                }

                if ($changedFrom != NULL) {
                    $query .= " AND n.changed >= $changedFrom";
                }

                $query .= " ORDER BY n.nid ASC";

                if ($start != NULL && $count != NULL) {
                    $query .= " LIMIT  $start , $count";
                }



                $result = db_query($query);

                while ($record = $result->fetchAssoc()) {
                    $sightings[$record['nid']] = $record['title'];
                }
            } catch (Exception $e) {
                drupal_set_message(t('[IllegalActivity::getAllIllegalActivitiesKeyedByNID()] Error: @e', array('@e' => $e->getMessage())), 'error');
            }
        }

        return $sightings;
    }

    
    
    /**
     * 
     * @global type $base_url
     * @param type $uid
     * @param type $changedFrom
     * @param type $start
     * @param type $count
     * @param type $synced
     * @param type $modifiedIllegalActivities
     * @return array
     */
    public static function allIllegalActivities($uid, $changedFrom = NULL, $start = NULL, $count = NULL, $synced = NULL, &$modifiedIllegalActivities = array()) {

        $sightings["nodes"] = array();
        $changedIllegalActivities = IllegalActivitiesNodeWrapper::getAllIllegalActivitiesKeyedByNID($uid, $changedFrom, $start, $count, $synced);
        $modifiedIllegalActivities = $changedIllegalActivities;

        module_load_include('php', 'wrappers_custom', 'includes/comment/CommentNodePublicationCommentWrapper');

        try {

            if (count($changedIllegalActivities) != 0) {
                foreach ($changedIllegalActivities as $nid => $title) {
                    if ($nid != NULL) {

                        $sighting = new IllegalActivitiesNodeWrapper($nid);
                        $wrapper = entity_metadata_wrapper('node', $nid);

                        if ($sighting) {

                            global $base_url;

                            $nid = intval($sighting->getId());
                            $title = strip_tags($sighting->getTitle());
                            $user_uid = intval($sighting->getAuthorId());
                            $body = strip_tags($sighting->getBody());
                            $photo_name = $base_url . '/' . PUBLIC_PATH . '/' . $sighting->getPhoto()['filename'];
                            $field_photo = array(
                                'src' => $photo_name,
                                'alt' => '',
                            );
                            $created = date('Y-m-d H:i:s', $sighting->getCreatedTime());
                            $changed = date('Y-m-d H:i:s', $sighting->getChangedTime());
                            $author_name = $sighting->getAuthor()->getName();
                            $uuid = $wrapper->uuid->value();
                            $latitude = $sighting->getLat() != NULL ? doubleval($sighting->getLat()) : 0.000000000;
                            $longitude = $sighting->getLong() != NULL ? doubleval($sighting->getLong()) : 0.000000000;
                            $altitude = $sighting->getAltitude() != NULL ? doubleval($sighting->getAltitude()) : 0.000000000;
                            $isLocal = intval($sighting->getIsLocal());
                            $isSynced = intval($sighting->getIsSynced());
                            $date = date('Y-m-d', $sighting->getFieldDate());
                            $deleted = intval($sighting->getIsDeleted());

                            $comments = CommentNodePublicationCommentWrapper::getComments($uid = NULL, $nid, $changedFrom = NULL);

                            $sightings['nodes'][] = array('node' => array(
                                    'nid' => $nid,
                                    'title' => $title,
                                    'uid' => $user_uid,
                                    'body' => $body,
                                    'field_photo' => $field_photo,
                                    'created' => $created,
                                    'changed' => $changed,
                                    'author_name' => $author_name,
                                    'uuid' => $uuid,
                                    'latitude' => $latitude,
                                    'longitude' => $longitude,
                                    'altitude' => $altitude,
                                    'count' => $count,
                                    'isLocal' => 0,
                                    'isSynced' => 1,
                                    'date' => $date,
                                    'deleted' => $deleted,
                                    'comments' => $comments,
                                )
                            );
                        }
                    }
                }
            }
        } catch (Exception $e) {
            drupal_set_message(t('[IllegalActivity::allIllegalActivities()] Error: @e', array('@e' => $e->getMessage())), 'error');
        }

        return $sightings;
    }

    public static function getIllegalActivitiesCount($uid, $changedFrom = NULL, $isSynced = NULL, $isDeleted = NULL) {

        $count = 0;

        if ($uid != NULL) {

            try {

                $query = " SELECT COUNT(*) as vCount FROM {node} n ";
                // manao join maka amin'ilay offence koa
                $query .= " JOIN field_data_field_offence offence ";
                $query .= " ON  offence.entity_id   = n.nid ";
                $query .= " AND offence.entity_type = 'node' ";
                $query .= " AND offence.bundle      = 'illegal_activities' ";


                if ($isSynced !== NULL) {
                    $query .= " JOIN field_data_field_is_synced synced ";
                    $query .= " ON synced.entity_id = n.nid ";
                    $query .= " AND synced.entity_type = 'node' ";
                    $query .= " AND synced.bundle = 'illegal_activities' ";
                    $query .= " AND synced.field_is_synced_value = " . intval($isSynced);
                }

                if ($isDeleted !== NULL) {
                    $query .= " JOIN field_data_field_is_deleted deleted ";
                    $query .= " ON deleted.entity_id = n.nid ";
                    $query .= " AND deleted.entity_type = 'node' ";
                    $query .= " AND deleted.bundle = 'illegal_activities' ";
                    $query .= " AND deleted.field_is_deleted_value = " . intval($isDeleted);
                }

                $query .= " WHERE n.type = 'illegal_activities' ";
                $query .= " AND n.status = 1 ";
                $query .= " AND offence.field_offence_value = 0 ";
                $query .= " AND n.uid    = " . $uid;

                if ($changedFrom != NULL) {
                    $query .= " AND n.changed >= " . $changedFrom;
                }

                $result = db_query($query);

                while ($record = $result->fetchAssoc()) {
                    $count = $record['vCount'];
                    break;
                }
            } catch (Exception $e) {
                drupal_set_message(t('[IllegalActivity::getIllegalActivitiesCount()] Error: @e', array('@e' => $e->getMessage())), 'error');
            }
        }

        return $count;
    }

}
