<?php
/**
 * @file
 * docs_bellcom.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function docs_bellcom_filter_default_formats() {
  $formats = array();

  // Exported format: tinymce.
  $formats['tinymce'] = array(
    'format' => 'tinymce',
    'name' => 'tinymce',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'glossify_content' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'glossify_content_types' => array(
            'kunde' => 'kunde',
            'loesning' => 'loesning',
            'projekt' => 'projekt',
            'blog' => 0,
          ),
          'glossify_content_case_sensitivity' => 0,
          'glossify_content_first_only' => 0,
          'glossify_content_tooltips' => 1,
          'glossify_content_tooltip_field' => 'body',
        ),
      ),
      'glossify_taxonomy' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'glossify_taxonomy_vocabs' => array(
            1 => 1,
            2 => 2,
            4 => 4,
            3 => 0,
          ),
          'glossify_taxonomy_case_sensitivity' => 0,
          'glossify_taxonomy_first_only' => 0,
          'glossify_taxonomy_tooltips' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
