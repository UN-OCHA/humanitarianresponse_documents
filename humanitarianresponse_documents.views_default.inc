<?php
/**
 * @file
 * humanitarianresponse_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_documents_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_document_type' => 'field_document_type',
    'field_clusters' => 'field_clusters',
    'field_locations' => 'field_locations',
    'field_organizations' => 'field_organizations',
    'field_document_files' => 'field_document_files',
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
    'field_document_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_files' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no resources in this category';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['field_api_classes'] = 0;
  /* Field: Content: Cluster(s) */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Cluster';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_clusters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_clusters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_clusters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_clusters']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_clusters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clusters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_clusters']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_clusters']['field_api_classes'] = 0;
  /* Field: Content: Theme(s) */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['label'] = 'Theme';
  $handler->display->display_options['fields']['field_themes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_themes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_themes']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_themes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_themes']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_themes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_themes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_themes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_themes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_themes']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_themes']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_themes']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_themes']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_organizations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organizations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organizations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organizations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organizations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organizations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organizations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organizations']['field_api_classes'] = 0;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_files']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_files']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_files']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_files']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_files']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_files']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_document_files']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_document_files']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_document_files']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator_id'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['identifier'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['field_document_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['error_message'] = 1;
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

  /* Display: Documents per term */
  $handler = $view->new_display('page', 'Documents per term', 'documents_per_term');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['field_api_classes'] = 0;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_files']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_files']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_files']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_files']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_files']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_files']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_document_files']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_document_files']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_document_files']['separator'] = '';
  $handler->display->display_options['fields']['field_document_files']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['path'] = 'taxonomy/term/%/resources';

  /* Display: Home Key */
  $handler = $view->new_display('panel_pane', 'Home Key', 'home_key');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Documents';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'resources/key';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no key documents';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File (field_document_files) */
  $handler->display->display_options['relationships']['field_document_files_value']['id'] = 'field_document_files_value';
  $handler->display->display_options['relationships']['field_document_files_value']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['relationships']['field_document_files_value']['field'] = 'field_document_files_value';
  $handler->display->display_options['relationships']['field_document_files_value']['required'] = 0;
  $handler->display->display_options['relationships']['field_document_files_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: File */
  $handler->display->display_options['fields']['field_document_files_file']['id'] = 'field_document_files_file';
  $handler->display->display_options['fields']['field_document_files_file']['table'] = 'field_data_field_document_files_file';
  $handler->display->display_options['fields']['field_document_files_file']['field'] = 'field_document_files_file';
  $handler->display->display_options['fields']['field_document_files_file']['relationship'] = 'field_document_files_value';
  $handler->display->display_options['fields']['field_document_files_file']['label'] = '';
  $handler->display->display_options['fields']['field_document_files_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_files_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_files_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_files_file']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_files_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_files_file']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_document_files_file']['settings'] = array(
    'file_view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_document_files_file']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'a87cf2af-fe60-0734-fddd-af561c9e8015' => 'a87cf2af-fe60-0734-fddd-af561c9e8015',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';

  /* Display: Home Featured */
  $handler = $view->new_display('panel_pane', 'Home Featured', 'home_featured');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Document';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'featured';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no featured document';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_document_thumbnail']['id'] = 'field_document_thumbnail';
  $handler->display->display_options['fields']['field_document_thumbnail']['table'] = 'field_data_field_document_thumbnail';
  $handler->display->display_options['fields']['field_document_thumbnail']['field'] = 'field_document_thumbnail';
  $handler->display->display_options['fields']['field_document_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_document_thumbnail']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '294895bd-f177-c584-5567-40d5458f3027' => '294895bd-f177-c584-5567-40d5458f3027',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';

  /* Display: Home Reports */
  $handler = $view->new_display('panel_pane', 'Home Reports', 'home_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Reports';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'resources/reports';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no reports';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '2765ccd9-b42a-cae4-052b-0554b0530c4d' => '2765ccd9-b42a-cae4-052b-0554b0530c4d',
    'd2b94d63-2c44-d594-2195-9b60397f11de' => 'd2b94d63-2c44-d594-2195-9b60397f11de',
    '31afa99a-6f2a-1484-6504-9c60192befbb' => '31afa99a-6f2a-1484-6504-9c60192befbb',
    'be289d4d-8a56-3a74-1575-733640326e6e' => 'be289d4d-8a56-3a74-1575-733640326e6e',
    'b457a616-f2f8-6814-2d8e-1db72d6b41f3' => 'b457a616-f2f8-6814-2d8e-1db72d6b41f3',
    'cb8c7108-c928-6384-e973-eb9b79240c94' => 'cb8c7108-c928-6384-e973-eb9b79240c94',
    '74998571-0fee-f184-119c-73c1aedc9b10' => '74998571-0fee-f184-119c-73c1aedc9b10',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;

  /* Display: Block per term */
  $handler = $view->new_display('block', 'Block per term', 'block_per_term');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['field_api_classes'] = 0;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_files']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_files']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_files']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_files']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_files']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_files']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_document_files']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_document_files']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_document_files']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Documents per term';

  /* Display: Cluster Key */
  $handler = $view->new_display('block', 'Cluster Key', 'cluster_key');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Documents';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no key documents';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['arguments']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['arguments']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['vocabularies'] = array(
    'clusters' => 'clusters',
  );
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_clusters_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_clusters_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_clusters_tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
  );
  $handler->display->display_options['arguments']['field_clusters_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'a87cf2af-fe60-0734-fddd-af561c9e8015' => 'a87cf2af-fe60-0734-fddd-af561c9e8015',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';
  $handler->display->display_options['block_description'] = 'Cluster Key Documents';

  /* Display: Cluster Guidelines */
  $handler = $view->new_display('block', 'Cluster Guidelines', 'cluster_guidelines');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guidelines & Templates';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no guidelines & templates';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_document_type']['field_api_classes'] = 0;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_files']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_files']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_files']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_files']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_files']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_files']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_document_files']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_document_files']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_document_files']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['arguments']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['arguments']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_clusters_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_clusters_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_clusters_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_clusters_tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
  );
  $handler->display->display_options['arguments']['field_clusters_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_clusters_tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'fae58e5d-95b2-a9b4-558c-c1c0a1557d77' => 'fae58e5d-95b2-a9b4-558c-c1c0a1557d77',
    '3f096983-5ec2-ae54-f107-0c582cc649fd' => '3f096983-5ec2-ae54-f107-0c582cc649fd',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Cluster Guidelines';

  /* Display: Funding Featured */
  $handler = $view->new_display('block', 'Funding Featured', 'funding_featured');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Document';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no featured document';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_document_thumbnail']['id'] = 'field_document_thumbnail';
  $handler->display->display_options['fields']['field_document_thumbnail']['table'] = 'field_data_field_document_thumbnail';
  $handler->display->display_options['fields']['field_document_thumbnail']['field'] = 'field_document_thumbnail';
  $handler->display->display_options['fields']['field_document_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_thumbnail']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_document_thumbnail']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Funding(s) (field_fundings) */
  $handler->display->display_options['arguments']['field_fundings_tid']['id'] = 'field_fundings_tid';
  $handler->display->display_options['arguments']['field_fundings_tid']['table'] = 'field_data_field_fundings';
  $handler->display->display_options['arguments']['field_fundings_tid']['field'] = 'field_fundings_tid';
  $handler->display->display_options['arguments']['field_fundings_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_fundings_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_fundings_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_fundings_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_fundings_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_fundings_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fundings_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fundings_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fundings_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fundings_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_fundings_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_fundings_tid']['validate_options']['vocabularies'] = array(
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['field_fundings_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_fundings_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_fundings_tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '294895bd-f177-c584-5567-40d5458f3027' => '294895bd-f177-c584-5567-40d5458f3027',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';
  $handler->display->display_options['block_description'] = 'Funding Featured Documents';

  /* Display: Resources */
  $handler = $view->new_display('page', 'Resources', 'resources');
  $handler->display->display_options['path'] = 'resources';

  /* Display: Resources Feed */
  $handler = $view->new_display('feed', 'Resources Feed', 'resources_feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['path'] = 'resources/feed';
  $handler->display->display_options['displays'] = array(
    'resources' => 'resources',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'reports' => 0,
    'training' => 0,
    'dashboard' => 0,
    'policy' => 0,
    'press' => 0,
    'key' => 0,
    'featured' => 0,
  );

  /* Display: Reports */
  $handler = $view->new_display('page', 'Reports', 'reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '2765ccd9-b42a-cae4-052b-0554b0530c4d' => '2765ccd9-b42a-cae4-052b-0554b0530c4d',
    'd2b94d63-2c44-d594-2195-9b60397f11de' => 'd2b94d63-2c44-d594-2195-9b60397f11de',
    '31afa99a-6f2a-1484-6504-9c60192befbb' => '31afa99a-6f2a-1484-6504-9c60192befbb',
    'be289d4d-8a56-3a74-1575-733640326e6e' => 'be289d4d-8a56-3a74-1575-733640326e6e',
    'b457a616-f2f8-6814-2d8e-1db72d6b41f3' => 'b457a616-f2f8-6814-2d8e-1db72d6b41f3',
    'cb8c7108-c928-6384-e973-eb9b79240c94' => 'cb8c7108-c928-6384-e973-eb9b79240c94',
    '74998571-0fee-f184-119c-73c1aedc9b10' => '74998571-0fee-f184-119c-73c1aedc9b10',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = array(
    '2765ccd9-b42a-cae4-052b-0554b0530c4d' => '2765ccd9-b42a-cae4-052b-0554b0530c4d',
    'd2b94d63-2c44-d594-2195-9b60397f11de' => 'd2b94d63-2c44-d594-2195-9b60397f11de',
    '31afa99a-6f2a-1484-6504-9c60192befbb' => '31afa99a-6f2a-1484-6504-9c60192befbb',
    'be289d4d-8a56-3a74-1575-733640326e6e' => 'be289d4d-8a56-3a74-1575-733640326e6e',
    'b457a616-f2f8-6814-2d8e-1db72d6b41f3' => 'b457a616-f2f8-6814-2d8e-1db72d6b41f3',
    'cb8c7108-c928-6384-e973-eb9b79240c94' => 'cb8c7108-c928-6384-e973-eb9b79240c94',
    '74998571-0fee-f184-119c-73c1aedc9b10' => '74998571-0fee-f184-119c-73c1aedc9b10',
  );
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  $handler->display->display_options['filters']['uuid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uuid_1']['expose']['operator_id'] = 'uuid_1_op';
  $handler->display->display_options['filters']['uuid_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['uuid_1']['expose']['operator'] = 'uuid_1_op';
  $handler->display->display_options['filters']['uuid_1']['expose']['identifier'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['uuid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid_1']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['uuid_1']['error_message'] = 1;
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'resources/reports';

  /* Display: Reports Feed */
  $handler = $view->new_display('feed', 'Reports Feed', 'reports_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '2765ccd9-b42a-cae4-052b-0554b0530c4d' => '2765ccd9-b42a-cae4-052b-0554b0530c4d',
    'd2b94d63-2c44-d594-2195-9b60397f11de' => 'd2b94d63-2c44-d594-2195-9b60397f11de',
    '31afa99a-6f2a-1484-6504-9c60192befbb' => '31afa99a-6f2a-1484-6504-9c60192befbb',
    'be289d4d-8a56-3a74-1575-733640326e6e' => 'be289d4d-8a56-3a74-1575-733640326e6e',
    'b457a616-f2f8-6814-2d8e-1db72d6b41f3' => 'b457a616-f2f8-6814-2d8e-1db72d6b41f3',
    'cb8c7108-c928-6384-e973-eb9b79240c94' => 'cb8c7108-c928-6384-e973-eb9b79240c94',
    '74998571-0fee-f184-119c-73c1aedc9b10' => '74998571-0fee-f184-119c-73c1aedc9b10',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'resources/reports/feed';
  $handler->display->display_options['displays'] = array(
    'reports' => 'reports',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'training' => 0,
    'dashboard' => 0,
    'policy' => 0,
    'press' => 0,
    'key' => 0,
    'featured' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Training */
  $handler = $view->new_display('page', 'Training', 'training');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training & Resource Materials';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '8aa14ce5-c267-6e84-41a5-631b262feac3' => '8aa14ce5-c267-6e84-41a5-631b262feac3',
    'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3' => 'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3',
    '3f096983-5ec2-ae54-f107-0c582cc649fd' => '3f096983-5ec2-ae54-f107-0c582cc649fd',
    'e8f56524-3509-67f4-05fd-733fb484c732' => 'e8f56524-3509-67f4-05fd-733fb484c732',
    '5cf067ab-f1fd-f284-3d5b-dea91eaea796' => '5cf067ab-f1fd-f284-3d5b-dea91eaea796',
    '3dba958e-4b5e-c5d4-b595-a0181f8762a2' => '3dba958e-4b5e-c5d4-b595-a0181f8762a2',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = array(
    '8aa14ce5-c267-6e84-41a5-631b262feac3' => '8aa14ce5-c267-6e84-41a5-631b262feac3',
    'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3' => 'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3',
    '3f096983-5ec2-ae54-f107-0c582cc649fd' => '3f096983-5ec2-ae54-f107-0c582cc649fd',
    'e8f56524-3509-67f4-05fd-733fb484c732' => 'e8f56524-3509-67f4-05fd-733fb484c732',
    '5cf067ab-f1fd-f284-3d5b-dea91eaea796' => '5cf067ab-f1fd-f284-3d5b-dea91eaea796',
    '3dba958e-4b5e-c5d4-b595-a0181f8762a2' => '3dba958e-4b5e-c5d4-b595-a0181f8762a2',
  );
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  $handler->display->display_options['filters']['uuid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uuid_1']['expose']['operator_id'] = 'uuid_1_op';
  $handler->display->display_options['filters']['uuid_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['uuid_1']['expose']['operator'] = 'uuid_1_op';
  $handler->display->display_options['filters']['uuid_1']['expose']['identifier'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['uuid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid_1']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['uuid_1']['error_message'] = 1;
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'resources/training-and-resource-materials';

  /* Display: Training Feed */
  $handler = $view->new_display('feed', 'Training Feed', 'training_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training & Resource Materials';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '8aa14ce5-c267-6e84-41a5-631b262feac3' => '8aa14ce5-c267-6e84-41a5-631b262feac3',
    'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3' => 'c5aa4c2c-f2df-7c84-9191-4e8914ab0eb3',
    '3f096983-5ec2-ae54-f107-0c582cc649fd' => '3f096983-5ec2-ae54-f107-0c582cc649fd',
    'e8f56524-3509-67f4-05fd-733fb484c732' => 'e8f56524-3509-67f4-05fd-733fb484c732',
    '5cf067ab-f1fd-f284-3d5b-dea91eaea796' => '5cf067ab-f1fd-f284-3d5b-dea91eaea796',
    '3dba958e-4b5e-c5d4-b595-a0181f8762a2' => '3dba958e-4b5e-c5d4-b595-a0181f8762a2',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'resources/training-and-resource-materials/feed';
  $handler->display->display_options['displays'] = array(
    'training' => 'training',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'reports' => 0,
    'dashboard' => 0,
    'policy' => 0,
    'press' => 0,
    'key' => 0,
    'featured' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Dashboard */
  $handler = $view->new_display('page', 'Dashboard', 'dashboard');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'a2b2f3ef-a445-d544-25d3-2e39a2cf36cc' => 'a2b2f3ef-a445-d544-25d3-2e39a2cf36cc',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'resources/dashboard';

  /* Display: Dashboard Feed */
  $handler = $view->new_display('feed', 'Dashboard Feed', 'dashboard_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'a2b2f3ef-a445-d544-25d3-2e39a2cf36cc' => 'a2b2f3ef-a445-d544-25d3-2e39a2cf36cc',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'resources/dashboard/feed';
  $handler->display->display_options['displays'] = array(
    'dashboard' => 'dashboard',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'reports' => 0,
    'training' => 0,
    'policy' => 0,
    'press' => 0,
    'key' => 0,
    'featured' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Policy */
  $handler = $view->new_display('page', 'Policy', 'policy');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Policy & Guidance';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'fae58e5d-95b2-a9b4-558c-c1c0a1557d77' => 'fae58e5d-95b2-a9b4-558c-c1c0a1557d77',
    '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4' => '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4',
    '56e12e34-1a72-1534-4121-6b5971a8c2b4' => '56e12e34-1a72-1534-4121-6b5971a8c2b4',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = array(
    'fae58e5d-95b2-a9b4-558c-c1c0a1557d77' => 'fae58e5d-95b2-a9b4-558c-c1c0a1557d77',
    '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4' => '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4',
    '56e12e34-1a72-1534-4121-6b5971a8c2b4' => '56e12e34-1a72-1534-4121-6b5971a8c2b4',
  );
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  $handler->display->display_options['filters']['uuid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uuid_1']['expose']['operator_id'] = 'uuid_1_op';
  $handler->display->display_options['filters']['uuid_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['uuid_1']['expose']['operator'] = 'uuid_1_op';
  $handler->display->display_options['filters']['uuid_1']['expose']['identifier'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['uuid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid_1']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['uuid_1']['error_message'] = 1;
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'resources/policy-and-guidance';

  /* Display: Policy Feed */
  $handler = $view->new_display('feed', 'Policy Feed', 'policy_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Policy & Guidance';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'fae58e5d-95b2-a9b4-558c-c1c0a1557d77' => 'fae58e5d-95b2-a9b4-558c-c1c0a1557d77',
    '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4' => '2d54eb2c-0ec0-ed74-29d9-a2f3c03a71d4',
    '56e12e34-1a72-1534-4121-6b5971a8c2b4' => '56e12e34-1a72-1534-4121-6b5971a8c2b4',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'resources/policy-and-guidance/feed';
  $handler->display->display_options['displays'] = array(
    'policy' => 'policy',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'reports' => 0,
    'training' => 0,
    'dashboard' => 0,
    'press' => 0,
    'key' => 0,
    'featured' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Press */
  $handler = $view->new_display('page', 'Press', 'press');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '4393c201-cf56-98f4-a1ce-98ce27f4bd90' => '4393c201-cf56-98f4-a1ce-98ce27f4bd90',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'media-center/press-releases';

  /* Display: Press Feed */
  $handler = $view->new_display('feed', 'Press Feed', 'press_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '4393c201-cf56-98f4-a1ce-98ce27f4bd90' => '4393c201-cf56-98f4-a1ce-98ce27f4bd90',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['uuid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'media-center/press-releases/feed';
  $handler->display->display_options['displays'] = array(
    'press' => 'press',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'reports' => 0,
    'training' => 0,
    'dashboard' => 0,
    'policy' => 0,
    'key' => 0,
    'featured' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Key */
  $handler = $view->new_display('page', 'Key', 'key');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Documents';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'a87cf2af-fe60-0734-fddd-af561c9e8015' => 'a87cf2af-fe60-0734-fddd-af561c9e8015',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'resources/key';

  /* Display: Key Feed */
  $handler = $view->new_display('feed', 'Key Feed', 'key_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Documents';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    'a87cf2af-fe60-0734-fddd-af561c9e8015' => 'a87cf2af-fe60-0734-fddd-af561c9e8015',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';
  $handler->display->display_options['path'] = 'resources/key/feed';
  $handler->display->display_options['displays'] = array(
    'key' => 'key',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'reports' => 0,
    'training' => 0,
    'dashboard' => 0,
    'policy' => 0,
    'press' => 0,
    'featured' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Featured */
  $handler = $view->new_display('page', 'Featured', 'featured');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Documents';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '294895bd-f177-c584-5567-40d5458f3027' => '294895bd-f177-c584-5567-40d5458f3027',
  );
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'resources/featured';

  /* Display: Featured Feed */
  $handler = $view->new_display('feed', 'Featured Feed', 'featured_feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Documents';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term (UUID) */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = array(
    '294895bd-f177-c584-5567-40d5458f3027' => '294895bd-f177-c584-5567-40d5458f3027',
  );
  $handler->display->display_options['filters']['uuid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['uuid']['vocabulary'] = 'display_properties';
  $handler->display->display_options['path'] = 'resources/featured/feed';
  $handler->display->display_options['displays'] = array(
    'featured' => 'featured',
    'default' => 0,
    'documents_per_term' => 0,
    'home_key' => 0,
    'home_featured' => 0,
    'home_reports' => 0,
    'block_per_term' => 0,
    'cluster_key' => 0,
    'cluster_guidelines' => 0,
    'funding_featured' => 0,
    'resources' => 0,
    'reports' => 0,
    'training' => 0,
    'dashboard' => 0,
    'policy' => 0,
    'press' => 0,
    'key' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['documents'] = array(
    t('Master'),
    t('Resources'),
    t('View all'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('There are no resources in this category'),
    t('Title'),
    t('Type'),
    t('Cluster'),
    t('Theme'),
    t('Location'),
    t('Source'),
    t('File'),
    t('Documents per term'),
    t('more'),
    t('Date'),
    t('All'),
    t('Home Key'),
    t('Key Documents'),
    t('There are no key documents'),
    t('field collection item from field_document_files'),
    t('View panes'),
    t('Home Featured'),
    t('Featured Document'),
    t('There is no featured document'),
    t('Home Reports'),
    t('Latest Reports'),
    t('There are no reports'),
    t('Block per term'),
    t('Cluster Key'),
    t('Cluster Key Documents'),
    t('Cluster Guidelines'),
    t('Guidelines & Templates'),
    t('There are no guidelines & templates'),
    t('Funding Featured'),
    t('Funding Featured Documents'),
    t('Resources Feed'),
    t('Reports'),
    t('Reports Feed'),
    t('Training'),
    t('Training & Resource Materials'),
    t('Training Feed'),
    t('Dashboard'),
    t('Dashboard Feed'),
    t('Policy'),
    t('Policy & Guidance'),
    t('Policy Feed'),
    t('Press'),
    t('Press Releases'),
    t('Press Feed'),
    t('Key'),
    t('Key Feed'),
    t('Featured'),
    t('Featured Documents'),
    t('Featured Feed'),
  );
  $export['documents'] = $view;

  return $export;
}
