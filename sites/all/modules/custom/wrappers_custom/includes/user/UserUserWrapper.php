<?php
/**
 * @file
 * class UserUserWrapper
 */

class UserUserWrapper extends WdUserWrapper {

  protected $entity_type = 'user';
  private static $bundle = 'user';

  /**
   * Create a new user user.
   *
   * @param array $values
   * @param string $language
   * @return UserUserWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'user', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new UserUserWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_master_list_initialized
   *
   * @param $value
   *
   * @return $this
   */
  public function setMasterListInitialized($value) {
    $this->set('field_master_list_initialized', $value);
    return $this;
  }

  /**
   * Retrieves field_master_list_initialized
   *
   * @return mixed
   */
  public function getMasterListInitialized() {
    return $this->get('field_master_list_initialized');
  }

  /**
   * Sets field_list_visibility
   *
   * @param $value
   *
   * @return $this
   */
  public function setListVisibility($value) {
    $this->set('field_list_visibility', $value);
    return $this;
  }

  /**
   * Retrieves field_list_visibility
   *
   * @return mixed
   */
  public function getListVisibility() {
    return $this->get('field_list_visibility');
  }

  /**
   * Sets field_first_name
   *
   * @param $value
   *
   * @return $this
   */
  public function setFirstName($value, $format = NULL) {
    $this->setText('field_first_name', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_first_name
   *
   * @return mixed
   */
  public function getFirstName($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_first_name', $format, $markup_format);
  }

  /**
   * Sets field_last_name
   *
   * @param $value
   *
   * @return $this
   */
  public function setLastName($value, $format = NULL) {
    $this->setText('field_last_name', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_last_name
   *
   * @return mixed
   */
  public function getLastName($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_last_name', $format, $markup_format);
  }

  /**
   * Sets field_public_list
   *
   * @param $value
   *
   * @return $this
   */
  public function setPublicList($value) {
    $this->set('field_public_list', $value);
    return $this;
  }

  /**
   * Retrieves field_public_list
   *
   * @return mixed
   */
  public function getPublicList() {
    return $this->get('field_public_list');
  }

}
