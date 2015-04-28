<?php
/**
 * @file
 * sammenomaarhus_custom.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sammenomaarhus_custom_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-button-menu.
  $menus['menu-button-menu'] = array(
    'menu_name' => 'menu-button-menu',
    'title' => 'Button Menu',
    'description' => 'Menu for "Featured" links on the frontpage',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Button Menu');
  t('Management');
  t('Menu for "Featured" links on the frontpage');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
