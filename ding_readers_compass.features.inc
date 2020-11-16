<?php
/**
 * @file
 * ding_readers_compass.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_readers_compass_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function ding_readers_compass_default_page_manager_handlers_alter(&$data) {
  if (isset($data['ting_object_panel_context'])) {
    $data['ting_object_panel_context']->conf['display']->content['new-1fdbaeae-5265-41a0-b80f-5cbb249f0ba7']->position = 5; /* WAS: 4 */
    $data['ting_object_panel_context']->conf['display']->content['new-774544e6-7d72-4bf3-b68b-a5dfa42ff485'] = (object) array(
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
        ); /* WAS: '' */
    $data['ting_object_panel_context']->conf['display']->panels['attachment_1_1']['4'] = 'new-774544e6-7d72-4bf3-b68b-a5dfa42ff485'; /* WAS: 'new-1fdbaeae-5265-41a0-b80f-5cbb249f0ba7' */
    $data['ting_object_panel_context']->conf['display']->panels['attachment_1_1']['5'] = 'new-1fdbaeae-5265-41a0-b80f-5cbb249f0ba7'; /* WAS: '' */
  }
}
