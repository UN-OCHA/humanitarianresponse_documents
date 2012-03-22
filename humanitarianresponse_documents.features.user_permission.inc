<?php
/**
 * @file
 * humanitarianresponse_documents.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_documents_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer field collections
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'field_collection',
  );

  return $permissions;
}
