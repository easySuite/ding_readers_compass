<?php
/**
 * @file
 * ding_readers_compass.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ding_readers_compass_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_lsekompas:laesekompas.
  $menu_links['main-menu_lsekompas:laesekompas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'laesekompas',
    'router_path' => 'laesekompas',
    'link_title' => 'Læsekompas',
    'options' => array(
      'identifier' => 'main-menu_lsekompas:laesekompas',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Læsekompas');

  return $menu_links;
}
