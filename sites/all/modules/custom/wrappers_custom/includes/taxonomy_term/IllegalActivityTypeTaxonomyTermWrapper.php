<?php
/**
 * @file
 * class IllegalActivityTypeTaxonomyTermWrapper
 */

class IllegalActivityTypeTaxonomyTermWrapper extends WdTaxonomyTermWrapper {

  protected $entity_type = 'taxonomy_term';
  private static $bundle = 'illegal_activity_type';

  /**
   * Create a new illegal_activity_type taxonomy_term.
   *
   * @param array $values
   * @param string $language
   * @return IllegalActivityTypeTaxonomyTermWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'taxonomy_term', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new IllegalActivityTypeTaxonomyTermWrapper($entity_wrapper->value());
  }

    
  
}