<?php
/**
 * @file
 * lom_all_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lom_all_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '_personal_lemur_life_list';
  $view->description = 'Personal lemur life-list item View';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = ' Personal lemur life-list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Species-in-my-personal-lemur-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_locality_editable' => 'field_locality_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locality_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['relationship_creation_bundle'] = array(
    'reverse_field_species_node' => 'personal_lemur_life_list_item',
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['relationship'] = 'reverse_field_species_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Species';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Where did  you see it? (editable) */
  $handler->display->display_options['fields']['field_locality_editable']['id'] = 'field_locality_editable';
  $handler->display->display_options['fields']['field_locality_editable']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality_editable']['field'] = 'field_locality_editable';
  $handler->display->display_options['fields']['field_locality_editable']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locality_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_locality_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_locality_editable']['suppress_description'] = 0;
  /* Field: Content: When did you see it for the first time? (editable) */
  $handler->display->display_options['fields']['field_date_editable']['id'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_editable']['field'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_editable']['widget_type'] = 'date_popup';
  $handler->display->display_options['fields']['field_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_date_editable']['suppress_description'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by scientific name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Species';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Where did  you see it? (editable) */
  $handler->display->display_options['fields']['field_locality_editable']['id'] = 'field_locality_editable';
  $handler->display->display_options['fields']['field_locality_editable']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality_editable']['field'] = 'field_locality_editable';
  $handler->display->display_options['fields']['field_locality_editable']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locality_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_locality_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_locality_editable']['suppress_description'] = 0;
  /* Field: Content: When did you see it for the first time? (editable) */
  $handler->display->display_options['fields']['field_date_editable']['id'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_editable']['field'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_editable']['widget_type'] = 'date_popup';
  $handler->display->display_options['fields']['field_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_date_editable']['suppress_description'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_target_id';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['path'] = 'list/species-in-my-personal-lemur-life-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All species';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['_personal_lemur_life_list'] = $view;

  $view = new view();
  $view->name = 'all_personal_lemur_life_list_view_widget';
  $view->description = 'All species view widget';
  $view->tag = 'Widget view';
  $view->base_table = 'node';
  $view->human_name = 'All personal lemur life list view widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_target_id']['id'] = 'field_species_target_id';
  $handler->display->display_options['relationships']['field_species_target_id']['table'] = 'field_data_field_species';
  $handler->display->display_options['relationships']['field_species_target_id']['field'] = 'field_species_target_id';
  $handler->display->display_options['relationships']['field_species_target_id']['required'] = TRUE;
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = 'Select';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Species';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by scientific name';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Scientific name containing ...';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All species';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All species';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['all_personal_lemur_life_list_view_widget'] = $view;

  $view = new view();
  $view->name = 'all_species';
  $view->description = 'All species';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All species';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_lom_family',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_taxa',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'lemur_species_teaser';
  /* Relationship: Content: Taxa (field_taxa) */
  $handler->display->display_options['relationships']['field_taxa_tid']['id'] = 'field_taxa_tid';
  $handler->display->display_options['relationships']['field_taxa_tid']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['relationships']['field_taxa_tid']['field'] = 'field_taxa_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lom_family_target_id']['id'] = 'field_lom_family_target_id';
  $handler->display->display_options['relationships']['field_lom_family_target_id']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['relationships']['field_lom_family_target_id']['field'] = 'field_lom_family_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_lom_en']['id'] = 'field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['table'] = 'field_data_field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['field'] = 'field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['label'] = 'English name';
  $handler->display->display_options['fields']['field_lom_en']['element_label_colon'] = FALSE;
  /* Field: Content: Malagasy */
  $handler->display->display_options['fields']['field_lom_mg']['id'] = 'field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['table'] = 'field_data_field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['field'] = 'field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['label'] = 'Malagasy name';
  $handler->display->display_options['fields']['field_lom_mg']['element_label_colon'] = FALSE;
  /* Field: Content: German */
  $handler->display->display_options['fields']['field_lom_german']['id'] = 'field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['table'] = 'field_data_field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['field'] = 'field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['label'] = 'German name';
  $handler->display->display_options['fields']['field_lom_german']['element_label_colon'] = FALSE;
  /* Field: Content: French */
  $handler->display->display_options['fields']['field_lom_fr']['id'] = 'field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['table'] = 'field_data_field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['field'] = 'field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['label'] = 'French name';
  $handler->display->display_options['fields']['field_lom_fr']['element_label_colon'] = FALSE;
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_lom_family']['id'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['field'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['label'] = '';
  $handler->display->display_options['fields']['field_lom_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lom_family']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lom_family']['settings'] = array(
    'link' => 1,
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_taxa_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Content: Taxa */
  $handler->display->display_options['fields']['field_taxa']['id'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['fields']['field_taxa']['field'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['label'] = '';
  $handler->display->display_options['fields']['field_taxa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_taxa']['alter']['text'] = '[field_taxa] : [description] ';
  $handler->display->display_options['fields']['field_taxa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxa']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Family order (field_family_order) */
  $handler->display->display_options['sorts']['field_family_order_value']['id'] = 'field_family_order_value';
  $handler->display->display_options['sorts']['field_family_order_value']['table'] = 'field_data_field_family_order';
  $handler->display->display_options['sorts']['field_family_order_value']['field'] = 'field_family_order_value';
  $handler->display->display_options['sorts']['field_family_order_value']['relationship'] = 'field_lom_family_target_id';
  /* Sort criterion: Taxonomy term: Taxa order (field_taxa_order) */
  $handler->display->display_options['sorts']['field_taxa_order_value']['id'] = 'field_taxa_order_value';
  $handler->display->display_options['sorts']['field_taxa_order_value']['table'] = 'field_data_field_taxa_order';
  $handler->display->display_options['sorts']['field_taxa_order_value']['field'] = 'field_taxa_order_value';
  $handler->display->display_options['sorts']['field_taxa_order_value']['relationship'] = 'field_taxa_tid';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by scientific name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: English (field_lom_en) */
  $handler->display->display_options['filters']['field_lom_en_value']['id'] = 'field_lom_en_value';
  $handler->display->display_options['filters']['field_lom_en_value']['table'] = 'field_data_field_lom_en';
  $handler->display->display_options['filters']['field_lom_en_value']['field'] = 'field_lom_en_value';
  $handler->display->display_options['filters']['field_lom_en_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_en_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_en_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['operator_id'] = 'field_lom_en_value_op';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['label'] = 'Filter by english name';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['operator'] = 'field_lom_en_value_op';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['identifier'] = 'field_lom_en_value';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Malagasy (field_lom_mg) */
  $handler->display->display_options['filters']['field_lom_mg_value']['id'] = 'field_lom_mg_value';
  $handler->display->display_options['filters']['field_lom_mg_value']['table'] = 'field_data_field_lom_mg';
  $handler->display->display_options['filters']['field_lom_mg_value']['field'] = 'field_lom_mg_value';
  $handler->display->display_options['filters']['field_lom_mg_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_mg_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_mg_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['operator_id'] = 'field_lom_mg_value_op';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['label'] = 'Filter by malagasy name';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['operator'] = 'field_lom_mg_value_op';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['identifier'] = 'field_lom_mg_value';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: German (field_lom_german) */
  $handler->display->display_options['filters']['field_lom_german_value']['id'] = 'field_lom_german_value';
  $handler->display->display_options['filters']['field_lom_german_value']['table'] = 'field_data_field_lom_german';
  $handler->display->display_options['filters']['field_lom_german_value']['field'] = 'field_lom_german_value';
  $handler->display->display_options['filters']['field_lom_german_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_german_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_german_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['operator_id'] = 'field_lom_german_value_op';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['label'] = 'Filter by german name';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['operator'] = 'field_lom_german_value_op';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['identifier'] = 'field_lom_german_value';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: French (field_lom_fr) */
  $handler->display->display_options['filters']['field_lom_fr_value']['id'] = 'field_lom_fr_value';
  $handler->display->display_options['filters']['field_lom_fr_value']['table'] = 'field_data_field_lom_fr';
  $handler->display->display_options['filters']['field_lom_fr_value']['field'] = 'field_lom_fr_value';
  $handler->display->display_options['filters']['field_lom_fr_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_fr_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_fr_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['operator_id'] = 'field_lom_fr_value_op';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['label'] = 'Filter by french name';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['operator'] = 'field_lom_fr_value_op';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['identifier'] = 'field_lom_fr_value';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Where to see it (field_lom_where_to_see_it) */
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['id'] = 'field_lom_where_to_see_it_value';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['table'] = 'field_data_field_lom_where_to_see_it';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['field'] = 'field_lom_where_to_see_it_value';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['expose']['operator_id'] = 'field_lom_where_to_see_it_value_op';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['expose']['label'] = 'Filter by field site';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['expose']['operator'] = 'field_lom_where_to_see_it_value_op';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['expose']['identifier'] = 'field_lom_where_to_see_it_value';
  $handler->display->display_options['filters']['field_lom_where_to_see_it_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'no' => 'no',
  );
  $handler->display->display_options['filters']['field_isextinct_value']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['path'] = 'all-species';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All species';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_lom_en' => 0,
    'field_lom_mg' => 0,
    'field_lom_german' => 0,
    'field_lom_fr' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['all_species'] = $view;

  $view = new view();
  $view->name = 'all_species_json';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All species JSON';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All species JSON';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'scientific_name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'no' => 'no',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-species-json';
  $export['all_species_json'] = $view;

  $view = new view();
  $view->name = 'all_species_view_widget';
  $view->description = 'All species view widget';
  $view->tag = 'Widget view';
  $view->base_table = 'node';
  $view->human_name = 'All species view widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = 'Select';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Species';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_lom_en']['id'] = 'field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['table'] = 'field_data_field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['field'] = 'field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['element_label_colon'] = FALSE;
  /* Field: Content: Malagasy */
  $handler->display->display_options['fields']['field_lom_mg']['id'] = 'field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['table'] = 'field_data_field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['field'] = 'field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['element_label_colon'] = FALSE;
  /* Field: Content: German */
  $handler->display->display_options['fields']['field_lom_german']['id'] = 'field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['table'] = 'field_data_field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['field'] = 'field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['element_label_colon'] = FALSE;
  /* Field: Content: French */
  $handler->display->display_options['fields']['field_lom_fr']['id'] = 'field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['table'] = 'field_data_field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['field'] = 'field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by scientific name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: English (field_lom_en) */
  $handler->display->display_options['filters']['field_lom_en_value']['id'] = 'field_lom_en_value';
  $handler->display->display_options['filters']['field_lom_en_value']['table'] = 'field_data_field_lom_en';
  $handler->display->display_options['filters']['field_lom_en_value']['field'] = 'field_lom_en_value';
  $handler->display->display_options['filters']['field_lom_en_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_en_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_en_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['operator_id'] = 'field_lom_en_value_op';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['label'] = 'Filter by english name';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['operator'] = 'field_lom_en_value_op';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['identifier'] = 'field_lom_en_value';
  $handler->display->display_options['filters']['field_lom_en_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Malagasy (field_lom_mg) */
  $handler->display->display_options['filters']['field_lom_mg_value']['id'] = 'field_lom_mg_value';
  $handler->display->display_options['filters']['field_lom_mg_value']['table'] = 'field_data_field_lom_mg';
  $handler->display->display_options['filters']['field_lom_mg_value']['field'] = 'field_lom_mg_value';
  $handler->display->display_options['filters']['field_lom_mg_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_mg_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_mg_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['operator_id'] = 'field_lom_mg_value_op';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['label'] = 'Filter by malagasy name';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['operator'] = 'field_lom_mg_value_op';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['identifier'] = 'field_lom_mg_value';
  $handler->display->display_options['filters']['field_lom_mg_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: German (field_lom_german) */
  $handler->display->display_options['filters']['field_lom_german_value']['id'] = 'field_lom_german_value';
  $handler->display->display_options['filters']['field_lom_german_value']['table'] = 'field_data_field_lom_german';
  $handler->display->display_options['filters']['field_lom_german_value']['field'] = 'field_lom_german_value';
  $handler->display->display_options['filters']['field_lom_german_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_german_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_german_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['operator_id'] = 'field_lom_german_value_op';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['label'] = 'Filter by german name';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['operator'] = 'field_lom_german_value_op';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['identifier'] = 'field_lom_german_value';
  $handler->display->display_options['filters']['field_lom_german_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: French (field_lom_fr) */
  $handler->display->display_options['filters']['field_lom_fr_value']['id'] = 'field_lom_fr_value';
  $handler->display->display_options['filters']['field_lom_fr_value']['table'] = 'field_data_field_lom_fr';
  $handler->display->display_options['filters']['field_lom_fr_value']['field'] = 'field_lom_fr_value';
  $handler->display->display_options['filters']['field_lom_fr_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lom_fr_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lom_fr_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['operator_id'] = 'field_lom_fr_value_op';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['label'] = 'Filter by french name';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['operator'] = 'field_lom_fr_value_op';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['identifier'] = 'field_lom_fr_value';
  $handler->display->display_options['filters']['field_lom_fr_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All species';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All species';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['all_species_view_widget'] = $view;

  $view = new view();
  $view->name = 'authors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Authors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'authors' => 'authors',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'authors';
  $export['authors'] = $view;

  $view = new view();
  $view->name = 'extinct_lemurs';
  $view->description = 'Display all lemur families in madagascar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Extinct lemurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Extinct lemurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'lemurfamilylist';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Of the subfossil lemurs, at least three families, eight genera, and 17 species are extinct. Virtually all of the extinct species were larger than any of the living lemurs. When the living and subfossil lemurs are considered together, they form an adaptive spectrum that rivals, or even surpasses, the variety achieved in the major continental areas where primates occur (the Neotropics, Africa and Asia), all of them many times larger than the island of Madagascar. In other words, Madagascar’s concentration of primate diversity in recent times (and even today) was truly unsurpassed. The 17 extinct subfossil species are listed below by family and genus.

<b>Family Lemuridae</b>
<ul>
<b>Genus Pachylemur Lamberton, 1948</b><br>
<li>Pachylemur insignis Filhol, 1895</li>
<li>Pachylemur jullyi G. Grandidier, 1899 (b)</li>
</ul>

<b>Family Archaeolemuridae</b>
<ul>
<b>Genus Archaeolemur Filhol, 1895</b><br>
<li>Archaeolemur edwardsi Filhol, 1895</li>
<li>Archaeolemur majori Filhol, 1895</li>

<b>Genus Hadropithecus Lorenz von Liburnau, 1899</b><br>
<li>Hadropithecus stenognathus Lorenz von Liburnau, 1899</li>
</ul>

<b>Family Palaeopropithecidae </b>
<ul>
<b>Genus Palaeopropithecus G. Grandidier, 1899</b><br>
<li>Palaeopropithecus ingens G. Grandidier, 1899 (b)</li>
<li>Palaeopropithecus maximus Standing, 1903 </li>
<li>Palaeopropithecus kelyus Gommery et al., 2009</li>
<b>Genus Archaeoindris Standing, 1909</b><br>
<li>Archaeoindris fontoynontii Standing, 1909</li>
<b>Genus Babakotia Godfrey et al., 1990</b><br>
<li>Babakotia radofilai Godfrey et al., 1990</li>
<b>Genus Mesopropithecus Standing, 1905</b><br>
<li>Mesopropithecus dolichobrachion Simons et al., 1995</li>
<li>Mesopropithecus globiceps Lamberton, 1936</li>
<li>Mesopropithecus pithecoides Standing, 1905</li>
</ul>

<b>Family Megaladapidae</b>
<ul>
<b>Genus Megaladapis Forsyth-Major, 1894</b><br>
<li>Megaladapis edwardsi (G. Grandidier, 1899) (a)</li>
<li>Megaladapis grandidieri Standing, 1903</li>
<li>Megaladapis madagascariensis Forsyth-Major, 1894</li>
</ul>
<b>Family Daubentoniidae</li>
<ul>
<b>Genus Daubentonia É. Geoffroy St. Hilaire, 1795</b><br>
<li>Daubentonia robusta (Lamberton, 1934)</li>
</ul>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Family order (field_family_order) */
  $handler->display->display_options['sorts']['field_family_order_value']['id'] = 'field_family_order_value';
  $handler->display->display_options['sorts']['field_family_order_value']['table'] = 'field_data_field_family_order';
  $handler->display->display_options['sorts']['field_family_order_value']['field'] = 'field_family_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_family' => 'lom_family',
  );
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'yes' => 'yes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'extinct-lemurs-family';
  $export['extinct_lemurs'] = $view;

  $view = new view();
  $view->name = 'extinct_species';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Extinct species';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Affinities of the Subfossil Lemurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_lom_family',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_taxa',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'extinct_lemur_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Extinct lemurs';
  $handler->display->display_options['header']['area']['content'] = 'Of the subfossil lemurs, at least three families, eight genera, and 17 species are extinct. Virtually all of the extinct species were larger than any of the living lemurs. When the living and subfossil lemurs are considered together, they form an adaptive spectrum that rivals, or even surpasses, the variety achieved in the major continental areas where primates occur (the Neotropics, Africa and Asia), all of them many times larger than the island of Madagascar. In other words, Madagascar\'s concentration of primate diversity in recent times (and even today) was truly unsurpassed. The 17 extinct subfossil species are listed below by family and genus:';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lom_family_target_id']['id'] = 'field_lom_family_target_id';
  $handler->display->display_options['relationships']['field_lom_family_target_id']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['relationships']['field_lom_family_target_id']['field'] = 'field_lom_family_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_lom_family']['id'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['field'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['label'] = '';
  $handler->display->display_options['fields']['field_lom_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lom_family']['alter']['text'] = 'Family [field_lom_family]';
  $handler->display->display_options['fields']['field_lom_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lom_family']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Taxa */
  $handler->display->display_options['fields']['field_taxa']['id'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['fields']['field_taxa']['field'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['label'] = '';
  $handler->display->display_options['fields']['field_taxa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxa']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxa']['delta_offset'] = '0';
  /* Sort criterion: Content: Family order (field_family_order) */
  $handler->display->display_options['sorts']['field_family_order_value']['id'] = 'field_family_order_value';
  $handler->display->display_options['sorts']['field_family_order_value']['table'] = 'field_data_field_family_order';
  $handler->display->display_options['sorts']['field_family_order_value']['field'] = 'field_family_order_value';
  $handler->display->display_options['sorts']['field_family_order_value']['relationship'] = 'field_lom_family_target_id';
  /* Sort criterion: Content: Taxa (field_taxa) */
  $handler->display->display_options['sorts']['field_taxa_tid']['id'] = 'field_taxa_tid';
  $handler->display->display_options['sorts']['field_taxa_tid']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['sorts']['field_taxa_tid']['field'] = 'field_taxa_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'yes' => 'yes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'species/affinities-of-the-subfossil-lemurs';
  $export['extinct_species'] = $view;

  $view = new view();
  $view->name = 'family_export';
  $view->description = 'Export all photograph nodes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Family export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Family export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Family';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Family description';
  /* Field: Content: Illustration */
  $handler->display->display_options['fields']['field_illustration_ref']['id'] = 'field_illustration_ref';
  $handler->display->display_options['fields']['field_illustration_ref']['table'] = 'field_data_field_illustration_ref';
  $handler->display->display_options['fields']['field_illustration_ref']['field'] = 'field_illustration_ref';
  $handler->display->display_options['fields']['field_illustration_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_illustration_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_illustration_ref']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_family' => 'lom_family',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'family-export';
  $export['family_export'] = $view;

  $view = new view();
  $view->name = 'fi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filtered species view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtering species view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_master_list_target_id']['id'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_master_list_target_id']['table'] = 'field_data_field_master_list';
  $handler->display->display_options['relationships']['field_master_list_target_id']['field'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_master_list_target_id']['label'] = 'Content entity referenced from field_master_list';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Species';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['title']['label'] = 'List item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/filtering-species-view';
  $export['fi'] = $view;

  $view = new view();
  $view->name = 'filtered_species';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filtered species widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtered species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/filtered-species';
  $export['filtered_species'] = $view;

  $view = new view();
  $view->name = 'filtered_species_view';
  $view->description = 'Filtered species view';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filtered species view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtered species view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'no' => 'no',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/filtered-species-view';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['filtered_species_view'] = $view;

  $view = new view();
  $view->name = 'filtered_species_view_widget';
  $view->description = 'Filtered species  view widget';
  $view->tag = 'View widget';
  $view->base_table = 'node';
  $view->human_name = 'Filtered Species View Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtered species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Species';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/filtered-species';

  /* Display: Species Refeence */
  $handler = $view->new_display('entityreference', 'Species Refeence', 'species_reference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['filtered_species_view_widget'] = $view;

  $view = new view();
  $view->name = 'filtered_species_widget';
  $view->description = 'Master list ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filtered species widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtered species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['required'] = TRUE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_master_list_target_id']['id'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_master_list_target_id']['table'] = 'field_data_field_master_list';
  $handler->display->display_options['relationships']['field_master_list_target_id']['field'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_master_list_target_id']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['field_master_list_target_id']['label'] = 'Content entity referenced from field_master_list';
  $handler->display->display_options['relationships']['field_master_list_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['relationship'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality']['label'] = 'Locality';
  $handler->display->display_options['fields']['field_locality']['element_label_colon'] = FALSE;
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
return $user->uid;';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Species (field_species) */
  $handler->display->display_options['filters']['field_species_target_id']['id'] = 'field_species_target_id';
  $handler->display->display_options['filters']['field_species_target_id']['table'] = 'field_data_field_species';
  $handler->display->display_options['filters']['field_species_target_id']['field'] = 'field_species_target_id';
  $handler->display->display_options['filters']['field_species_target_id']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['filters']['field_species_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_species_target_id']['value']['value'] = 'NULL';
  $handler->display->display_options['filters']['field_species_target_id']['expose']['operator_id'] = 'field_species_target_id_op';
  $handler->display->display_options['filters']['field_species_target_id']['expose']['label'] = 'Species (field_species)';
  $handler->display->display_options['filters']['field_species_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_species_target_id']['expose']['operator'] = 'field_species_target_id_op';
  $handler->display->display_options['filters']['field_species_target_id']['expose']['identifier'] = 'field_species_target_id';
  $handler->display->display_options['filters']['field_species_target_id']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_species_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'filtered_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_locality' => 'field_locality',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'list/filtered-species';
  $export['filtered_species_widget'] = $view;

  $view = new view();
  $view->name = 'illegal_activities_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'illegal-activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Illegal activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'illegal_activities' => 'illegal_activities',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Contains word';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'illegal-activities';
  $export['illegal_activities_view'] = $view;

  $view = new view();
  $view->name = 'illustration_export';
  $view->description = 'Export all photograph nodes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Illustration export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Illustration export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Illustration */
  $handler->display->display_options['fields']['field_lom_illustration']['id'] = 'field_lom_illustration';
  $handler->display->display_options['fields']['field_lom_illustration']['table'] = 'field_data_field_lom_illustration';
  $handler->display->display_options['fields']['field_lom_illustration']['field'] = 'field_lom_illustration';
  $handler->display->display_options['fields']['field_lom_illustration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lom_illustration']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lom_illustration']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lom_illustration']['delta_offset'] = '0';
  /* Field: Content: Illustration description */
  $handler->display->display_options['fields']['field_lom_illustration_desc']['id'] = 'field_lom_illustration_desc';
  $handler->display->display_options['fields']['field_lom_illustration_desc']['table'] = 'field_data_field_lom_illustration_desc';
  $handler->display->display_options['fields']['field_lom_illustration_desc']['field'] = 'field_lom_illustration_desc';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_illustration' => 'lom_illustration',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'illustration-export';
  $export['illustration_export'] = $view;

  $view = new view();
  $view->name = 'ketrika_master_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ketrika Master list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ketrika Master list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_list' => 'master_list',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'enjana/master-list';
  $export['ketrika_master_list'] = $view;

  $view = new view();
  $view->name = 'ketrika_personal_lemur_life_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ketrika personal lemur life list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ketrika Personal Lemur Life List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'enjana/personal-lemur-life-list';
  $export['ketrika_personal_lemur_life_list'] = $view;

  $view = new view();
  $view->name = 'lemur_families';
  $view->description = 'Display all lemur families in madagascar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lemur families';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lemur families';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Family order (field_family_order) */
  $handler->display->display_options['sorts']['field_family_order_value']['id'] = 'field_family_order_value';
  $handler->display->display_options['sorts']['field_family_order_value']['table'] = 'field_data_field_family_order';
  $handler->display->display_options['sorts']['field_family_order_value']['field'] = 'field_family_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_family' => 'lom_family',
  );
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'no' => 'no',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lemur-families';
  $export['lemur_families'] = $view;

  $view = new view();
  $view->name = 'lemur_watching_sites_export';
  $view->description = 'Lemur-watching sites Export';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lemur-watching sites Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lemur-watching sites export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Sites ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'best_places' => 'best_places',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lemur-watching-sites-export';
  $export['lemur_watching_sites_export'] = $view;

  $view = new view();
  $view->name = 'map_export';
  $view->description = 'Export all photograph nodes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_map']['id'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['table'] = 'field_data_field_map';
  $handler->display->display_options['fields']['field_map']['field'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['label'] = 'File name';
  $handler->display->display_options['fields']['field_map']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_map']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_map' => 'lom_map',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map-export';
  $export['map_export'] = $view;

  $view = new view();
  $view->name = 'master_list';
  $view->description = 'Master list ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Master list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Master list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_lom_family',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_taxa',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'white_bg_color';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_species_profile_photograph' => 'field_species_profile_photograph',
    'title' => 'title',
    'field_locality' => 'title',
    'field_date' => 'title',
    'edit_node' => 'title',
    'field_lom_family' => 'field_lom_family',
    'field_taxa' => 'field_taxa',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_species_profile_photograph' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lom_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxa' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
require_once(  drupal_get_path(\'module\', \'master_list_setup\').  \'/includes/view_master_list_header.inc\');
?>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'List not found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
require_once(  drupal_get_path(\'module\', \'master_list_setup\').  \'/includes/view_master_list_no_results_behavior.inc\');
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_master_list_target_id']['id'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_master_list_target_id']['table'] = 'field_data_field_master_list';
  $handler->display->display_options['relationships']['field_master_list_target_id']['field'] = 'field_master_list_target_id';
  $handler->display->display_options['relationships']['field_master_list_target_id']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['field_master_list_target_id']['label'] = 'Content entity referenced from field_master_list';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['relationship'] = 'field_master_list_target_id';
  /* Field: Content: Profile Photograph */
  $handler->display->display_options['fields']['field_species_profile_photograph']['id'] = 'field_species_profile_photograph';
  $handler->display->display_options['fields']['field_species_profile_photograph']['table'] = 'field_data_field_species_profile_photograph';
  $handler->display->display_options['fields']['field_species_profile_photograph']['field'] = 'field_species_profile_photograph';
  $handler->display->display_options['fields']['field_species_profile_photograph']['label'] = '';
  $handler->display->display_options['fields']['field_species_profile_photograph']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_species_profile_photograph']['element_class'] = 'profile_photograph_100_x_100  ';
  $handler->display->display_options['fields']['field_species_profile_photograph']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_profile_photograph']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_species_profile_photograph']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_species_profile_photograph']['settings'] = array(
    'view_mode' => 'photograph_teaser',
    'links' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'white_bg_color table_view_item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality']['label'] = '';
  $handler->display->display_options['fields']['field_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locality']['alter']['text'] = '<div class="table_view_item">Locality: [field_locality]</div>';
  $handler->display->display_options['fields']['field_locality']['element_label_colon'] = FALSE;
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<div class="table_view_item">Date: [field_date] </div>';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="table_view_item">[edit_node]</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_lom_family']['id'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['field'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['label'] = '';
  $handler->display->display_options['fields']['field_lom_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lom_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lom_family']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Taxa */
  $handler->display->display_options['fields']['field_taxa']['id'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['fields']['field_taxa']['field'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['label'] = '';
  $handler->display->display_options['fields']['field_taxa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxa']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxa']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
return $user->uid;';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by scientific name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Where did  you see it? (field_locality) */
  $handler->display->display_options['filters']['field_locality_value']['id'] = 'field_locality_value';
  $handler->display->display_options['filters']['field_locality_value']['table'] = 'field_data_field_locality';
  $handler->display->display_options['filters']['field_locality_value']['field'] = 'field_locality_value';
  $handler->display->display_options['filters']['field_locality_value']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['filters']['field_locality_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_locality_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locality_value']['expose']['operator_id'] = 'field_locality_value_op';
  $handler->display->display_options['filters']['field_locality_value']['expose']['label'] = 'Filter by locality';
  $handler->display->display_options['filters']['field_locality_value']['expose']['operator'] = 'field_locality_value_op';
  $handler->display->display_options['filters']['field_locality_value']['expose']['identifier'] = 'field_locality_value';
  $handler->display->display_options['filters']['field_locality_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: When did you see it for the first time? (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter by date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/personal-lemur-life-list';
  $export['master_list'] = $view;

  $view = new view();
  $view->name = 'my_lemur_life_list';
  $view->description = 'My Lemur life-list';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Lemur life-list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Public Lemur life-list JSON Last Modified';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'lemur_species_teaser';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
require_once(  drupal_get_path(\'module\', \'master_list_setup\').  \'/includes/view_master_list_header.inc\');
?>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'List not found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
require_once(  drupal_get_path(\'module\', \'master_list_setup\').  \'/includes/view_master_list_no_results_behavior.inc\');
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'users';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'white_bg_color table_view_item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_lom_family']['id'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['field'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['label'] = '';
  $handler->display->display_options['fields']['field_lom_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lom_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lom_family']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Taxa */
  $handler->display->display_options['fields']['field_taxa']['id'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['fields']['field_taxa']['field'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['label'] = '';
  $handler->display->display_options['fields']['field_taxa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxa']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxa']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['code'] = 'global $user;
return $user->uid;';
  $handler->display->display_options['arguments']['uid_1']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['validate']['type'] = 'user';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by scientific name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Where did  you see it? (field_locality) */
  $handler->display->display_options['filters']['field_locality_value']['id'] = 'field_locality_value';
  $handler->display->display_options['filters']['field_locality_value']['table'] = 'field_data_field_locality';
  $handler->display->display_options['filters']['field_locality_value']['field'] = 'field_locality_value';
  $handler->display->display_options['filters']['field_locality_value']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['filters']['field_locality_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_locality_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locality_value']['expose']['operator_id'] = 'field_locality_value_op';
  $handler->display->display_options['filters']['field_locality_value']['expose']['label'] = 'Filter by locality';
  $handler->display->display_options['filters']['field_locality_value']['expose']['operator'] = 'field_locality_value_op';
  $handler->display->display_options['filters']['field_locality_value']['expose']['identifier'] = 'field_locality_value';
  $handler->display->display_options['filters']['field_locality_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: When did you see it for the first time? (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Filter by date';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Lemur life-list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'all_life_list';
  $handler->display->display_options['row_options']['comments'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'list/my-lemur-life-list';

  /* Display: Public life list */
  $handler = $view->new_display('page', 'Public life list', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'all_life_list';
  $handler->display->display_options['row_options']['comments'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'list/public-lemur-life-list';

  /* Display: My list json */
  $handler = $view->new_display('page', 'My list json', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON - Public Lemur life-list  Last Modified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_target_id']['id'] = 'field_species_target_id';
  $handler->display->display_options['relationships']['field_species_target_id']['table'] = 'field_data_field_species';
  $handler->display->display_options['relationships']['field_species_target_id']['field'] = 'field_species_target_id';
  $handler->display->display_options['relationships']['field_species_target_id']['label'] = 'SPECIES';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'white_bg_color table_view_item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'comment_count';
  /* Field: Content: Lemur photo */
  $handler->display->display_options['fields']['field_lemur_photo']['id'] = 'field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['table'] = 'field_data_field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['field'] = 'field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['label'] = 'lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lemur_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_species']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'see_first_time';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['label'] = 'where_see';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_species_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'species_nid';
  /* Field: Content: is Local */
  $handler->display->display_options['fields']['field_is_local']['id'] = 'field_is_local';
  $handler->display->display_options['fields']['field_is_local']['table'] = 'field_data_field_is_local';
  $handler->display->display_options['fields']['field_is_local']['field'] = 'field_is_local';
  $handler->display->display_options['fields']['field_is_local']['label'] = 'isLocal';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );
  $handler->display->display_options['path'] = 'api/v1/list/my-lemur-life-list-json';

  /* Display: JSON - Public life list */
  $handler = $view->new_display('page', 'JSON - Public life list', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'white_bg_color table_view_item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'comment_count';
  /* Field: Content: Lemur photo */
  $handler->display->display_options['fields']['field_lemur_photo']['id'] = 'field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['table'] = 'field_data_field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['field'] = 'field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['label'] = 'lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lemur_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_species']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'see_first_time';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['label'] = 'where_see';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );
  $handler->display->display_options['path'] = 'list/public-lemur-life-list-json';

  /* Display: JSON - My list Last Modified */
  $handler = $view->new_display('page', 'JSON - My list Last Modified', 'page_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_target_id']['id'] = 'field_species_target_id';
  $handler->display->display_options['relationships']['field_species_target_id']['table'] = 'field_data_field_species';
  $handler->display->display_options['relationships']['field_species_target_id']['field'] = 'field_species_target_id';
  $handler->display->display_options['relationships']['field_species_target_id']['label'] = 'SPECIES';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'white_bg_color table_view_item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'comment_count';
  /* Field: Content: Lemur photo */
  $handler->display->display_options['fields']['field_lemur_photo']['id'] = 'field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['table'] = 'field_data_field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['field'] = 'field_lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['label'] = 'lemur_photo';
  $handler->display->display_options['fields']['field_lemur_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lemur_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_species']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'see_first_time';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['label'] = 'where_see';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_species_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'species_nid';
  /* Field: Content: is Local */
  $handler->display->display_options['fields']['field_is_local']['id'] = 'field_is_local';
  $handler->display->display_options['fields']['field_is_local']['table'] = 'field_data_field_is_local';
  $handler->display->display_options['fields']['field_is_local']['field'] = 'field_is_local';
  $handler->display->display_options['fields']['field_is_local']['label'] = 'isLocal';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_lemur_life_list_item' => 'personal_lemur_life_list_item',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'api/v1/list/my-lemur-life-list-modified-from';
  $export['my_lemur_life_list'] = $view;

  $view = new view();
  $view->name = 'my_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My personal lists';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['id'] = 'reverse_field_personal_list_user';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['field'] = 'reverse_field_personal_list_user';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['label'] = 'User referencing Content from field_personal_list';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: When did you see it for the first time? (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_personal_list_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_list' => 'personal_list',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-lists';

  /* Display: My personal list block */
  $handler = $view->new_display('block', 'My personal list block', 'block_1');
  $handler->display->display_options['block_description'] = 'My personal list block';
  $export['my_lists'] = $view;

  $view = new view();
  $view->name = 'my_personal_lists';
  $view->description = 'My personal lists';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My personal lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My personal lists';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'No personal lists found! Please add new one';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['id'] = 'reverse_field_personal_list_user';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['field'] = 'reverse_field_personal_list_user';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['label'] = 'User referencing Content from field_personal_list';
  $handler->display->display_options['relationships']['reverse_field_personal_list_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_personal_list_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
return $user->uid;';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_list' => 'personal_list',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-personal-lists';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My recent lists';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['my_personal_lists'] = $view;

  $view = new view();
  $view->name = 'my_sightings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Sightings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Sightings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sighting';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
return $user->uid;';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sighting' => 'sighting',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/sightings';
  $export['my_sightings'] = $view;

  $view = new view();
  $view->name = 'personal_lemur_life_list';
  $view->description = 'Primate watching - personal lemur life-list';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personal lemur life-list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personal lemur life-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
$view = views_get_current_view();
$view->execute();
$count = count( $view->result );
print "<strong>" . t(\'Your list has \').  $count.  t(\' species\'). "</strong><br>";

global $user;
$user = user_load($user->uid);
if($user){
  $user_wrapper = entity_metadata_wrapper(\'user\',$user);
  if($user_wrapper->field_list_status->value() == \'public\'){
    print "<strong>".t(\'This is a public list.\') ."</strong> ". l(\' make this list private\',\'personal-lemur-life-list/togglestatus\') ;
  }else{
     print "<strong>".t(\'This is a closed list\') ."</strong> " . l(\' make this list public\',\'personal-lemur-life-list/togglestatus\') ;
  } 
  
}

?>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty personal lemur life-list';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php 
drupal_set_message( t(\'Empty personal lemur life-list! To add new item in your list click \') . l(\'here\',\'node/add/personal-lemur-life-list-item\') , \'status\');
 ?>
';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['relationship'] = 'reverse_field_species_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  /* Field: Content: Where did  you see it? */
  $handler->display->display_options['fields']['field_locality']['id'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['table'] = 'field_data_field_locality';
  $handler->display->display_options['fields']['field_locality']['field'] = 'field_locality';
  $handler->display->display_options['fields']['field_locality']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_locality']['label'] = 'Locality';
  /* Field: Content: When did you see it for the first time? */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_species_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit this item';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
return $user->uid;';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_species_list_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Species scientific name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/personal-lemur-life-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Personal lemur life-list';
  $handler->display->display_options['menu']['description'] = 'Primate watching lemur life-list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-primate-watching';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['personal_lemur_life_list'] = $view;

  $view = new view();
  $view->name = 'photographs_export';
  $view->description = 'Export all photograph nodes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photographs export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photographs export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Photograph */
  $handler->display->display_options['fields']['field_lom_photograph']['id'] = 'field_lom_photograph';
  $handler->display->display_options['fields']['field_lom_photograph']['table'] = 'field_data_field_lom_photograph';
  $handler->display->display_options['fields']['field_lom_photograph']['field'] = 'field_lom_photograph';
  $handler->display->display_options['fields']['field_lom_photograph']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lom_photograph']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lom_photograph']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_photograph' => 'lom_photograph',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'photographs-export';
  $export['photographs_export'] = $view;

  $view = new view();
  $view->name = 'private_lemur_life_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Private lemur life-list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Private lemur life-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'title' => 'title',
    'field_list_status' => 'field_list_status',
    'field_species_count' => 'field_species_count',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_list_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No private list';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
require_once(  drupal_get_path(\'module\', \'master_list_setup\').  \'/includes/view_private_list_no_result_behavior.inc\');
?>
';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_node']['id'] = 'reverse_field_user_node';
  $handler->display->display_options['relationships']['reverse_field_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_user_node']['field'] = 'reverse_field_user_node';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['title']['label'] = 'User';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'list/personal-lemur-life-list/[uid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: List status */
  $handler->display->display_options['fields']['field_list_status']['id'] = 'field_list_status';
  $handler->display->display_options['fields']['field_list_status']['table'] = 'field_data_field_list_status';
  $handler->display->display_options['fields']['field_list_status']['field'] = 'field_list_status';
  $handler->display->display_options['fields']['field_list_status']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['field_list_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_list_status']['element_label_colon'] = FALSE;
  /* Field: Content: Species count */
  $handler->display->display_options['fields']['field_species_count']['id'] = 'field_species_count';
  $handler->display->display_options['fields']['field_species_count']['table'] = 'field_data_field_species_count';
  $handler->display->display_options['fields']['field_species_count']['field'] = 'field_species_count';
  $handler->display->display_options['fields']['field_species_count']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['field_species_count']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_species_count']['element_class'] = 'centered_horizontally';
  $handler->display->display_options['fields']['field_species_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_species_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_user_node';
  /* Filter criterion: Content: List status (field_list_status) */
  $handler->display->display_options['filters']['field_list_status_value']['id'] = 'field_list_status_value';
  $handler->display->display_options['filters']['field_list_status_value']['table'] = 'field_data_field_list_status';
  $handler->display->display_options['filters']['field_list_status_value']['field'] = 'field_list_status_value';
  $handler->display->display_options['filters']['field_list_status_value']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['filters']['field_list_status_value']['value'] = array(
    'closed' => 'closed',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by user\'s first and last name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/private-lemur-life-list';
  $export['private_lemur_life_list'] = $view;

  $view = new view();
  $view->name = 'public_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Public list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent public lists';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personal_list' => 'personal_list',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'or';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Public' => 'Public',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'public-list';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['public_list'] = $view;

  $view = new view();
  $view->name = 'public_personal_lemur_life_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Public lemur life-list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Public lemur life-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'title' => 'title',
    'field_list_status' => 'field_list_status',
    'field_species_count' => 'field_species_count',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_list_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No public list';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
require_once(  drupal_get_path(\'module\', \'master_list_setup\').  \'/includes/view_public_list_no_result_behavior.inc\');
?>
';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_node']['id'] = 'reverse_field_user_node';
  $handler->display->display_options['relationships']['reverse_field_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_user_node']['field'] = 'reverse_field_user_node';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['title']['label'] = 'User';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'list/personal-lemur-life-list/[uid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: List status */
  $handler->display->display_options['fields']['field_list_status']['id'] = 'field_list_status';
  $handler->display->display_options['fields']['field_list_status']['table'] = 'field_data_field_list_status';
  $handler->display->display_options['fields']['field_list_status']['field'] = 'field_list_status';
  $handler->display->display_options['fields']['field_list_status']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['field_list_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_list_status']['element_label_colon'] = FALSE;
  /* Field: Content: Species count */
  $handler->display->display_options['fields']['field_species_count']['id'] = 'field_species_count';
  $handler->display->display_options['fields']['field_species_count']['table'] = 'field_data_field_species_count';
  $handler->display->display_options['fields']['field_species_count']['field'] = 'field_species_count';
  $handler->display->display_options['fields']['field_species_count']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['field_species_count']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_species_count']['element_class'] = 'centered_horizontally';
  $handler->display->display_options['fields']['field_species_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_species_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_lom_family']['id'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['field'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['field_lom_family']['label'] = '';
  $handler->display->display_options['fields']['field_lom_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lom_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lom_family']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Taxa */
  $handler->display->display_options['fields']['field_taxa']['id'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['table'] = 'field_data_field_taxa';
  $handler->display->display_options['fields']['field_taxa']['field'] = 'field_taxa';
  $handler->display->display_options['fields']['field_taxa']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['fields']['field_taxa']['label'] = '';
  $handler->display->display_options['fields']['field_taxa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxa']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxa']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_user_node';
  /* Filter criterion: Content: List status (field_list_status) */
  $handler->display->display_options['filters']['field_list_status_value']['id'] = 'field_list_status_value';
  $handler->display->display_options['filters']['field_list_status_value']['table'] = 'field_data_field_list_status';
  $handler->display->display_options['filters']['field_list_status_value']['field'] = 'field_list_status_value';
  $handler->display->display_options['filters']['field_list_status_value']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['filters']['field_list_status_value']['value'] = array(
    'public' => 'public',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_user_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by user\'s first and last name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list/public-lemur-life-list';
  $export['public_personal_lemur_life_list'] = $view;

  $view = new view();
  $view->name = 'sighting_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sightings list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sightings list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'AUTHOR';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'admin/sightings-list';
  $export['sighting_list'] = $view;

  $view = new view();
  $view->name = 'species';
  $view->description = 'Lemur species export';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Species export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Species ID';
  /* Field: Content: Profile Photograph */
  $handler->display->display_options['fields']['field_species_profile_photograph']['id'] = 'field_species_profile_photograph';
  $handler->display->display_options['fields']['field_species_profile_photograph']['table'] = 'field_data_field_species_profile_photograph';
  $handler->display->display_options['fields']['field_species_profile_photograph']['field'] = 'field_species_profile_photograph';
  $handler->display->display_options['fields']['field_species_profile_photograph']['label'] = 'Profile Photograph ID';
  $handler->display->display_options['fields']['field_species_profile_photograph']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_species_profile_photograph']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_lom_family']['id'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['table'] = 'field_data_field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['field'] = 'field_lom_family';
  $handler->display->display_options['fields']['field_lom_family']['label'] = 'Family ID';
  $handler->display->display_options['fields']['field_lom_family']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lom_family']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_lom_en']['id'] = 'field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['table'] = 'field_data_field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['field'] = 'field_lom_en';
  $handler->display->display_options['fields']['field_lom_en']['element_label_colon'] = FALSE;
  /* Field: Content: Other english */
  $handler->display->display_options['fields']['field_lom_other_en']['id'] = 'field_lom_other_en';
  $handler->display->display_options['fields']['field_lom_other_en']['table'] = 'field_data_field_lom_other_en';
  $handler->display->display_options['fields']['field_lom_other_en']['field'] = 'field_lom_other_en';
  /* Field: Content: French */
  $handler->display->display_options['fields']['field_lom_fr']['id'] = 'field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['table'] = 'field_data_field_lom_fr';
  $handler->display->display_options['fields']['field_lom_fr']['field'] = 'field_lom_fr';
  /* Field: Content: German */
  $handler->display->display_options['fields']['field_lom_german']['id'] = 'field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['table'] = 'field_data_field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['field'] = 'field_lom_german';
  $handler->display->display_options['fields']['field_lom_german']['element_label_colon'] = FALSE;
  /* Field: Content: Malagasy */
  $handler->display->display_options['fields']['field_lom_mg']['id'] = 'field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['table'] = 'field_data_field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['field'] = 'field_lom_mg';
  $handler->display->display_options['fields']['field_lom_mg']['element_label_colon'] = FALSE;
  /* Field: Content: Identification */
  $handler->display->display_options['fields']['field_lom_identification']['id'] = 'field_lom_identification';
  $handler->display->display_options['fields']['field_lom_identification']['table'] = 'field_data_field_lom_identification';
  $handler->display->display_options['fields']['field_lom_identification']['field'] = 'field_lom_identification';
  $handler->display->display_options['fields']['field_lom_identification']['element_label_colon'] = FALSE;
  /* Field: Content: Natural history */
  $handler->display->display_options['fields']['field_lom_natural_history']['id'] = 'field_lom_natural_history';
  $handler->display->display_options['fields']['field_lom_natural_history']['table'] = 'field_data_field_lom_natural_history';
  $handler->display->display_options['fields']['field_lom_natural_history']['field'] = 'field_lom_natural_history';
  $handler->display->display_options['fields']['field_lom_natural_history']['element_label_colon'] = FALSE;
  /* Field: Content: Geographic range */
  $handler->display->display_options['fields']['field_lom_geographic_range']['id'] = 'field_lom_geographic_range';
  $handler->display->display_options['fields']['field_lom_geographic_range']['table'] = 'field_data_field_lom_geographic_range';
  $handler->display->display_options['fields']['field_lom_geographic_range']['field'] = 'field_lom_geographic_range';
  $handler->display->display_options['fields']['field_lom_geographic_range']['element_label_colon'] = FALSE;
  /* Field: Content: Conservation status */
  $handler->display->display_options['fields']['field_lom_conservation_status']['id'] = 'field_lom_conservation_status';
  $handler->display->display_options['fields']['field_lom_conservation_status']['table'] = 'field_data_field_lom_conservation_status';
  $handler->display->display_options['fields']['field_lom_conservation_status']['field'] = 'field_lom_conservation_status';
  $handler->display->display_options['fields']['field_lom_conservation_status']['element_label_colon'] = FALSE;
  /* Field: Content: Where to see it */
  $handler->display->display_options['fields']['field_lom_where_to_see_it']['id'] = 'field_lom_where_to_see_it';
  $handler->display->display_options['fields']['field_lom_where_to_see_it']['table'] = 'field_data_field_lom_where_to_see_it';
  $handler->display->display_options['fields']['field_lom_where_to_see_it']['field'] = 'field_lom_where_to_see_it';
  $handler->display->display_options['fields']['field_lom_where_to_see_it']['element_label_colon'] = FALSE;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_species_map']['id'] = 'field_species_map';
  $handler->display->display_options['fields']['field_species_map']['table'] = 'field_data_field_species_map';
  $handler->display->display_options['fields']['field_species_map']['field'] = 'field_species_map';
  $handler->display->display_options['fields']['field_species_map']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_species_map']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Species photograph */
  $handler->display->display_options['fields']['field_species_photograph']['id'] = 'field_species_photograph';
  $handler->display->display_options['fields']['field_species_photograph']['table'] = 'field_data_field_species_photograph';
  $handler->display->display_options['fields']['field_species_photograph']['field'] = 'field_species_photograph';
  $handler->display->display_options['fields']['field_species_photograph']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_species_photograph']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_species_photograph']['delta_offset'] = '0';
  /* Field: Content: Favorite */
  $handler->display->display_options['fields']['field_isfavorite']['id'] = 'field_isfavorite';
  $handler->display->display_options['fields']['field_isfavorite']['table'] = 'field_data_field_isfavorite';
  $handler->display->display_options['fields']['field_isfavorite']['field'] = 'field_isfavorite';
  $handler->display->display_options['fields']['field_isfavorite']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );
  /* Filter criterion: Content: Extinct (field_isextinct) */
  $handler->display->display_options['filters']['field_isextinct_value']['id'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['table'] = 'field_data_field_isextinct';
  $handler->display->display_options['filters']['field_isextinct_value']['field'] = 'field_isextinct_value';
  $handler->display->display_options['filters']['field_isextinct_value']['value'] = array(
    'no' => 'no',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'species-export';
  $export['species'] = $view;

  $view = new view();
  $view->name = 'taxa_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxa export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxa export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Field: Taxonomy term: Taxa order */
  $handler->display->display_options['fields']['field_taxa_order']['id'] = 'field_taxa_order';
  $handler->display->display_options['fields']['field_taxa_order']['table'] = 'field_data_field_taxa_order';
  $handler->display->display_options['fields']['field_taxa_order']['field'] = 'field_taxa_order';
  $handler->display->display_options['fields']['field_taxa_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'taxonomic' => 'taxonomic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxa-export';
  $export['taxa_export'] = $view;

  $view = new view();
  $view->name = 'test_all_speces';
  $view->description = 'Filter species ';
  $view->tag = 'View widget';
  $view->base_table = 'node';
  $view->human_name = 'Filtered Species View Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Test All Speces';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_species_node']['id'] = 'reverse_field_species_node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_species_node']['field'] = 'reverse_field_species_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-all-species';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'species_reference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['test_all_speces'] = $view;

  $view = new view();
  $view->name = 'update_species';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update species';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_species_extinct_value' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lom_species' => 'lom_species',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/update-species';
  $export['update_species'] = $view;

  $view = new view();
  $view->name = 'video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Video title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Species';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_tags_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'video';
  $export['video'] = $view;

  return $export;
}
