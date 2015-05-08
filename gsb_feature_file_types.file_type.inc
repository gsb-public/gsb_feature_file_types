<?php
/**
 * @file
 * gsb_feature_file_types.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function gsb_feature_file_types_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'resource_image';
  $file_type->label = 'Resource Image';
  $file_type->description = '';
  $file_type->mimetypes = array(
    0 => 'image/gif',
    1 => 'image/jpeg',
    2 => 'image/png',
  );
  $export['resource_image'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'resource_pull_quote';
  $file_type->label = 'Resource Callout';
  $file_type->description = '';
  $file_type->mimetypes = array();
  $export['resource_pull_quote'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'resource_sidebar';
  $file_type->label = 'Resource Sidebar';
  $file_type->description = '';
  $file_type->mimetypes = array();
  $export['resource_sidebar'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'resource_soundcloud';
  $file_type->label = 'Resource SoundCloud';
  $file_type->description = '';
  $file_type->mimetypes = array();
  $export['resource_soundcloud'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'resource_twitter';
  $file_type->label = 'Resource Twitter';
  $file_type->description = '';
  $file_type->mimetypes = array();
  $export['resource_twitter'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'resource_youtube';
  $file_type->label = 'Resource Youtube';
  $file_type->description = '';
  $file_type->mimetypes = array();
  $export['resource_youtube'] = $file_type;

  return $export;
}
