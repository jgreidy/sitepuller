<?php
/**
 * @file
 * sitepuller.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sitepuller_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sitepuller_local content'.
  $permissions['create sitepuller_local content'] = array(
    'name' => 'create sitepuller_local content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create sitepuller_remote content'.
  $permissions['create sitepuller_remote content'] = array(
    'name' => 'create sitepuller_remote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create sitepuller_task content'.
  $permissions['create sitepuller_task content'] = array(
    'name' => 'create sitepuller_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sitepuller_local content'.
  $permissions['delete any sitepuller_local content'] = array(
    'name' => 'delete any sitepuller_local content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sitepuller_remote content'.
  $permissions['delete any sitepuller_remote content'] = array(
    'name' => 'delete any sitepuller_remote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sitepuller_task content'.
  $permissions['delete any sitepuller_task content'] = array(
    'name' => 'delete any sitepuller_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sitepuller_local content'.
  $permissions['delete own sitepuller_local content'] = array(
    'name' => 'delete own sitepuller_local content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sitepuller_remote content'.
  $permissions['delete own sitepuller_remote content'] = array(
    'name' => 'delete own sitepuller_remote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sitepuller_task content'.
  $permissions['delete own sitepuller_task content'] = array(
    'name' => 'delete own sitepuller_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sitepuller_local content'.
  $permissions['edit any sitepuller_local content'] = array(
    'name' => 'edit any sitepuller_local content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sitepuller_remote content'.
  $permissions['edit any sitepuller_remote content'] = array(
    'name' => 'edit any sitepuller_remote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sitepuller_task content'.
  $permissions['edit any sitepuller_task content'] = array(
    'name' => 'edit any sitepuller_task content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sitepuller_local content'.
  $permissions['edit own sitepuller_local content'] = array(
    'name' => 'edit own sitepuller_local content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sitepuller_remote content'.
  $permissions['edit own sitepuller_remote content'] = array(
    'name' => 'edit own sitepuller_remote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sitepuller_task content'.
  $permissions['edit own sitepuller_task content'] = array(
    'name' => 'edit own sitepuller_task content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
