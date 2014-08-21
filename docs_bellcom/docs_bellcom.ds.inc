<?php
/**
 * @file
 * docs_bellcom.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function docs_bellcom_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|projekt|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'projekt';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'body',
      ),
      'left' => array(
        1 => 'field_dokumenter',
      ),
      'right' => array(
        2 => 'field_kunde',
        3 => 'field_loesning',
        4 => 'field_links',
        5 => 'field_personer',
      ),
    ),
    'fields' => array(
      'body' => 'header',
      'field_dokumenter' => 'left',
      'field_kunde' => 'right',
      'field_loesning' => 'right',
      'field_links' => 'right',
      'field_personer' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'aside',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|projekt|default'] = $ds_layout;

  return $export;
}
