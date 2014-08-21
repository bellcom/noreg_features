<?php
/**
 * @file
 * bellcom_drupal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bellcom_drupal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
