<?php
/**
 * @file
 * e_conomic_user_fields.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function e_conomic_user_fields_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_invoice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'user invoice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Invoices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_economic_invoice_accountid' => 'field_economic_invoice_accountid',
    'field_economic_invoice_serialnum' => 'field_economic_invoice_serialnum',
    'field_economic_invoice_date' => 'field_economic_invoice_date',
    'field_economic_invoice_entry' => 'field_economic_invoice_entry',
    'field_economic_invoice_invoice' => 'field_economic_invoice_invoice',
    'field_economic_invoice_text' => 'field_economic_invoice_text',
    'field_economic_invoice_amount' => 'field_economic_invoice_amount',
    'field_economic_invoice_balance' => 'field_economic_invoice_balance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_accountid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_serialnum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_entry' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_invoice' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_balance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: economic_invoice_accountid */
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['id'] = 'field_economic_invoice_accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['table'] = 'field_data_field_economic_invoice_accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['field'] = 'field_economic_invoice_accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['label'] = 'accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: economic_invoice_serialnumber */
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['id'] = 'field_economic_invoice_serialnum';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['table'] = 'field_data_field_economic_invoice_serialnum';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['field'] = 'field_economic_invoice_serialnum';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['label'] = 'serialnumber';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: economic_invoice_date */
  $handler->display->display_options['fields']['field_economic_invoice_date']['id'] = 'field_economic_invoice_date';
  $handler->display->display_options['fields']['field_economic_invoice_date']['table'] = 'field_data_field_economic_invoice_date';
  $handler->display->display_options['fields']['field_economic_invoice_date']['field'] = 'field_economic_invoice_date';
  $handler->display->display_options['fields']['field_economic_invoice_date']['label'] = 'dato';
  $handler->display->display_options['fields']['field_economic_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: economic_invoice_entry */
  $handler->display->display_options['fields']['field_economic_invoice_entry']['id'] = 'field_economic_invoice_entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['table'] = 'field_data_field_economic_invoice_entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['field'] = 'field_economic_invoice_entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['label'] = 'entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: economic_invoice_invoice */
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['id'] = 'field_economic_invoice_invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['table'] = 'field_data_field_economic_invoice_invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['field'] = 'field_economic_invoice_invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['label'] = 'invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: economic_invoice_text */
  $handler->display->display_options['fields']['field_economic_invoice_text']['id'] = 'field_economic_invoice_text';
  $handler->display->display_options['fields']['field_economic_invoice_text']['table'] = 'field_data_field_economic_invoice_text';
  $handler->display->display_options['fields']['field_economic_invoice_text']['field'] = 'field_economic_invoice_text';
  $handler->display->display_options['fields']['field_economic_invoice_text']['label'] = 'text';
  /* Felt: Indhold: economic_invoice_amount */
  $handler->display->display_options['fields']['field_economic_invoice_amount']['id'] = 'field_economic_invoice_amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['table'] = 'field_data_field_economic_invoice_amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['field'] = 'field_economic_invoice_amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['label'] = 'amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['settings'] = array(
    'thousand_separator' => '.',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: economic_invoice_balance */
  $handler->display->display_options['fields']['field_economic_invoice_balance']['id'] = 'field_economic_invoice_balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['table'] = 'field_data_field_economic_invoice_balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['field'] = 'field_economic_invoice_balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['label'] = 'balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: economic_invoice_accountid (field_economic_invoice_accountid) */
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['id'] = 'field_economic_invoice_accountid_value';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['table'] = 'field_data_field_economic_invoice_accountid';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['field'] = 'field_economic_invoice_accountid_value';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'e_conomic_invoice' => 'e_conomic_invoice',
  );
  /* Filterkriterie: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$node = node_load($row->field_economic_invoice_accountid);
  if (in_array(\'administrator\', array_values($user->roles))) {
     return false;
  }else{
if(isset($user->field_economic_id))
   if($user->field_economic_id[\'und\'][0][\'value\'] == $node->field_economic_invoice_accountid[\'und\'][0][\'value\']) return false;
return true;
}';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-invoice';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Invoices';
  $handler->display->display_options['menu']['description'] = 'Invoices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['user_invoice'] = array(
    t('Master'),
    t('User Invoices'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Titel'),
    t('accountid'),
    t('serialnumber'),
    t('dato'),
    t('entry'),
    t('invoice'),
    t('text'),
    t('amount'),
    t('balance'),
    t('Alle'),
    t('Page'),
  );
  $export['user_invoice'] = $view;

  return $export;
}
