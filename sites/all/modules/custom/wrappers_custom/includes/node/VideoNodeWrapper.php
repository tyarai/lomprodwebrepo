<?php
/**
 * @file
 * class VideoNodeWrapper
 */

class VideoNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'video';

  /**
   * Create a new video node.
   *
   * @param array $values
   * @param string $language
   * @return VideoNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new VideoNodeWrapper($entity_wrapper->value());
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
   * Sets field_video
   *
   * @param $value
   *
   * @return $this
   */
  public function setVideo($value) {
    $this->set('field_video', $value);
    return $this;
  }

  /**
   * Retrieves field_video
   *
   * @return mixed
   */
  public function getVideo() {
    return $this->get('field_video');
  }

  /**
   * Retrieves field_video as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getVideoUrl($absolute = FALSE) {
    $file = $this->get('field_video');
    if (!empty($file)) {
      $file = url(file_create_url($file['uri']), array('absolute' => $absolute));
    }
    return $file;
  }


  /**
   * Sets field_tags
   *
   * @param $value
   *
   * @return $this
   */
  public function setTags($value) {
    $this->set('field_tags', $value);
    return $this;
  }

  /**
   * Retrieves field_tags
   *
   * @return mixed
   */
  public function getTags() {
    return $this->get('field_tags');
  }

  /**
   * Sets field_taxa
   *
   * @param $value
   *
   * @return $this
   */
  public function setTaxa($value) {
    $this->set('field_taxa', $value);
    return $this;
  }

  /**
   * Retrieves field_taxa
   *
   * @return mixed
   */
  public function getTaxa() {
    return $this->get('field_taxa');
  }

}
