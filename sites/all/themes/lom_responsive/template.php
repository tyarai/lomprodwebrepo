<?php

function lom_responsive_form_alter(&$form, &$form_state, $form_id) {

    if ($form_id == "user_login_block") {
        //$form['links'] = Null; // Remove Request New Password and other links from Block form
        //$form['links']['#markup'] = t('Forgotten Password?') . ' <a href="/user/password">' . t('Forgotten Password?') . '</a>'; // Remove Request New Password from Block form
        //print_r( $form);
        $links  = "<a class=user-register    href=" .  $base_path . "/lommember/register>" .t('Register') . "</a>";
        $links .= " | <a class=user-password href=".   $base_path . "/lommember/password>"  .t('Forgotten Password?') . "</a>";
    
        $form['links']['#markup'] = $links;
        $form['name']['#title'] = Null; // Change text on form
        $form['name']['#attributes'] = array('placeholder' => t('username'),'class'=> array("form-control"));
        $form['pass']['#title'] = Null;
        $form['pass']['#attributes'] = array('placeholder' => t('password'),'class'=> array("form-control"));
        $form['action']['#attributes'] = array('class'=> array("primary-button"));
    }
    
    
}

/*
 * Added by Ranto on October 29th 2019 to customize login form
 */
function lom_responsive_theme() {
    $items = array();
    // create custom user-login.tpl.php
    $items['user_login'] = array(
        'render element' => 'form',
        'path' => drupal_get_path('theme', 'lom_responsive') . '/templates',
        'template' => 'user-login',
        'preprocess functions' => array(
        'your_themename_preprocess_user_login'
    ),
    );
    return $items;
}


/**
 * Implements hook_html_head_alter().
 * This will overwrite the default meta character type tag with HTML5 version.
 */
function lom_responsive_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Insert themed breadcrumb page navigation at top of the node content.
 */
function lom_responsive_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Use CSS to hide titile .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    // comment below line to hide current page to breadcrumb
	$breadcrumb[] = drupal_get_title();
    $output .= '<nav class="breadcrumb">' . implode(' » ', $breadcrumb) . '</nav>';
    return $output;
  }
}

/**
 * Override or insert variables into the html template.
 */
function lom_responsive_process_html(&$vars) {
  // Hook into color.module
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Override or insert variables into the page template.
 */
function lom_responsive_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
 
}

/**
 * Override or insert variables into the page template.
 */
function lom_responsive_preprocess_page(&$vars) {
  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_menu'] = FALSE;
  }
  
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function lom_responsive_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function lom_responsive_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

function lom_responsive_page_alter($page) {
  // <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1"/>
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
    'name' =>  'viewport',
    'content' =>  'width=device-width, initial-scale=1, maximum-scale=1'
    )
  );
  drupal_add_html_head($viewport, 'viewport');
}

/**
 * Add javascript files for front-page jquery slideshow.
 */
if (drupal_is_front_page()) {
  drupal_add_js(drupal_get_path('theme', 'responsive') . '/js/jquery.flexslider-min.js');
  drupal_add_js(drupal_get_path('theme', 'responsive') . '/js/slide.js');
}
