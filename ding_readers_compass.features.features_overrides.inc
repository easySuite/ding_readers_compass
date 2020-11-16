<?php
/**
 * @file
 * ding_readers_compass.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ding_readers_compass_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|content|new-1fdbaeae-5265-41a0-b80f-5cbb249f0ba7|position"] = 5;
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|content|new-774544e6-7d72-4bf3-b68b-a5dfa42ff485"] = (object) array(
      'pid' => 'new-774544e6-7d72-4bf3-b68b-a5dfa42ff485',
      'panel' => 'attachment_1_1',
      'type' => 'readers_compass_recommender',
      'subtype' => 'readers_compass_recommender',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '774544e6-7d72-4bf3-b68b-a5dfa42ff485',
    );
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|panels|attachment_1_1|4"] = 'new-774544e6-7d72-4bf3-b68b-a5dfa42ff485';
  $overrides["page_manager_handlers.ting_object_panel_context.conf|display|panels|attachment_1_1|5"] = 'new-1fdbaeae-5265-41a0-b80f-5cbb249f0ba7';

 return $overrides;
}
