<?php
/**
 * @file
 * gsb_feature_file_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_file_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__document';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diptych' => array(
        'custom_settings' => TRUE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '1',
        ),
        'preview' => array(
          'weight' => '2',
        ),
        'metatags' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'original_image' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__resource_image';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diptych' => array(
        'custom_settings' => FALSE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
      'full_width' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_width' => array(
        'custom_settings' => TRUE,
      ),
      '1_3_width' => array(
        'custom_settings' => TRUE,
      ),
      'resource_browser_preview' => array(
        'custom_settings' => TRUE,
      ),
      'large_cover' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full_width' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '1_2_width' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '1_3_width' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'resource_browser_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__resource_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__resource_pull_quote';
  $strongarm->value = array(
    'view_modes' => array(
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diptych' => array(
        'custom_settings' => FALSE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
      'resource_browser_preview' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_width' => array(
        'custom_settings' => FALSE,
      ),
      '1_3_width' => array(
        'custom_settings' => FALSE,
      ),
      'full_width' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'resource_browser_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__resource_pull_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__resource_sidebar';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'diptych' => array(
        'custom_settings' => FALSE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_width' => array(
        'custom_settings' => TRUE,
      ),
      '1_3_width' => array(
        'custom_settings' => TRUE,
      ),
      'full_width' => array(
        'custom_settings' => TRUE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
      'resource_browser_preview' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          '1_2_width' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          '1_3_width' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full_width' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'resource_browser_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__resource_sidebar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__resource_soundcloud';
  $strongarm->value = array(
    'view_modes' => array(
      '1_2_width' => array(
        'custom_settings' => TRUE,
      ),
      '1_3_width' => array(
        'custom_settings' => TRUE,
      ),
      'full_width' => array(
        'custom_settings' => TRUE,
      ),
      'resource_browser_preview' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diptych' => array(
        'custom_settings' => FALSE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
      'large_cover' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_width_mini' => array(
        'custom_settings' => TRUE,
      ),
      '1_3_width_mini' => array(
        'custom_settings' => TRUE,
      ),
      'full_width_mini' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '1_2_width' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '1_3_width' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full_width' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'resource_browser_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'large_cover' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '1_2_width_mini' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '1_3_width_mini' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full_width_mini' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__resource_soundcloud'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__resource_twitter';
  $strongarm->value = array(
    'view_modes' => array(
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diptych' => array(
        'custom_settings' => FALSE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_width' => array(
        'custom_settings' => FALSE,
      ),
      '1_3_width' => array(
        'custom_settings' => FALSE,
      ),
      'full_width' => array(
        'custom_settings' => FALSE,
      ),
      'resource_browser_preview' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'resource_browser_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__resource_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__resource_youtube';
  $strongarm->value = array(
    'view_modes' => array(
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diptych' => array(
        'custom_settings' => FALSE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg_document' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original_image' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_width' => array(
        'custom_settings' => TRUE,
      ),
      '1_3_width' => array(
        'custom_settings' => TRUE,
      ),
      'full_width' => array(
        'custom_settings' => TRUE,
      ),
      'resource_browser_preview' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '1_2_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '1_3_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'resource_browser_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__resource_youtube'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'gsb_slideshow' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_resource_image_pattern';
  $strongarm->value = '';
  $export['pathauto_file_resource_image_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_resource_pull_quote_pattern';
  $strongarm->value = '';
  $export['pathauto_file_resource_pull_quote_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_resource_sidebar_pattern';
  $strongarm->value = '';
  $export['pathauto_file_resource_sidebar_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_resource_soundcloud_pattern';
  $strongarm->value = '';
  $export['pathauto_file_resource_soundcloud_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_resource_twitter_pattern';
  $strongarm->value = '';
  $export['pathauto_file_resource_twitter_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_resource_youtube_pattern';
  $strongarm->value = '';
  $export['pathauto_file_resource_youtube_pattern'] = $strongarm;

  return $export;
}
