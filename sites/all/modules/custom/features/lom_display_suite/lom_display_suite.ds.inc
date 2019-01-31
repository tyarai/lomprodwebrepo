<?php
/**
 * @file
 * lom_display_suite.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function lom_display_suite_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|authors|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'authors';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|authors|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|best_places|best_places_map_view';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'best_places';
  $ds_fieldsetting->view_mode = 'best_places_map_view';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|best_places|best_places_map_view'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|illegal_activities|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'illegal_activities';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
  );
  $export['node|illegal_activities|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_photograph|photograph_with_title';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_photograph';
  $ds_fieldsetting->view_mode = 'photograph_with_title';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|lom_photograph|photograph_with_title'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_species|extinct_lemur_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_species';
  $ds_fieldsetting->view_mode = 'extinct_lemur_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'div',
        'class' => 'extinct_species_title',
      ),
    ),
  );
  $export['node|lom_species|extinct_lemur_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_species|lemur_minimal_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_species';
  $ds_fieldsetting->view_mode = 'lemur_minimal_view_mode';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|lom_species|lemur_minimal_view_mode'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_species|lemur_photograph_export';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_species';
  $ds_fieldsetting->view_mode = 'lemur_photograph_export';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|lom_species|lemur_photograph_export'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_species|lemur_species_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_species';
  $ds_fieldsetting->view_mode = 'lemur_species_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'species_title',
      ),
    ),
  );
  $export['node|lom_species|lemur_species_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_species|species_selecting';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_species';
  $ds_fieldsetting->view_mode = 'species_selecting';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|lom_species|species_selecting'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lom_species|species_selecting_small';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lom_species';
  $ds_fieldsetting->view_mode = 'species_selecting_small';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|lom_species|species_selecting_small'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|publication_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'publication_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'links' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'link class' => '',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|publication|publication_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|sighting';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'sighting';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'author' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'author',
    ),
  );
  $export['node|publication|sighting'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|video|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'video_title',
      ),
    ),
  );
  $export['node|video|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function lom_display_suite_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|authors|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'authors';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_photo',
      ),
      'right' => array(
        1 => 'body',
      ),
      'header' => array(
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_photo' => 'left',
      'body' => 'right',
      'title' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|authors|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|best_places|best_places_map_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'best_places';
  $ds_layout->view_mode = 'best_places_map_view';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_species_map',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_species_map' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|best_places|best_places_map_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_illustration|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_illustration';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_illustration',
        1 => 'field_lom_illustration_desc',
      ),
    ),
    'fields' => array(
      'field_lom_illustration' => 'ds_content',
      'field_lom_illustration_desc' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_illustration|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_map|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_map';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_map',
      ),
    ),
    'fields' => array(
      'field_map' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lom_map|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_map|map_image_medium';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_map';
  $ds_layout->view_mode = 'map_image_medium';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_map',
      ),
    ),
    'fields' => array(
      'field_map' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lom_map|map_image_medium'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lom_photograph|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|lemur_photograph_export';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'lemur_photograph_export';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|lom_photograph|lemur_photograph_export'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|photograph_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'photograph_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|lom_photograph|photograph_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|photograph_with_title';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'photograph_with_title';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_photograph|photograph_with_title'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|profile_photograph_';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'profile_photograph_';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_photograph|profile_photograph_'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|species_profile_photo_small';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'species_profile_photo_small';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lom_photograph|species_profile_photo_small'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_photograph|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_photograph';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_lom_photograph',
      ),
    ),
    'fields' => array(
      'field_lom_photograph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_photograph|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_species_profile_photograph',
        1 => 'field_scientific_name',
        2 => 'field_scientist_name',
        3 => 'field_lom_en',
        4 => 'field_lom_other_en',
        5 => 'field_lom_fr',
        6 => 'field_lom_german',
        7 => 'field_lom_mg',
        8 => 'field_lom_family',
        9 => 'field_taxa',
        10 => 'group_identification',
        11 => 'group_species',
        12 => 'group_natural_history',
        13 => 'group_geographic_range',
        14 => 'field_lom_natural_history',
        15 => 'group_conservation_status',
        16 => 'field_lom_conservation_status',
        17 => 'group_where_to_see_it',
        18 => 'field_lom_identification',
        19 => 'group_photographs',
        20 => 'field_lom_where_to_see_it',
        21 => 'field_species_photograph',
        22 => 'field_lom_geographic_range',
        23 => 'field_species_map',
      ),
    ),
    'fields' => array(
      'field_species_profile_photograph' => 'ds_content',
      'field_scientific_name' => 'ds_content',
      'field_scientist_name' => 'ds_content',
      'field_lom_en' => 'ds_content',
      'field_lom_other_en' => 'ds_content',
      'field_lom_fr' => 'ds_content',
      'field_lom_german' => 'ds_content',
      'field_lom_mg' => 'ds_content',
      'field_lom_family' => 'ds_content',
      'field_taxa' => 'ds_content',
      'group_identification' => 'ds_content',
      'group_species' => 'ds_content',
      'group_natural_history' => 'ds_content',
      'group_geographic_range' => 'ds_content',
      'field_lom_natural_history' => 'ds_content',
      'group_conservation_status' => 'ds_content',
      'field_lom_conservation_status' => 'ds_content',
      'group_where_to_see_it' => 'ds_content',
      'field_lom_identification' => 'ds_content',
      'group_photographs' => 'ds_content',
      'field_lom_where_to_see_it' => 'ds_content',
      'field_species_photograph' => 'ds_content',
      'field_lom_geographic_range' => 'ds_content',
      'field_species_map' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lom_species|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|extinct_lemur_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'extinct_lemur_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_species|extinct_lemur_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|lemur_minimal_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'lemur_minimal_view_mode';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_species|lemur_minimal_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|lemur_photograph_export';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'lemur_photograph_export';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_species_profile_photograph',
      ),
      'right' => array(
        2 => 'field_lom_en',
        3 => 'field_lom_other_en',
        4 => 'field_lom_mg',
        5 => 'field_lom_fr',
        6 => 'field_lom_german',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_species_profile_photograph' => 'left',
      'field_lom_en' => 'right',
      'field_lom_other_en' => 'right',
      'field_lom_mg' => 'right',
      'field_lom_fr' => 'right',
      'field_lom_german' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_species|lemur_photograph_export'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|lemur_species_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'lemur_species_teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_species_profile_photograph',
      ),
      'right' => array(
        2 => 'field_lom_en',
        3 => 'field_lom_other_en',
        4 => 'field_lom_mg',
        5 => 'field_lom_german',
        6 => 'field_lom_fr',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_species_profile_photograph' => 'left',
      'field_lom_en' => 'right',
      'field_lom_other_en' => 'right',
      'field_lom_mg' => 'right',
      'field_lom_german' => 'right',
      'field_lom_fr' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lom_species|lemur_species_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|species_selecting';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'species_selecting';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_species_profile_photograph',
      ),
      'middle' => array(
        2 => 'field_lom_mg',
        3 => 'field_lom_en',
        4 => 'field_lom_german',
        5 => 'field_lom_fr',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_species_profile_photograph' => 'left',
      'field_lom_mg' => 'middle',
      'field_lom_en' => 'middle',
      'field_lom_german' => 'middle',
      'field_lom_fr' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|lom_species|species_selecting'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lom_species|species_selecting_small';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lom_species';
  $ds_layout->view_mode = 'species_selecting_small';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_species_profile_photograph',
      ),
      'right' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_species_profile_photograph' => 'left',
      'title' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|lom_species|species_selecting_small'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|master_list|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'master_list';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user',
        1 => 'field_list_status',
        2 => 'field_species_count',
      ),
    ),
    'fields' => array(
      'field_user' => 'ds_content',
      'field_list_status' => 'ds_content',
      'field_species_count' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|master_list|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|personal_lemur_life_list_item|all_life_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'personal_lemur_life_list_item';
  $ds_layout->view_mode = 'all_life_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_species',
        1 => 'field_date',
        2 => 'field_locality',
        3 => 'field_lemur_photo',
      ),
    ),
    'fields' => array(
      'field_species' => 'ds_content',
      'field_date' => 'ds_content',
      'field_locality' => 'ds_content',
      'field_lemur_photo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|personal_lemur_life_list_item|all_life_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|publication_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'publication_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_photo',
        2 => 'field_associated_species',
        3 => 'field_count',
        4 => 'field_place_name',
        5 => 'field_date',
        6 => 'node_link',
        7 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_photo' => 'ds_content',
      'field_associated_species' => 'ds_content',
      'field_count' => 'ds_content',
      'field_place_name' => 'ds_content',
      'field_date' => 'ds_content',
      'node_link' => 'ds_content',
      'links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|publication|publication_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|sighting';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'sighting';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_photo',
        2 => 'field_associated_species',
        3 => 'field_place_name',
        4 => 'field_count',
        5 => 'field_date',
        6 => 'author',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_photo' => 'ds_content',
      'field_associated_species' => 'ds_content',
      'field_place_name' => 'ds_content',
      'field_count' => 'ds_content',
      'field_date' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|publication|sighting'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_video',
      ),
      'header' => array(
        1 => 'title',
      ),
      'footer' => array(
        2 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_video' => 'left',
      'title' => 'header',
      'field_tags' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_video',
      ),
      'footer' => array(
        1 => 'field_tags',
      ),
      'header' => array(
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_video' => 'left',
      'field_tags' => 'footer',
      'title' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|video|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'name',
        2 => 'field_first_name',
        3 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'name' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_last_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function lom_display_suite_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'all_life_list';
  $ds_view_mode->label = 'All life list';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['all_life_list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'all_species_list_view_mode';
  $ds_view_mode->label = 'All species list view mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['all_species_list_view_mode'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'best_places_map_view';
  $ds_view_mode->label = 'Best Places Map View';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['best_places_map_view'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'extinct_lemur_teaser';
  $ds_view_mode->label = 'Extinct Lemur Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['extinct_lemur_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'lemur_minimal_view_mode';
  $ds_view_mode->label = 'Lemur minimal view mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['lemur_minimal_view_mode'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'lemur_photograph_export';
  $ds_view_mode->label = 'Lemur photograph export';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['lemur_photograph_export'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'lemur_species_teaser';
  $ds_view_mode->label = 'Lemur Species Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['lemur_species_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_image_medium';
  $ds_view_mode->label = 'Map Image Medium';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map_image_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'photograph_teaser';
  $ds_view_mode->label = 'Photograph teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['photograph_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'photograph_with_title';
  $ds_view_mode->label = 'Photograph with title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['photograph_with_title'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'profile_photograph_';
  $ds_view_mode->label = 'Profile photograph ';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['profile_photograph_'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'publication_teaser';
  $ds_view_mode->label = 'Publication teaser';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
    'node' => 'node',
  );
  $export['publication_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sighting';
  $ds_view_mode->label = 'Sighting';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sighting'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'species_profile_photo_small';
  $ds_view_mode->label = 'Species Profile Photo Small';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['species_profile_photo_small'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'species_selecting';
  $ds_view_mode->label = 'Species Selecting';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['species_selecting'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'species_selecting_small';
  $ds_view_mode->label = 'Species Selecting Small';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['species_selecting_small'] = $ds_view_mode;

  return $export;
}
