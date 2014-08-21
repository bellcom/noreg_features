<?php
/**
 * @file
 * docs_bellcom.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function docs_bellcom_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabel|field_collection_item|field_sites|default';
  $field_group->group_name = 'group_tabel';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sites';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'tabel',
    'weight' => '0',
    'children' => array(
      0 => 'field_url',
      1 => 'field_type',
      2 => 'field_git_branch',
      3 => 'field_bellcom_hoted',
      4 => 'field_host',
      5 => 'field_tags',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'tabel',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '2',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-tabel field-group-table',
      ),
    ),
  );
  $export['group_tabel|field_collection_item|field_sites|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles|field_collection_item|field_wiki|default';
  $field_group->group_name = 'group_titles';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_wiki';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overskrit',
    'weight' => '0',
    'children' => array(
      0 => 'field_wiki_overskrift',
      1 => 'field_wiki_tekst',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Overskrit',
      'instance_settings' => array(
        'classes' => 'group-titles field-group-html5 panel panel-default',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_titles|field_collection_item|field_wiki|default'] = $field_group;

  return $export;
}
