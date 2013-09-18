<?php
/**
 * @file
 * gsb_feature_file_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_file_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function gsb_feature_file_types_file_default_displays_alter(&$data) {
  if (isset($data['video__preview__media_youtube_image'])) {
    //dpm($data['video__preview__media_youtube_image']);
    $data['video__preview__media_youtube_image']->settings = array(
      'image_style' => '270x158_video',
      'image_link' => '',
    );
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings = array(
      'width' => '566',
      'height' => '345',
    );      
  }
  if (isset($data['video__teaser__media_youtube_video'])) {
    $data['video__teaser__media_youtube_video']->weight = -45;
    $data['video__teaser__media_youtube_video']->status = FALSE;       
  }
  if (isset($data['video__preview__file_field_media_large_icon'])) {
    $data['video__preview__file_field_media_large_icon']->status = FALSE;
  }
}
