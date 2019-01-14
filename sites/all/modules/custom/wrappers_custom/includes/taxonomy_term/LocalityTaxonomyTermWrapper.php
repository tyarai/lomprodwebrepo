<?php
/**
 * @file
 * class LocalityTaxonomyTermWrapper
 */

class LocalityTaxonomyTermWrapper extends WdTaxonomyTermWrapper {

  protected $entity_type = 'taxonomy_term';
  private static $bundle = 'locality';

  /**
   * Create a new locality taxonomy_term.
   *
   * @param array $values
   * @param string $language
   * @return LocalityTaxonomyTermWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'taxonomy_term', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LocalityTaxonomyTermWrapper($entity_wrapper->value());
  }

}