<?php
/**
 * @file
 * sitepuller.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitepuller_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sitepuller_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sitepuller_node_info() {
  $items = array(
    'sitepuller_local' => array(
      'name' => t('Sitepuller Local'),
      'base' => 'node_content',
      'description' => t('Description of a Drupal site on your local machine.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sitepuller_remote' => array(
      'name' => t('Sitepuller Remote'),
      'base' => 'node_content',
      'description' => t('Description of a remote Drupal web site. This will become the source of a local site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sitepuller_task' => array(
      'name' => t('Sitepuller Task'),
      'base' => 'node_content',
      'description' => t('Pull all or part of a remote Drupal site to a local Drupal site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
