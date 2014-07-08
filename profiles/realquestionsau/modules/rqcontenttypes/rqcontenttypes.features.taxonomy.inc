<?php
/**
 * @file
 * rqcontenttypes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rqcontenttypes_taxonomy_default_vocabularies() {
  return array(
    'electorate_type' => array(
      'name' => 'Electorate type',
      'machine_name' => 'electorate_type',
      'description' => 'Describes the types of electorate across Australia',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'institution_type' => array(
      'name' => 'Institution Type',
      'machine_name' => 'institution_type',
      'description' => 'Institution Type',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'party_definition' => array(
      'name' => 'Party Definition',
      'machine_name' => 'party_definition',
      'description' => 'Party Definition',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'state' => array(
      'name' => 'State',
      'machine_name' => 'state',
      'description' => 'States ',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
