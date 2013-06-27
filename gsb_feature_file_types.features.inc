<?php
/**
 * @file
 * gsb_feature_file_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_file_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function gsb_feature_file_types_file_default_displays_alter(&$data) {
  if (isset($data['video__default__media_youtube_image'])) {
    $data['video__default__media_youtube_image']->settings['image_style'] = '566x_variable'; /* WAS: 'large' */
    $data['video__default__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['autohide'] = 2; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['autoplay'] = 0; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['color'] = 'red'; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['enablejsapi'] = 0; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['loop'] = 0; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['modestbranding'] = 0; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['nocookie'] = 0; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['origin'] = ''; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['protocol'] = 'https:'; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['protocol_specify'] = 0; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['rel'] = 1; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['showinfo'] = 1; /* WAS: '' */
    $data['video__default__media_youtube_video']->settings['theme'] = 'dark'; /* WAS: '' */
    $data['video__default__media_youtube_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__preview__media_youtube_image'])) {
    $data['video__preview__media_youtube_image']->settings['image_style'] = '450x263'; /* WAS: 'square_thumbnail' */
    $data['video__preview__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_youtube_image'])) {
    $data['video__teaser__media_youtube_image']->settings['image_style'] = '450x263'; /* WAS: 'large' */
    $data['video__teaser__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_youtube_video'])) {
    $data['video__teaser__media_youtube_video']->settings['autohide'] = 2; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['autoplay'] = 0; /* WAS: FALSE */
    $data['video__teaser__media_youtube_video']->settings['color'] = 'red'; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['enablejsapi'] = 0; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['loop'] = 0; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['modestbranding'] = 0; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['nocookie'] = 0; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['origin'] = ''; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['protocol'] = 'https:'; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['protocol_specify'] = 0; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['rel'] = 1; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['showinfo'] = 1; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->settings['theme'] = 'dark'; /* WAS: '' */
    $data['video__teaser__media_youtube_video']->status = TRUE; /* WAS: 1 */
  }
}
