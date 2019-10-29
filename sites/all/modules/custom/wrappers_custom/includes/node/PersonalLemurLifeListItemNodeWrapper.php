<?php
/**
 * @file
 * class PersonalLemurLifeListItemNodeWrapper
 */

class PersonalLemurLifeListItemNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'personal_lemur_life_list_item';

  /**
   * Create a new personal_lemur_life_list_item node.
   *
   * @param array $values
   * @param string $language
   * @return PersonalLemurLifeListItemNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new PersonalLemurLifeListItemNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_species
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpecies($value) {
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

    $this->set('field_species', $value);
    return $this;
  }

  /**
   * Retrieves field_species
   *
   * @return LomSpeciesNodeWrapper
   */
  public function getSpecies() {
    $value = $this->get('field_species');
    if (!empty($value)) {
      $value = new LomSpeciesNodeWrapper($value);
    }
    return $value;
  }

  /**
   * Sets field_locality
   *
   * @param $value
   *
   * @return $this
   */
  public function setLocality($value, $format = NULL) {
    $this->setText('field_locality', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_locality
   *
   * @return mixed
   */
  public function getLocality($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_locality', $format, $markup_format);
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
   * Sets field_lemur_photo
   *
   * @param $value
   *
   * @return $this
   */
  public function setLemurPhoto($value) {
    $this->set('field_lemur_photo', $value);
    return $this;
  }

  /**
   * Retrieves field_lemur_photo
   *
   * @return mixed
   */
  public function getLemurPhoto() {
    return $this->get('field_lemur_photo');
  }

  /**
   * Retrieves field_lemur_photo as an HTML <img> tag
   *
   * @param string $image_style
   *   (optional) Image style for the HTML
   * @param array $options
   *   (optional) options to pass to the theme function. If you want to add
   *   attributes, you can do that under the attributes key of this array.
   *
   * @return string
   */
  public function getLemurPhotoHtml($image_style = NULL, $options = array()) {
    $image = $this->get('field_lemur_photo');
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
   * Retrieves field_lemur_photo as a URL
   *
   * @param string $image_style
   *   (optional) Image style for the URL
   * @param bool $absolute
   *   Whether to return an absolute URL or not
   *
   * @return string
   */
  public function getLemurPhotoUrl($image_style = NULL) {
    $image = $this->get('field_lemur_photo');
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

}
