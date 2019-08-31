<?php
/**
 * @file
 * class TagsTaxonomyTermWrapper
 */

class TagsTaxonomyTermWrapper extends WdTaxonomyTermWrapper {

  protected $entity_type = 'taxonomy_term';
  private static $bundle = 'tags';

  /**
   * Create a new tags taxonomy_term.
   *
   * @param array $values
   * @param string $language
   * @return TagsTaxonomyTermWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'taxonomy_term', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new TagsTaxonomyTermWrapper($entity_wrapper->value());
  }
  
  
  /*
   * Exporter-na JSON daholo izay taxonomy rehetra
   */
  public static function exportToJSON(){

        $records = array();
      
        //------ Illegal Activities Type Taxonomy --------------
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'taxonomy_term')
        ->entityCondition('bundle', 'illegal_activity_type');
        $results = $query->execute();
        
        if (isset($results['taxonomy_term'])) {
            $term_tids = array_keys($results['taxonomy_term']);
            $terms = taxonomy_term_load_multiple($term_tids);
            foreach ($terms  as $term) {
                $wrapper = entity_metadata_wrapper('taxonomy_term',$term);
                /*$records['illegal_activity_type'][] =array(
                    'tid' => intval($term->tid),
                    'name' => $term->name,
                    'uuid' => $term->uuid,
                );*/
                $records['illegal_activity_type'][] = array(
                    '_tid' => intval($term->tid),
                    '_name_en' => $term->name,
                    '_uuid' => $term->uuid,
                    '_vocabulary_name' => 'illegal_activity_type',
                );
            }
        }
        
        //return drupal_json_encode($records);
        return $records;

    }

}