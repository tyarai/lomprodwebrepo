<?php
/**
 * @file
 * lom_illegal_activities_data_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lom_illegal_activities_data_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lom_illegal_activities_data_model_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lom_illegal_activities_data_model_node_info() {
  $items = array(
    'illegal_activities' => array(
      'name' => t('Illegal Activities'),
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