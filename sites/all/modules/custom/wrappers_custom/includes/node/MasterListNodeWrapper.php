<?php
/**
 * @file
 * class MasterListNodeWrapper
 */

class MasterListNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'master_list';

  /**
   * Create a new master_list node.
   *
   * @param array $values
   * @param string $language
   * @return MasterListNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new MasterListNodeWrapper($entity_wrapper->value());
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
   * Sets field_user
   *
   * @param $value
   *
   * @return $this
   */
  public function setUser($value) {
    if (is_array($value)) {
      foreach ($value as $i => $v) {
        if ($v instanceof WdUserWrapper) {
          $value[$i] = $v->value();
        }
      }
    }
    else {
      if ($value instanceof WdUserWrapper) {
        $value = $value->value();
      }
    }

    $this->set('field_user', $value);
    return $this;
  }

  /**
   * Retrieves field_user
   *
   * @return WdUserWrapper
   */
  public function getUser() {
    $value = $this->get('field_user');
    if (!empty($value)) {
      $value = new WdUserWrapper($value);
    }
    return $value;
  }

  /**
   * Sets field_list_status
   *
   * @param $value
   *
   * @return $this
   */
  public function setListStatus($value) {
    $this->set('field_list_status', $value);
    return $this;
  }

  /**
   * Retrieves field_list_status
   *
   * @return mixed
   */
  public function getListStatus() {
    return $this->get('field_list_status');
  }

  /**
   * Sets field_species_count
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpeciesCount($value) {
    $this->set('field_species_count', $value);
    return $this;
  }

  /**
   * Retrieves field_species_count
   *
   * @return mixed
   */
  public function getSpeciesCount() {
    return $this->get('field_species_count');
  }

}
