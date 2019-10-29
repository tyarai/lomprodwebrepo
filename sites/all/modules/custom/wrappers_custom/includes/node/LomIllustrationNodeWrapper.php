<?php
/**
 * @file
 * class LomIllustrationNodeWrapper
 */

class LomIllustrationNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'lom_illustration';

  /**
   * Create a new lom_illustration node.
   *
   * @param array $values
   * @param string $language
   * @return LomIllustrationNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LomIllustrationNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_lom_illustration
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomIllustration($value) {
    $this->set('field_lom_illustration', $value);
    return $this;
  }

  /**
   * Retrieves field_lom_illustration
   *
   * @return mixed
   */
  public function getLomIllustration() {
    return $this->get('field_lom_illustration');
  }

  /**
   * Retrieves field_lom_illustration as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string[]
   */
  public function getLomIllustrationHtml($image_style = NULL, $options = array()) {
    $images = $this->get('field_lom_illustration');
    $image_html = array();
    if (!empty($images)) {
      foreach ($images as $i => $image) {
        $options += array(
          'path' => $image['uri'],
        );
        if (!is_null($image_style)) {
          $options['style_name'] = $image_style;
          $image_html[$i] = theme('image_style', $options);
        }
        else {
          $image_html[$i] = theme('image', $options);
        }
      }
    }
    return $image_html;
  }


  /**
   * Retrieves field_lom_illustration as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getLomIllustrationUrl($image_style = NULL) {
    $images = $this->get('field_lom_illustration');
    if (!empty($images)) {
      foreach ($images as $i => $image) {
        if (!is_null($image_style)) {
          $images[$i] = image_style_url($image_style, $image['uri']);
        }
        else {
          $images[$i] = url(file_create_url($image['uri']));
        }
      }
    }
    return $images;
  }


  /**
   * Sets field_lom_illustration_desc
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomIllustrationDesc($value, $format = NULL) {
    $this->setText('field_lom_illustration_desc', $value, $format);
    return $this;
  }

  /**
   * Retrieves field_lom_illustration_desc
   *
   * @return mixed
   */
  public function getLomIllustrationDesc($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_illustration_desc', $format, $markup_format);
  }

}
