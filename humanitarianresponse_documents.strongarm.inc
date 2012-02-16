<?php
/**
 * @file
 * humanitarianresponse_documents.strongarm.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function humanitarianresponse_documents_strongarm_alter(&$vars) {
  if (isset($vars['i18n_sync_node_type_document'])) {
    $var = $vars['i18n_sync_node_type_document'];
    $var->value[] = 'field_document_countries';
    $var->value[] = 'field_document_file_language';
    $var->value[] = 'field_document_regions';
    $vars['i18n_sync_node_type_document'] = $var;
  }
}
