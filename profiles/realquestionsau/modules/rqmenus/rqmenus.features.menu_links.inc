<?php
/**
 * @file
 * rqmenus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rqmenus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:contact
  $menu_links['main-menu:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Get in touch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'contact',
  );
  // Exported menu link: main-menu:forum
  $menu_links['main-menu:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:https://realquestions.net.au/content/faq-politicians
  $menu_links['main-menu:https://realquestions.net.au/content/faq-politicians'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://realquestions.net.au/content/faq-politicians',
    'router_path' => '',
    'link_title' => 'FAQ for politicians',
    'options' => array(
      'attributes' => array(
        'title' => 'Help for politicians',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:node/4558
  $menu_links['main-menu:node/4558'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4558',
    'router_path' => 'node/%',
    'link_title' => 'Real Talk',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/53
  $menu_links['main-menu:node/53'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Survey',
    'options' => array(
      'attributes' => array(
        'title' => 'Survey',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'contact',
  );
  // Exported menu link: main-menu:node/6
  $menu_links['main-menu:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:node/7
  $menu_links['main-menu:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/6',
  );
  // Exported menu link: main-menu:scorecard
  $menu_links['main-menu:scorecard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'scorecard',
    'router_path' => 'scorecard',
    'link_title' => 'Scorecard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:yourquestions
  $menu_links['main-menu:yourquestions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'yourquestions',
    'router_path' => 'yourquestions',
    'link_title' => 'Your Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-footer:http://drupal.org
  $menu_links['menu-footer:http://drupal.org'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'http://drupal.org',
    'router_path' => '',
    'link_title' => 'Powered by Drupal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer:node/62
  $menu_links['menu-footer:node/62'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Privacy policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer:node/63
  $menu_links['menu-footer:node/63'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Terms of use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: user-menu:node
  $menu_links['user-menu:node'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'User',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node',
  );
  // Exported menu link: user-menu:user/login
  $menu_links['user-menu:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('FAQ');
  t('FAQ for politicians');
  t('Forum');
  t('Get in touch');
  t('Log in');
  t('Log out');
  t('My Account');
  t('Powered by Drupal');
  t('Privacy policy');
  t('Real Talk');
  t('Scorecard');
  t('Survey');
  t('Terms of use');
  t('User');
  t('Your Questions');


  return $menu_links;
}
