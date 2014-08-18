<?php
/**
 * @file
 * gsb_feature_file_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_file_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'file|resource_pull_quote|default';
  $ds_fieldsetting->entity_type = 'file';
  $ds_fieldsetting->bundle = 'resource_pull_quote';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_quote_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['file|resource_pull_quote|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_file_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|resource_pull_quote|default';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'resource_pull_quote';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_description',
        1 => 'field_quote_author',
      ),
    ),
    'fields' => array(
      'field_description' => 'ds_content',
      'field_quote_author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['file|resource_pull_quote|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_file_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '1_2_width';
  $ds_view_mode->label = '1/2 width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['1_2_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '1_3_width';
  $ds_view_mode->label = '1/3 width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['1_3_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_width';
  $ds_view_mode->label = 'Full width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['full_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'original_image';
  $ds_view_mode->label = 'Original Image';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['original_image'] = $ds_view_mode;

  return $export;
}
