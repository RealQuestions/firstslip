<?php

/**
 * @file template.php
 */
 function realquestions_css_alter(&$css) {
  $theme_path = drupal_get_path('theme', 'bootstrap');
  // Load excluded CSS files from theme.
  $excludes = _bootstrap_alter(bootstrap_theme_get_info('exclude'), 'css');
  // Add RealQuestions_bootstrap CDN file and overrides.
  if (theme_get_setting('cdn_bootstrap')){
    // Add CDN.
    if(theme_get_setting('realquestions_bootswatch')) {
         $cdn = theme_get_setting('realquestions_bootswatch_theme');
    } else {
         $cdn = '//netdna.bootstrapcdn.com/bootstrap/'. theme_get_setting('cdn_bootstrap')  .'/css/bootstrap.min.css';
    }
    $cdnresponsive = "//netdna.bootstrapcdn.com/twitter-bootstrap/2.2.2/css/bootstrap-responsive.min.css";

    $css[$cdn] = array(
      'data' => $cdn,
      'type' => 'external',
      'every_page' => TRUE,
      'media' => 'all',
      'preprocess' => FALSE,
      'group' => CSS_THEME,
      'browsers' => array('IE' => TRUE, '!IE' => TRUE),
      'weight' => -5,
    );
    $css[$cdnresponsive] = array(
      'data' => $cdnresponsive,
      'type' => 'external',
      'every_page' => TRUE,
      'media' => 'all',
      'preprocess' => FALSE,
      'group' => CSS_THEME,
      'browsers' => array('IE' => TRUE, '!IE' => TRUE),
      'weight' => -2,
    );
    
  }
  $css = array_diff_key($css, $excludes);
  unset($css['//netdna.bootstrapcdn.com/twitter-bootstrap/'. theme_get_setting('cdn_bootstrap_version')  .'/css/bootstrap-combined.min.css']);
 }


function realquestions_preprocess_node(&$vars) {
  if($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';   
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__teaser';
  }
}
