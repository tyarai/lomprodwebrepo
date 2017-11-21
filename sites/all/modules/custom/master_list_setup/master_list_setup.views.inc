<?php


/*
 *   Implementation of hook_views_query_alter()
 *
 *   Register View API information.
 */

function master_list_setup_views_query_alter(&$view, &$query) {

  // This view will list the 'Master List' of the current user
  if($view->name == "filtered_species_view"  ){

    global $user;
    $user = user_load($user->uid);
    $subquery =  db_select('node', 'species');
    $subquery->addField('species', 'nid','user_species_nid');

    $subquery->leftJoin('field_data_field_species',
                        'field_species',
                        'field_species.field_species_target_id = species.nid');

    $subquery->leftJoin('field_data_field_master_list',
                        'field_master',
                        'field_master.entity_id = field_species.entity_id');

    $subquery->leftJoin('field_data_field_user',
                        'field_user',
                        'field_user.entity_id = field_master.field_master_list_target_id');

    //$subquery->condition('species.type','NULL',"IN ('lom_species')" );
    $subquery->condition('species.status','1','=');
    $subquery->condition('field_user.field_user_target_id',$user->uid,'=');

    $join = new views_join();
    $join->table = $subquery;
    $join->field = 'user_species_nid';
    $join->left_table = 'node';
    $join->left_field = 'nid';
    $join->type  = 'LEFT';

   $query->add_relationship('user_species', $join,'node');
   $view->query->add_where(0,db_and()->condition('user_species.user_species_nid ','NULL','IS NULL'));

  }
  
  // View list public and json data.
  if ($view->name == 'my_lemur_life_list' && ($view->current_display == 'page_1' || $view->current_display == 'page_3')){
    include_once drupal_get_path('module', 'master_list_setup') . '/includes/master_list_toggle_status.inc';
    $uids = _get_all_user_public_visibility();
    if (!empty($uids)) {
      $view->query->add_where(2, db_and()->condition('node.uid', $uids , 'IN')); 
    }
    else{
      $view->query->add_where(2, db_and()->condition('node.uid', array(-1) , 'IN')); 
    }
  }

}


