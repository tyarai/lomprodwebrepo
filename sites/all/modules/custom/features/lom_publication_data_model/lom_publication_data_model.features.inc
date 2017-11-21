<?php
/**
 * @file
 * lom_publication_data_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lom_publication_data_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lom_publication_data_model_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function lom_publication_data_model_eck_bundle_info() {
  $items = array(
    'lom_user_settings_entity_lom_user_settings_entity' => array(
      'machine_name' => 'lom_user_settings_entity_lom_user_settings_entity',
      'entity_type' => 'lom_user_settings_entity',
      'name' => 'lom_user_settings_entity',
      'label' => 'LOM User settings Entity',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function lom_publication_data_model_eck_entity_type_info() {
  $items = array(
    'lom_user_settings_entity' => array(
      'name' => 'lom_user_settings_entity',
      'label' => 'LOM User settings Entity',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'value' => array(
          'label' => 'value',
          'type' => 'text',
          'behavior' => '',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function lom_publication_data_model_node_info() {
  $items = array(
    'publication' => array(
      'name' => t('Sighting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
