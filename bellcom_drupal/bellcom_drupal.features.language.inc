<?php
/**
 * @file
 * bellcom_drupal.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function bellcom_drupal_locale_default_languages() {
  $languages = array();

  // Exported language: da.
  $languages['da'] = array(
    'language' => 'da',
    'name' => 'Danish',
    'native' => 'Dansk',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'da',
    'weight' => 0,
  );
  return $languages;
}
