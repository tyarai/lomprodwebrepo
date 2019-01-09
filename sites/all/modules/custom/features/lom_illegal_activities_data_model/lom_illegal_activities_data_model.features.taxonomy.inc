<?php
/**
 * @file
 * lom_illegal_activities_data_model.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lom_illegal_activities_data_model_taxonomy_default_vocabularies() {
  return array(
    'illegal_activity_type' => array(
      'name' => 'Illegal Activity Type',
      'machine_name' => 'illegal_activity_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
