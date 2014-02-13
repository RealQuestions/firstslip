<?php
/**
 * @file
 * rqcontenttypes.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rqcontenttypes_node_info() {
  $items = array(
    'answers' => array(
      'name' => t('Answers'),
      'base' => 'node_content',
      'description' => t('Answers come from politicians (or their delegate) who logs in to provide answers to questions [except not when we make them up during testing].'),
      'has_title' => '1',
      'title_label' => t('Answer Title'),
      'help' => t('This process is in two stages. First submit your answer. Second, go to the "Draft Answers" section where you can make your answer public. Please answer carefully, as you cannot change your answer after you publish it. '),
    ),
    'election' => array(
      'name' => t('Election'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'electorate' => array(
      'name' => t('Electorate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Institution Name'),
      'help' => '',
    ),
    'party_membership' => array(
      'name' => t('Party Membership'),
      'base' => 'node_content',
      'description' => t('This is where politicians memberships of political parties are entered.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'position' => array(
      'name' => t('Position'),
      'base' => 'node_content',
      'description' => t('Use this form to add a role or position for an individual, eg Julia Gillard as Prime Minister. Note that individuals can hold multiple positions, eg member for their electorate and also a minister.'),
      'has_title' => '1',
      'title_label' => t('Politician Position'),
      'help' => t('Politicians may have multiple simultaneous positions, including the electorate they represent (Member for Whatever), Minister of this, Minister for That, etc.'),
    ),
    'questions' => array(
      'name' => t('Questions'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
