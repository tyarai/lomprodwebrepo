<?php
/*
 *http://www.lemursofmadagascar.com/list/personal-lemur-life-list
 *arg(0) = list
 *arg(1) = personal-lemur-life-list
 */
if (current_path() == "list/my-lemur-life-list"){
  global $user;
  $account = user_load($user->uid, TRUE);
  print '<div class="view_my_lemur_life_list_header">';
  if( $user->uid > 0 ){
    include_once drupal_get_path('module','master_list_setup').'/includes/master_list_toggle_status.inc';
    $species_count = _get_master_list_count_of_user();
    print "<strong>" . t('This list has ').  $species_count.  t(' species'). "</strong><br>";
    $visibility = (isset($account->field_list_visibility['und'])) ? $account->field_list_visibility['und'][0]['value'] : 1;
    if( $visibility == 0){
      print '<strong>'.t('This is a public list. ').'</strong>';
      print l('Click here to make this list private', 'list/master-list/togglestatus');
    }
    else{
      print '<strong>'.t('This is a private list. ').'</strong>';
      print l('Click here to make this list public', 'list/master-list/togglestatus')    ;
    }
  }
  // Close the div
  print '</div>';
}
?>