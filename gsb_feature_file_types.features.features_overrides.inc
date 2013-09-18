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
  $overrides["file_display.video__teaser__media_youtube_video.weight"] = -45;

 return $overrides;
}
