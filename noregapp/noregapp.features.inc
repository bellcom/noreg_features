<?php
/**
 * @file
 * noregapp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function noregapp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function noregapp_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function noregapp_node_info() {
  $items = array(
    'vehicle' => array(
      'name' => t('Køretøj'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
