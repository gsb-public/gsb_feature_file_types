<?php
/**
 * @file
 * gsb_feature_file_types.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gsb_feature_file_types_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: file_display
  $overrides["file_display.video__default__media_youtube_image.settings|image_style"] = '566x_variable';  
  $overrides["file_display.video__default__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__default__media_youtube_video.settings|autohide"] = 2;
  $overrides["file_display.video__default__media_youtube_video.settings|autoplay"] = 0;
  $overrides["file_display.video__default__media_youtube_video.settings|color"] = 'red';
  $overrides["file_display.video__default__media_youtube_video.settings|enablejsapi"] = 0;
  $overrides["file_display.video__default__media_youtube_video.settings|loop"] = 0;
  $overrides["file_display.video__default__media_youtube_video.settings|modestbranding"] = 0;
  $overrides["file_display.video__default__media_youtube_video.settings|nocookie"] = 0;
  $overrides["file_display.video__default__media_youtube_video.settings|origin"] = '';
  $overrides["file_display.video__default__media_youtube_video.settings|protocol"] = 'https:';
  $overrides["file_display.video__default__media_youtube_video.settings|protocol_specify"] = 0;
  $overrides["file_display.video__default__media_youtube_video.settings|rel"] = 1;
  $overrides["file_display.video__default__media_youtube_video.settings|showinfo"] = 1;
  $overrides["file_display.video__default__media_youtube_video.settings|theme"] = 'dark';
  $overrides["file_display.video__default__media_youtube_video.status"] = TRUE;
  $overrides["file_display.video__preview__media_youtube_image.settings|image_style"] = 'media_thumbnail';
  $overrides["file_display.video__preview__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_youtube_image.settings|image_style"] = '450x263';  
  $overrides["file_display.video__teaser__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_youtube_video.settings|autohide"] = 2;
  $overrides["file_display.video__teaser__media_youtube_video.settings|autoplay"] = 0;
  $overrides["file_display.video__teaser__media_youtube_video.settings|color"] = 'red';
  $overrides["file_display.video__teaser__media_youtube_video.settings|enablejsapi"] = 0;
  $overrides["file_display.video__teaser__media_youtube_video.settings|loop"] = 0;
  $overrides["file_display.video__teaser__media_youtube_video.settings|modestbranding"] = 0;
  $overrides["file_display.video__teaser__media_youtube_video.settings|nocookie"] = 0;
  $overrides["file_display.video__teaser__media_youtube_video.settings|origin"] = '';
  $overrides["file_display.video__teaser__media_youtube_video.settings|protocol"] = 'https:';
  $overrides["file_display.video__teaser__media_youtube_video.settings|protocol_specify"] = 0;
  $overrides["file_display.video__teaser__media_youtube_video.settings|rel"] = 1;
  $overrides["file_display.video__teaser__media_youtube_video.settings|showinfo"] = 1;
  $overrides["file_display.video__teaser__media_youtube_video.settings|theme"] = 'dark';
  $overrides["file_display.video__teaser__media_youtube_video.status"] = FALSE;

 return $overrides;
}
