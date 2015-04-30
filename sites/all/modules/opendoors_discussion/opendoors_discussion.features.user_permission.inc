<?php
/**
 * @file
 * opendoors_discussion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opendoors_discussion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Moderator' => 'Moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Moderator' => 'Moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in proposal_category'.
  $permissions['delete terms in proposal_category'] = array(
    'name' => 'delete terms in proposal_category',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Moderator' => 'Moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in proposal_category'.
  $permissions['edit terms in proposal_category'] = array(
    'name' => 'edit terms in proposal_category',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
