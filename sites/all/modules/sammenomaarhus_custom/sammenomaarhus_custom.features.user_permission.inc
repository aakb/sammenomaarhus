<?php
/**
 * @file
 * sammenomaarhus_custom.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sammenomaarhus_custom_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Moderator' => 'Moderator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Moderator' => 'Moderator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Citizen' => 'Citizen',
      'Moderator' => 'Moderator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
