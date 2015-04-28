<?php
/**
 * @file
 * sammenomaarhus_custom.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sammenomaarhus_custom_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_sammenomaarhus_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'header_background_1' => 0,
    'text_color' => '#000000',
    'page_background_color' => '',
    'filterbar_links' => '#191919',
    'filterbar_links_hover' => '#2A2D58',
    'category_labels_bg' => '#656565',
    'category_labels_bg_active' => '#333333',
    'category_labels_font_color' => '#F2F2F2',
    'main_bubble_color' => '#157BB3',
    'response_bubble_color' => '#157BB3',
    'heatmap_color_0' => '#157BB3',
    'heatmap_color_1' => '#003866',
    'heatmap_color_2' => '#1d1d68',
    'heatmap_color_3' => '#480f6d',
    'heatmap_color_4' => '#990062',
    'heatmap_color_5' => '#2A2D58',
    'default_logo' => 0,
    'logo_path' => 'public://aaklogosubsite.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'no',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 1,
    'zen_wireframes' => 0,
  );
  $export['theme_sammenomaarhus_settings'] = $strongarm;

  return $export;
}
