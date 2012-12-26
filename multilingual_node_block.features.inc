<?php
/**
 * @file
 * multilingual_node_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function multilingual_node_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function multilingual_node_block_node_info() {
  $items = array(
    'block_node' => array(
      'name' => t('Block-Node'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
