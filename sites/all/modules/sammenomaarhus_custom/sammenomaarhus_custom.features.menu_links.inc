<?php
/**
 * @file
 * sammenomaarhus_custom.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sammenomaarhus_custom_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_button-menu:admin/structure/menu/manage/menu-button-menu
  $menu_links['management_button-menu:admin/structure/menu/manage/menu-button-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-button-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Button Menu',
    'options' => array(
      'identifier' => 'management_button-menu:admin/structure/menu/manage/menu-button-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menuer:admin/structure/menu',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_sgning-og-metadata:admin/config/search',
  );
  // Exported menu link: management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance
  $menu_links['management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/eu-cookie-compliance',
    'router_path' => 'admin/config/system/eu-cookie-compliance',
    'link_title' => 'EU Cookie Compliance',
    'options' => array(
      'attributes' => array(
        'title' => 'Make your website compliant with the EU Directive on Privacy and Electronic Communications.',
      ),
      'identifier' => 'management_eu-cookie-compliance:admin/config/system/eu-cookie-compliance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_sgning-og-metadata:admin/config/search',
  );
  // Exported menu link: menu-button-menu_ls-om-processen:node/10
  $menu_links['menu-button-menu_ls-om-processen:node/10'] = array(
    'menu_name' => 'menu-button-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Læs om processen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-button-menu_ls-om-processen:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-button-menu_stil-forslag:nyt-forslag
  $menu_links['menu-button-menu_stil-forslag:nyt-forslag'] = array(
    'menu_name' => 'menu-button-menu',
    'link_path' => 'nyt-forslag',
    'router_path' => 'nyt-forslag',
    'link_title' => 'Stil forslag',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-button-menu_stil-forslag:nyt-forslag',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Button Menu');
  t('Clean URLs');
  t('EU Cookie Compliance');
  t('Læs om processen');
  t('Stil forslag');
  t('URL aliases');


  return $menu_links;
}
