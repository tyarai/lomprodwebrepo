<?php
/**
 * @file
 * lom_illegal_activities_data_model.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lom_illegal_activities_data_model_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groupes|node|illegal_activities|default';
  $field_group->group_name = 'group_groupes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'illegal_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_images',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-groupes field-group-htabs',
      ),
    ),
  );
  $export['group_groupes|node|illegal_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|illegal_activities|default';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'illegal_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_groupes';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'field_images',
      3 => 'field_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-fieldset',
      ),
    ),
  );
  $export['group_images|node|illegal_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|illegal_activities|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'illegal_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|illegal_activities|default'] = $field_group;

  return $export;
}
