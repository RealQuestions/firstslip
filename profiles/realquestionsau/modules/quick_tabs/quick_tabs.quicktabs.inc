<?php
/**
 * @file
 * quick_tabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function quick_tabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_questions';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My Questions';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_my_questions-block',
      'hide_title' => 1,
      'title' => 'Questions asked to me',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'politician_ansmoderation',
      'display' => 'needs_review_page',
      'args' => '',
      'title' => 'Draft Answers',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'bid' => 'views_delta_my_questions-block_1',
      'hide_title' => 1,
      'title' => 'Answered Questions',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Answered Questions');
  t('Draft Answers');
  t('My Questions');
  t('Questions asked to me');

  $export['my_questions'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'politicians_qsts';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My Questions & Answers';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_my_questions-block_2',
      'hide_title' => 1,
      'title' => 'Questions Asked',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_my_questions-block_3',
      'hide_title' => 1,
      'title' => 'Answers',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Answers');
  t('My Questions & Answers');
  t('Questions Asked');

  $export['politicians_qsts'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'real_talk';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Real Talk';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => '',
      'title' => 'All',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'agriculture',
      'title' => 'Agriculture',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'climate-change',
      'title' => 'Climate Change',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'defence',
      'title' => 'Defence',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'economy',
      'title' => 'Economy',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'education',
      'title' => 'Education',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'employment',
      'title' => 'Employment',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'energy',
      'title' => 'Energy',
      'weight' => '-93',
      'type' => 'view',
    ),
    8 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'environment',
      'title' => 'Environment',
      'weight' => '-92',
      'type' => 'view',
    ),
    9 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'foreign-affairs',
      'title' => 'Foreign Affairs',
      'weight' => '-91',
      'type' => 'view',
    ),
    10 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'gender',
      'title' => 'Gender',
      'weight' => '-90',
      'type' => 'view',
    ),
    11 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'health',
      'title' => 'Health',
      'weight' => '-89',
      'type' => 'view',
    ),
    12 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'immigration',
      'title' => 'Immigration',
      'weight' => '-88',
      'type' => 'view',
    ),
    13 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'indigenous-affairs',
      'title' => 'Indigenous affairs',
      'weight' => '-87',
      'type' => 'view',
    ),
    14 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'industrial-relations',
      'title' => 'Industrial relations',
      'weight' => '-86',
      'type' => 'view',
    ),
    15 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'information-communications-technology-ict',
      'title' => 'Information & communications technology (ICT)',
      'weight' => '-85',
      'type' => 'view',
    ),
    16 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'justice',
      'title' => 'Justice',
      'weight' => '-84',
      'type' => 'view',
    ),
    17 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'politics',
      'title' => 'Politics',
      'weight' => '-83',
      'type' => 'view',
    ),
    18 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'religion',
      'title' => 'Religion',
      'weight' => '-82',
      'type' => 'view',
    ),
    19 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'science',
      'title' => 'Science',
      'weight' => '-81',
      'type' => 'view',
    ),
    20 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'transport',
      'title' => 'Transport',
      'weight' => '-80',
      'type' => 'view',
    ),
    21 => array(
      'vid' => 'discussions',
      'display' => 'default',
      'args' => 'welfare',
      'title' => 'Welfare',
      'weight' => '-79',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Navlist';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Agriculture');
  t('All');
  t('Climate Change');
  t('Defence');
  t('Economy');
  t('Education');
  t('Employment');
  t('Energy');
  t('Environment');
  t('Foreign Affairs');
  t('Gender');
  t('Health');
  t('Immigration');
  t('Indigenous affairs');
  t('Industrial relations');
  t('Information & communications technology (ICT)');
  t('Justice');
  t('Politics');
  t('Real Talk');
  t('Religion');
  t('Science');
  t('Transport');
  t('Welfare');

  $export['real_talk'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'top_20';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Top 20';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_top20qst-block_1',
      'hide_title' => 1,
      'title' => 'Top 20 Questions',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_top20qst-block_4',
      'hide_title' => 1,
      'title' => 'New',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_top20qst-block_5',
      'hide_title' => 1,
      'title' => 'Waiting',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_top20qst-block_6',
      'hide_title' => 1,
      'title' => 'Gaining',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_top20qst-block_2',
      'hide_title' => 1,
      'title' => 'Nearly There',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_top20qst-block_3',
      'hide_title' => 1,
      'title' => 'Unloved',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Gaining');
  t('Nearly There');
  t('New');
  t('Top 20');
  t('Top 20 Questions');
  t('Unloved');
  t('Waiting');

  $export['top_20'] = $quicktabs;

  return $export;
}
