<?php
/**
 * @file
 * docs_bellcom.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function docs_bellcom_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: tinymce
  $profiles['tinymce'] = array(
    'format' => 'tinymce',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'image' => 1,
          'formatselect' => 1,
          'blockquote' => 1,
          'hr' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'none',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
