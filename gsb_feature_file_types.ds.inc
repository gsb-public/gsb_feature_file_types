<?php
/**
 * @file
 * gsb_feature_file_types.ds.inc
 */

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
