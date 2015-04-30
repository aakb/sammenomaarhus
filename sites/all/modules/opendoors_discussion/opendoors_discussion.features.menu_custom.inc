<?php
/**
 * @file
 * opendoors_discussion.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function opendoors_discussion_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-proposal-category-menu.
  $menus['menu-proposal-category-menu'] = array(
    'menu_name' => 'menu-proposal-category-menu',
    'title' => 'Proposal Category Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Proposal Category Menu');


  return $menus;
}
