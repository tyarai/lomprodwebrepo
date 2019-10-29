<?php
/*
 * Retrieve the master list of the user
 */
function _get_master_list_wrapper_of_user($uid){

  if($uid != NULL && !empty($uid)){
    /*
     * ( SELECT entity_id
     * FROM {field_data_field_user} field_data_field_user
     * WHERE field_data_field_user.bundle = 'master_list'
     *  AND field_data_field_user.field_user_target_id = $user->uid
    */
    $master_list_query = db_select('field_data_field_user','fuser');
    $master_list_query->addField('fuser', 'entity_id','master_list_entity_id');
    $master_list_query->condition('fuser.bundle','master_list','=')
    ->condition('fuser.field_user_target_id',$uid,'=');
    $result= $master_list_query->execute();
    $record = $result->fetchObject();

    if (empty($record)) return NULL;
    $master_list = node_load($record->master_list_entity_id);
    $master_list_entity_wrapper = entity_metadata_wrapper('node', $master_list);
    return $master_list_entity_wrapper;
  }
  
  return NULL;
}

/*
 * Toggle personal lemur life-list status to public or closed
 */
function _toggle_master_list_status(){
  global $user;
  $account = user_load($user->uid, TRUE);
  // Default to private.
  $current_value = (isset($account->field_list_visibility['und'])) ? $account->field_list_visibility['und'][0]['value'] : 1;
  if ($current_value == 0){
    // Public to private
    $account->field_list_visibility['und'][0]['value'] = 1;
  }
  else{
    // Private to public
    $account->field_list_visibility['und'][0]['value'] = 0;  
  }

  user_save($account);
  
  // Return to view page.
  drupal_goto('list/my-lemur-life-list');
}

/**
 * Get count of species of a current user
 */
function _get_master_list_count_of_user(){
  global $user;
  $query = db_select('node', 'n');
  $query->addExpression('COUNT(n.nid)', 'total');
  $query->condition('n.uid', $user->uid)
        ->condition('n.type', 'personal_lemur_life_list_item');
  
  return $query->execute()->fetchField();
}

/**
 * Get all user that have visibility public.
 */
function _get_all_user_public_visibility(){
  $query = db_select('users', 'u')
  ->fields('u', array('uid'));
  $query->join('field_data_field_list_visibility', 'vis', 'u.uid = vis.entity_id');
  $query->condition('vis.field_list_visibility_value', 0);
  
  $results = $query->execute()->fetchAll();
  if (empty($results)) return array();
  $uids = array();
  foreach ($results as $result){
    $uids[] = $result->uid;
  }
  
  return array_values($uids);
}