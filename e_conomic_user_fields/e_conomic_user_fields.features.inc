<?php
/**
 * @file
 * e_conomic_user_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function e_conomic_user_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function e_conomic_user_fields_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function e_conomic_user_fields_node_info() {
  $items = array(
    'e_conomic_invoice' => array(
      'name' => t('e-conomic invoice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
