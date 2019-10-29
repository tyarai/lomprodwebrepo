<?php
/**
 * @file
 * lom_display_suite.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lom_display_suite_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_lom_short_y_m';
  $strongarm->value = 'Y-m-d H:i';
  $export['date_format_lom_short_y_m'] = $strongarm;

  return $export;
}
