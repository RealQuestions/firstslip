<?php

function scorecard_views_default_views() {


$view = new view();
$view->name = 'scorecardreport';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'scorecard';
$view->human_name = 'Scorecard';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Scorecard';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'party' => 'party',
  'questions' => 'questions',
  'answers' => 'answers',
  'rating' => 'rating',
  'comments' => 'comments',
  'score' => 'score',
);
$handler->display->display_options['style_options']['default'] = 'questions';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'party' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'questions' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'answers' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'rating' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'comments' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'score' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'The scorecard provides a summary comparison of politicians scores.  Note that the "average answers" is the average satisfaction or popularity score for all answers given by a politician. Their total score is calculated by multiplying the number of answers and the average answer score. The table shows the number of questions asked of each office-holder, the number of comments made, the number of answers available, and the average scores on their answers. It then combines these results into a total score.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Scores: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'scorecard';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: Scores: Party */
$handler->display->display_options['fields']['party']['id'] = 'party';
$handler->display->display_options['fields']['party']['table'] = 'scorecard';
$handler->display->display_options['fields']['party']['field'] = 'party';
/* Field: Scores: Questions */
$handler->display->display_options['fields']['questions']['id'] = 'questions';
$handler->display->display_options['fields']['questions']['table'] = 'scorecard';
$handler->display->display_options['fields']['questions']['field'] = 'questions';
/* Field: Scores: Answers */
$handler->display->display_options['fields']['answers']['id'] = 'answers';
$handler->display->display_options['fields']['answers']['table'] = 'scorecard';
$handler->display->display_options['fields']['answers']['field'] = 'answers';
/* Field: Scores: Rating */
$handler->display->display_options['fields']['rating']['id'] = 'rating';
$handler->display->display_options['fields']['rating']['table'] = 'scorecard';
$handler->display->display_options['fields']['rating']['field'] = 'rating';
/* Field: Scores: Comments */
$handler->display->display_options['fields']['comments']['id'] = 'comments';
$handler->display->display_options['fields']['comments']['table'] = 'scorecard';
$handler->display->display_options['fields']['comments']['field'] = 'comments';
/* Field: Scores: Score */
$handler->display->display_options['fields']['score']['id'] = 'score';
$handler->display->display_options['fields']['score']['table'] = 'scorecard';
$handler->display->display_options['fields']['score']['field'] = 'score';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'scorecard';

$views[$view->name] = $view;

/*
 *
 *   SCORECARD Level 3
 *
 */
 
$view = new view();
$view->name = 'scorecard_l3';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'scorecard_l3';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'scorecard_l3';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = 'Ans';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Clarity */
$handler->display->display_options['fields']['field_vote']['id'] = 'field_vote';
$handler->display->display_options['fields']['field_vote']['table'] = 'field_data_field_vote';
$handler->display->display_options['fields']['field_vote']['field'] = 'field_vote';
$handler->display->display_options['fields']['field_vote']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_vote']['click_sort_column'] = 'rating';
$handler->display->display_options['fields']['field_vote']['type'] = 'fivestar_formatter_percentage';
$handler->display->display_options['fields']['field_vote']['settings'] = array(
  'widget' => array(
    'fivestar_widget' => 'default',
  ),
  'expose' => 1,
  'style' => 'average',
  'text' => 'average',
);
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Question (field_question_nr) */
$handler->display->display_options['arguments']['field_question_nr_nid']['id'] = 'field_question_nr_nid';
$handler->display->display_options['arguments']['field_question_nr_nid']['table'] = 'field_data_field_question_nr';
$handler->display->display_options['arguments']['field_question_nr_nid']['field'] = 'field_question_nr_nid';
$handler->display->display_options['arguments']['field_question_nr_nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_question_nr_nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_question_nr_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_question_nr_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_question_nr_nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_question_nr_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'answers' => 'answers',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'scorecard_l3';

/* Display: scorecard_l3 */
$handler = $view->new_display('attachment', 'scorecard_l3', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';

$views[$view->name] = $view;

/*
 *
 * Scorecard Level 2
 *
 */


$view = new view();
$view->name = 'scorecard_l2';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'scorecard_l2';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'scorecard_l2';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'title',
    'rendered' => 0,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
/* Contextual filter: Content: Individual (field_userreference) */
$handler->display->display_options['arguments']['field_userreference_uid']['id'] = 'field_userreference_uid';
$handler->display->display_options['arguments']['field_userreference_uid']['table'] = 'field_data_field_userreference';
$handler->display->display_options['arguments']['field_userreference_uid']['field'] = 'field_userreference_uid';
$handler->display->display_options['arguments']['field_userreference_uid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_userreference_uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_userreference_uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_userreference_uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_userreference_uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'questions' => 'questions',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'scorecard_l2';



$views[$view->name] = $view;


/*
 *
 *  SCORECARD QSTS
 *
 */


$view = new view();
$view->name = 'scorecard_l1';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'scorecard_l1';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'scorecard_l1';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Individual (field_userreference) */
$handler->display->display_options['relationships']['field_userreference_uid']['id'] = 'field_userreference_uid';
$handler->display->display_options['relationships']['field_userreference_uid']['table'] = 'field_data_field_userreference';
$handler->display->display_options['relationships']['field_userreference_uid']['field'] = 'field_userreference_uid';
$handler->display->display_options['relationships']['field_userreference_uid']['required'] = TRUE;
$handler->display->display_options['relationships']['field_userreference_uid']['delta'] = '-1';
/* Field: Content: Individual */
$handler->display->display_options['fields']['field_userreference']['id'] = 'field_userreference';
$handler->display->display_options['fields']['field_userreference']['table'] = 'field_data_field_userreference';
$handler->display->display_options['fields']['field_userreference']['field'] = 'field_userreference';
/* Field: Content: party */
$handler->display->display_options['fields']['field_parties']['id'] = 'field_parties';
$handler->display->display_options['fields']['field_parties']['table'] = 'field_data_field_parties';
$handler->display->display_options['fields']['field_parties']['field'] = 'field_parties';
$handler->display->display_options['fields']['field_parties']['delta_offset'] = '0';
/* Contextual filter: Content: Individual (field_userreference) */
$handler->display->display_options['arguments']['field_userreference_uid']['id'] = 'field_userreference_uid';
$handler->display->display_options['arguments']['field_userreference_uid']['table'] = 'field_data_field_userreference';
$handler->display->display_options['arguments']['field_userreference_uid']['field'] = 'field_userreference_uid';
$handler->display->display_options['arguments']['field_userreference_uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_userreference_uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_userreference_uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_userreference_uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'party_membership' => 'party_membership',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'scorecard_l1';

$views[$view->name] = $view;


return $views;

}
