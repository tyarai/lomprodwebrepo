<?php
/**
 * @file
 * class WdCommentWrapper
 */

class WdCommentWrapper extends WdEntityWrapper {

  protected $entity_type = 'comment';

  /**
   * Create a new comment.
   *
   * @param array $values
   * @param string $language
   *
   * @return WdCommentWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'comment');
    $entity_wrapper = parent::create($values, $language);
    return new WdCommentWrapper($entity_wrapper->value());
  }

  /**
   * Retrieves cid
   *
   * @return int
   */
  public function getCid() {
    return $this->getIdentifier();
  }

  /**
   * Sets hostname
   *
   * @param mixed $value
   *
   * @return $this
   */
  public function setHostname($value) {
    $this->set('hostname', $value);
    return $this;
  }

  /**
   * Retrieves hostname
   *
   * @return mixed
   */
  public function getHostname() {
    return $this->get('hostname');
  }

  /**
   * Sets name
   *
   * @param mixed $value
   *
   * @return $this
   */
  public function setName($value) {
    $this->set('name', $value);
    return $this;
  }

  /**
   * Retrieves name
   *
   * @return mixed
   */
  public function getName() {
    return $this->get('name');
  }

  /**
   * Sets mail
   *
   * @param mixed $value
   *
   * @return $this
   */
  public function setMail($value) {
    $this->set('mail', $value);
    return $this;
  }

  /**
   * Retrieves mail
   *
   * @return mixed
   */
  public function getMail() {
    return $this->get('mail');
  }

  /**
   * Sets homepage
   *
   * @param mixed $value
   *
   * @return $this
   */
  public function setHomepage($value) {
    $this->set('homepage', $value);
    return $this;
  }

  /**
   * Retrieves homepage
   *
   * @return mixed
   */
  public function getHomepage() {
    return $this->get('homepage');
  }

  /**
   * Sets subject
   *
   * @param mixed $value
   *
   * @return $this
   */
  public function setSubject($value) {
    $this->set('subject', $value);
    return $this;
  }

  /**
   * Retrieves subject
   *
   * @return mixed
   */
  public function getSubject() {
    return $this->get('subject');
  }

  /**
   * Retrieves url
   *
   * @return string
   */
  public function getUrl() {
    return $this->get('url');
  }

  /**
   * Retrieves edit_url
   *
   * @return string
   */
  public function getEditUrl() {
    return $this->get('edit_url');
  }

  /**
   * Sets created
   *
   * @param int $value
   *
   * @return $this
   */
  public function setCreated($value) {
    $this->set('created', $value);
    return $this;
  }

  /**
   * Retrieves created
   *
   * @return int|string
   */
  public function getCreated($format = WdEntityWrapper::DATE_UNIX, $custom_format = '') {
    return $this->getDate('created', $format, $custom_format);
  }


  /**
   * Sets parent
   *
   * @param int|object|WdCommentWrapper $value
   *
   * @return $this
   */
  public function setParent($value) {
    if ($value instanceof WdEntityWrapper) {
      $value = $value->value();
    }
    $this->set('parent', $value);
    return $this;
  }

  /**
   * Retrieves parent
   *
   * @return WdCommentWrapper
   */
  public function getParent() {
    $value = $this->get('parent');
    if (!empty($value)) {
      return new WdCommentWrapper($value);
    }
    return NULL;
  }

  /**
   * Sets node
   *
   * @param int|object|WdNodeWrapper $value
   *
   * @return $this
   */
  public function setNode($value) {
    if ($value instanceof WdEntityWrapper) {
      $value = $value->value();
    }
    $this->set('node', $value);
    return $this;
  }

  /**
   * Retrieves node
   *
   * @return WdNodeWrapper
   */
  public function getNode() {
    $value = $this->get('node');
    if (!empty($value)) {
      return new WdNodeWrapper($value);
    }
    return NULL;
  }

  /**
   * Sets author
   *
   * @param int|object|WdUserWrapper $value
   *
   * @return $this
   */
  public function setAuthor($value) {
    if ($value instanceof WdEntityWrapper) {
      $value = $value->value();
    }
    $this->set('author', $value);
    return $this;
  }

  /**
   * Retrieves author
   *
   * @return WdUserWrapper
   */
  public function getAuthor() {
    $value = $this->get('author');
    if (!empty($value)) {
      return new WdUserWrapper($value);
    }
    return NULL;
  }

  /**
   * Sets status
   *
   * @param int $value
   *
   * @return $this
   */
  public function setStatus($value) {
    $this->set('status', $value);
    return $this;
  }

  /**
   * Retrieves status
   *
   * @return int
   */
  public function getStatus() {
    return $this->get('status');
  }

  /**
   * Sets comment_body
   *
   * @param mixed $value
   *
   * @return $this
   */
  public function setCommentBody($value) {
    $this->set('comment_body', $value);
    return $this;
  }

  /**
   * Retrieves comment_body
   *
   * @return mixed
   */
  public function getCommentBody() {
    return $this->get('comment_body');
  }

  /**
   * Sets uuid
   *
   * @param string $value
   *
   * @return $this
   */
  public function setUuid($value) {
    $this->set('uuid', $value);
    return $this;
  }

  /**
   * Retrieves uuid
   *
   * @return string
   */
  public function getUuid($format = WdEntityWrapper::FORMAT_PLAIN) {
    return $this->getText('uuid', $format);
  }

}
