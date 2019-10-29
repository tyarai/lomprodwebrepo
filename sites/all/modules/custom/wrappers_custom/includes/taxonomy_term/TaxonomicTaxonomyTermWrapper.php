<?php
/**
 * @file
 * class TaxonomicTaxonomyTermWrapper
 */

class TaxonomicTaxonomyTermWrapper extends WdTaxonomyTermWrapper {

  protected $entity_type = 'taxonomy_term';
  private static $bundle = 'taxonomic';

  /**
   * Create a new taxonomic taxonomy_term.
   *
   * @param array $values
   * @param string $language
   * @return TaxonomicTaxonomyTermWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'taxonomy_term', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new TaxonomicTaxonomyTermWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_taxa_order
   *
   * @param $value
   *
   * @return $this
   */
  public function setTaxaOrder($value) {
    $this->set('field_taxa_order', $value);
    return $this;
  }

  /**
   * Retrieves field_taxa_order
   *
   * @return mixed
   */
  public function getTaxaOrder() {
    return $this->get('field_taxa_order');
  }

  
  
  
}
