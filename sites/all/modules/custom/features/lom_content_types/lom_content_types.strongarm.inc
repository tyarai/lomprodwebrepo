<?php
/**
 * @file
 * lom_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lom_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_authors';
  $strongarm->value = 0;
  $export['comment_anonymous_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_authors';
  $strongarm->value = '1';
  $export['comment_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_authors';
  $strongarm->value = 0;
  $export['comment_default_mode_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_authors';
  $strongarm->value = '50';
  $export['comment_default_per_page_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_authors';
  $strongarm->value = 1;
  $export['comment_form_location_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_authors';
  $strongarm->value = '0';
  $export['comment_preview_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_authors';
  $strongarm->value = 1;
  $export['comment_subject_field_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__authors';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'sighting_list_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'all_life_list' => array(
        'custom_settings' => FALSE,
      ),
      'all_species_list_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'best_places_map_view' => array(
        'custom_settings' => FALSE,
      ),
      'extinct_lemur_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'lemur_minimal_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'lemur_photograph_export' => array(
        'custom_settings' => FALSE,
      ),
      'lemur_species_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'map_image_medium' => array(
        'custom_settings' => FALSE,
      ),
      'photograph_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'photograph_with_title' => array(
        'custom_settings' => FALSE,
      ),
      'profile_photograph_' => array(
        'custom_settings' => FALSE,
      ),
      'publication_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'sighting' => array(
        'custom_settings' => FALSE,
      ),
      'species_profile_photo_small' => array(
        'custom_settings' => FALSE,
      ),
      'species_selecting' => array(
        'custom_settings' => FALSE,
      ),
      'species_selecting_small' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_authors';
  $strongarm->value = array();
  $export['menu_options_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_authors';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_authors';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_authors';
  $strongarm->value = '1';
  $export['node_preview_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_authors';
  $strongarm->value = 0;
  $export['node_submitted_authors'] = $strongarm;

  return $export;
}
