<?php
/**
 * @file
 * rq_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function rq_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => '0',
    'types' => array(
      0 => 'answers',
      1 => 'forum',
      2 => 'questions',
    ),
    'flag_short' => '<span class="label label-default glyphicon glyphicon-book">  Bookmark</span>',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => '<span class="label label-success glyphicon glyphicon-bookmark">  Bookmarked</span>',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'rq_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Support".
  $flags['like'] = array(
    'content_type' => 'node',
    'title' => 'Support',
    'global' => '0',
    'types' => array(
      0 => 'answers',
      1 => 'questions',
    ),
    'flag_short' => '<span class="label label-default glyphicon glyphicon-hand-right">  Support this</span>',
    'flag_long' => 'Register your support',
    'flag_message' => 'Your Support has been registered',
    'unflag_short' => '<span class="label label-success glyphicon glyphicon glyphicon-thumbs-up">  Remove Support</span>',
    'unflag_long' => 'withdraw support, stay neutral',
    'unflag_message' => 'Your Support has been removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'rq_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Report Abuse".
  $flags['page_feedback'] = array(
    'content_type' => 'node',
    'title' => 'Report Abuse',
    'global' => '1',
    'types' => array(
      0 => 'questions',
    ),
    'flag_short' => '<span class="label label-default glyphicon glyphicon-flag"> Report Abuse</span>',
    'flag_long' => 'Report as Abusive',
    'flag_message' => 'Question marked as Abusive',
    'unflag_short' => '<span class="label label-danger glyphicon glyphicon-fire"> Flagged for Review</span>',
    'unflag_long' => 'Remove this Abusive Tag',
    'unflag_message' => 'Removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'rq_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Report Comment".
  $flags['reportthiscomment'] = array(
    'content_type' => 'comment',
    'title' => 'Report Comment',
    'global' => '1',
    'types' => array(
      0 => 'comment_node_answers',
      1 => 'comment_node_forum',
      2 => 'comment_node_questions',
    ),
    'flag_short' => '<span class="label label-default glyphicon glyphicon-flag"> Report Abuse</span>',
    'flag_long' => 'Report this comment as offensive',
    'flag_message' => 'Thanks, the moderators will be looking at this',
    'unflag_short' => '<span class="label label-danger glyphicon glyphicon-fire"> Flagged for Review</span>',
    'unflag_long' => 'This removes the offensive report tag for this comment',
    'unflag_message' => 'Thanks, Report Comment has been removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_comment' => 1,
    'module' => 'rq_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
