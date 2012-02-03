<?php
/**
 * @file
 * humanitarianresponse_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function humanitarianresponse_documents_views_default_views_alter(&$views) {
  if (isset($views['documents'])) {
    $views['documents']->set_display('default');
    $handler = $views['documents']->display_handler;
    /* Filter criterion: Content: Regions (field_document_regions) */
    $handler->display->display_options['filters']['field_document_regions_tid']['id'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['table'] = 'field_data_field_document_regions';
    $handler->display->display_options['filters']['field_document_regions_tid']['field'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['operator_id'] = 'field_document_regions_tid_op';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['label'] = 'Filter by Region';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['operator'] = 'field_document_regions_tid_op';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['identifier'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['reduce'] = 0;
    $handler->display->display_options['filters']['field_document_regions_tid']['reduce_duplicates'] = 0;
    $handler->display->display_options['filters']['field_document_regions_tid']['type'] = 'select';
    $handler->display->display_options['filters']['field_document_regions_tid']['vocabulary'] = 'document_regions';
    $handler->display->display_options['filters']['field_document_regions_tid']['hierarchy'] = 1;
    $handler->display->display_options['filters']['field_document_regions_tid']['error_message'] = 0;
    
    $views['documents']->set_display('archive');
    $handler = $views['documents']->display_handler;
    /* Filter criterion: Content: Regions (field_document_regions) */
    $handler->display->display_options['filters']['field_document_regions_tid']['id'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['table'] = 'field_data_field_document_regions';
    $handler->display->display_options['filters']['field_document_regions_tid']['field'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['operator_id'] = 'field_document_regions_tid_op';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['label'] = 'Filter by Region';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['operator'] = 'field_document_regions_tid_op';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['identifier'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['reduce'] = 0;
    $handler->display->display_options['filters']['field_document_regions_tid']['reduce_duplicates'] = 0;
    $handler->display->display_options['filters']['field_document_regions_tid']['type'] = 'select';
    $handler->display->display_options['filters']['field_document_regions_tid']['vocabulary'] = 'document_regions';
    $handler->display->display_options['filters']['field_document_regions_tid']['hierarchy'] = 1;
    $handler->display->display_options['filters']['field_document_regions_tid']['error_message'] = 0;
    
    $views['documents']->set_display('key_documents');
    $handler = $views['documents']->display_handler;
    /* Filter criterion: Content: Regions (field_document_regions) */
    $handler->display->display_options['filters']['field_document_regions_tid']['id'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['table'] = 'field_data_field_document_regions';
    $handler->display->display_options['filters']['field_document_regions_tid']['field'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['operator_id'] = 'field_document_regions_tid_op';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['label'] = 'Filter by Region';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['operator'] = 'field_document_regions_tid_op';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['identifier'] = 'field_document_regions_tid';
    $handler->display->display_options['filters']['field_document_regions_tid']['expose']['reduce'] = 0;
    $handler->display->display_options['filters']['field_document_regions_tid']['reduce_duplicates'] = 0;
    $handler->display->display_options['filters']['field_document_regions_tid']['type'] = 'select';
    $handler->display->display_options['filters']['field_document_regions_tid']['vocabulary'] = 'document_regions';
    $handler->display->display_options['filters']['field_document_regions_tid']['hierarchy'] = 1;
    $handler->display->display_options['filters']['field_document_regions_tid']['error_message'] = 0;
  }
}
