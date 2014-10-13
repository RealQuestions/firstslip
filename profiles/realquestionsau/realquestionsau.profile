<?php

function realquestionsau_install_tasks(&$install_state) {

    $tasks['pagestructure'] = array(
        'display_name' => t('Install Basic Page Structure for RealQuestions'),
        'display' => TRUE,
        'type' => 'normal',
        'run' => 'INSTALL_TASK_RUN_IF_REACHED',
        'function' => 'pagestructure',
    );


    $tasks['sitestructure'] = array(
        'display_name' => t('Install Site Structure for RealQuestions'),
        'display' => TRUE,
        'type' => 'normal',
        'run' => 'INSTALL_TASK_RUN_IF_REACHED',
        'function' => 'sitestructure',
    );
    
    return $tasks;
}

function pagestructure() {

    // Front Page 
    rq_nodecreate('Basic page', 'Front Page', ' ');

    // Talk Page
    
    // Top Questions
}

function sitestructure() {
    
    variable_set('site_mail', 'team@realquestions.net.au');
    variable_set('jquery_update_jquery_version', strval(1.9));
    variable_set('site_frontpage', 'node/1');

    $theme = array(
       'toggle_name' => 0,
       'bootstrap_navbar_position' => 'static-top',
       'toggle_comment_user_verification' => 1
    );
    variable_set('theme_realquestions_settings', $theme);

}

function rq_nodecreate($type, $title, $body, $status=0, $comment=0, $promote=0) {

    global $user;
    $values = array(
        'type' => $title,
        'uid' => $user->uid,
        'status' => $status,
        'comment' => $comment,
        'promote' => $promote
    );
    
    $entity = entity_create('node', $values);
    $entwrapper = entity_metadata_wrapper('node', $entity);
    $entwrapper->title->set($title);
    $entwrapper->body->set(array('value' => $body));

    $entwrapper->save();
}
