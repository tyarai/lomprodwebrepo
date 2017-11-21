<?php


/*
 *   Implementation of hook_views_query_alter()
 *
 *   Register View API information.
 */
function filtered_species_view_widget_views_query_alter(&$view, &$query) {

  if($view->name == "filtered_species_view_widget"  ){

    global $user;

    $user_selected_species = db_select('field_data_field_species','field_data_field_species');
    $user_selected_species->addField('field_data_field_species','field_species_target_id','field_species_target_id');
    $user_selected_species->join('field_data_field_user',
        'field_data_field_user',
        'field_data_field_species.entity_id = field_data_field_user.entity_id');
    //$user_selected_species->condition('field_data_field_species.entity_id',' field_data_field_user.entity_id','=');
    $user_selected_species->condition('field_data_field_user.field_user_target_id',$user->uid,'=');

    $join = new views_join();
    $join->table = $user_selected_species;
    $join->field = 'field_species_target_id';
    $join->left_table = 'node';
    $join->left_field = 'nid';
    $join->type = 'LEFT';


    $query->add_relationship('selected_species_alias', $join,'node');
    $view->query->add_where(0,db_and()->condition('selected_species_alias.field_species_target_id','','IS NULL'));

    /*$user_selected_species = db_select('field_data_field_species','field_data_field_species');
    $user_selected_species->addField('field_data_field_species','field_species_target_id','field_species_target_id');
    $user_selected_species->join('field_data_field_user',
                                 'field_data_field_user',
                                 'field_data_field_species.entity_id = field_data_field_user.entity_id');
    //$user_selected_species->condition('field_data_field_species.entity_id',' field_data_field_user.entity_id','=');
    $user_selected_species->condition('field_data_field_user.field_user_target_id',$user->uid,'=');

    $join = new views_join();
    $join->table = $user_selected_species;
    $join->field = 'field_species_target_id';
    $join->left_table = 'node';
    $join->left_field = 'nid';
    $join->type = 'LEFT';


    $query->add_relationship('selected_species_alias', $join,'node');
    $view->query->add_where(0,db_and()->condition('selected_species_alias.field_species_target_id','','IS NULL'));
  */


  }

}


