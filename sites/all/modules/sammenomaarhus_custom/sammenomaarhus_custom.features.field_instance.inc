<?php
/**
 * @file
 * sammenomaarhus_custom.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sammenomaarhus_custom_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_postnummer'
  $field_instances['user-user-field_postnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Valgfrit: Indtast dit postnummer',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_postnummer',
    'label' => 'Postnummer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 6,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_tlfnummer'
  $field_instances['user-user-field_tlfnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Valgfrit: Oplys tlf. nummer (vises ikke)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_tlfnummer',
    'label' => 'Tlf.nummer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Postnummer');
  t('Tlf.nummer');
  t('Valgfrit: Indtast dit postnummer');
  t('Valgfrit: Oplys tlf. nummer (vises ikke)');

  return $field_instances;
}
