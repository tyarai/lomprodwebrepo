<?php
/**
 * @file
 * class TaxonomyVocabularyTaxonomyVocabularyWrapper
 */

class TaxonomyVocabularyTaxonomyVocabularyWrapper extends WdTaxonomyVocabularyWrapper {

  protected $entity_type = 'taxonomy_vocabulary';
  private static $bundle = 'taxonomy_vocabulary';

  /**
   * Create a new taxonomy_vocabulary taxonomy_vocabulary.
   *
   * @param array $values
   * @param string $language
   * @return TaxonomyVocabularyTaxonomyVocabularyWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'taxonomy_vocabulary', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new TaxonomyVocabularyTaxonomyVocabularyWrapper($entity_wrapper->value());
  }

}