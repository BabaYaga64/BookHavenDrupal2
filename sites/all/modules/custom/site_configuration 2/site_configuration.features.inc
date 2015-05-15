<?php
/**
 * @file
 * site_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function site_configuration_node_info() {
  $items = array(
    'site_configuration' => array(
      'name' => t('Site Configuration'),
      'base' => 'node_content',
      'description' => t('Tracks the strongarm variables site_name, site_slogan, theme_default and site_frontpage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
