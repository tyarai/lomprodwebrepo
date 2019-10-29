<?php
/**
 * @file
 * lom_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lom_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lom_content_types_node_info() {
  $items = array(
    'authors' => array(
      'name' => t('Authors'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
