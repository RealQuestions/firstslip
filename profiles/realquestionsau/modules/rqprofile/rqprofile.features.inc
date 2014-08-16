<?php
/**
 * @file
 * rqprofile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function rqprofile_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : 1 }
  }');
  $items['politicians'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "politicians",
    "label" : "Politicians",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 }
  }');
  return $items;
}
