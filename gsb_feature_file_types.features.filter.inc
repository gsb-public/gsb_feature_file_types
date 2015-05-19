<?php
/**
 * @file
 * gsb_feature_file_types.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gsb_feature_file_types_filter_default_formats() {
  $formats = array();

  // Exported format: Image Resource Caption.
  $formats['image_resource_caption'] = array(
    'format' => 'image_resource_caption',
    'name' => 'Image Resource Caption',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
