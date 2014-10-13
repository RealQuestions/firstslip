<?php
/**
 * @file
 * rqfeedsimports.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function rqfeedsimports_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-country-country_to_code';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'country_to_code';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert country to ISO code';
  $export['steps1to3-country-country_to_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-dateofbirth-strtotime';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'DateOfBirth';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1412074238',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'default date value';
  $export['steps1to3-dateofbirth-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-phone-default_value';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Phone';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '0000',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Set default value';
  $export['steps1to3-phone-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-street-array_filter';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Street';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Filter empty items';
  $export['steps1to3-street-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-street-explode';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Street';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => 2,
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['steps1to3-street-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-street-truncate_text';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Street';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '60',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Truncate';
  $export['steps1to3-street-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-town-strtotime';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Town';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'unavailable',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Default Value';
  $export['steps1to3-town-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'steps1to3-town-truncate_text';
  $feeds_tamper->importer = 'steps1to3';
  $feeds_tamper->source = 'Town';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '60',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Truncate';
  $export['steps1to3-town-truncate_text'] = $feeds_tamper;

  return $export;
}
