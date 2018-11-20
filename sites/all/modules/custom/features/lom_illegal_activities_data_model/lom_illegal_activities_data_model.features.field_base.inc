<?php
/**
 * @file
 * lom_illegal_activities_data_model.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lom_illegal_activities_data_model_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_offence'
  $field_bases['field_offence'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_offence',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'no',
        1 => 'yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
