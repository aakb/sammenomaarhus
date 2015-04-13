<?php
/**
 * @file
 * sammenomaarhus_custom.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sammenomaarhus_custom_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
