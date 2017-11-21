<?php
/**
 * @file
 * class ArticleNodeWrapper
 */

class ArticleNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'article';

  /**
   * Create a new article node.
   *
   * @param array $values
   * @param string $language
   * @return ArticleNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new ArticleNodeWrapper($entity_wrapper->value());
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
   * Sets field_image
   *
   * @param $value
   *
   * @return $this
   */
  public function setImage($value) {
    $this->set('field_image', $value);
    return $this;
  }

  /**
   * Retrieves field_image
   *
   * @return mixed
   */
  public function getImage() {
    return $this->get('field_image');
  }

  /**
   * Retrieves field_image as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getImageHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_image');
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
   * Retrieves field_image as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getImageUrl($image_style = NULL) {
    $image = $this->get('field_image');
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


}
