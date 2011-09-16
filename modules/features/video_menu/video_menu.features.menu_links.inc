<?php
/**
 * @file
 * video_menu.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function video_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:channels
  $menu_links['main-menu:channels'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'channels',
    'router_path' => 'channels',
    'link_title' => 'Channels',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/add
  $menu_links['main-menu:node/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Upload',
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
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/add/channel
  $menu_links['main-menu:node/add/channel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/channel',
    'router_path' => 'node/add/channel',
    'link_title' => 'Create a Channel',
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
    'parent_path' => 'node/add',
  );
  // Exported menu link: main-menu:node/add/video
  $menu_links['main-menu:node/add/video'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Upload a video',
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
    'parent_path' => 'node/add',
  );
  // Exported menu link: main-menu:videos
  $menu_links['main-menu:videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'All Videos',
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
  );
  // Exported menu link: main-menu:watch-later
  $menu_links['main-menu:watch-later'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'watch-later',
    'router_path' => 'watch-later',
    'link_title' => 'Watch Later',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All Videos');
  t('Channels');
  t('Create a Channel');
  t('Upload');
  t('Upload a video');
  t('Watch Later');


  return $menu_links;
}