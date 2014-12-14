<?php
/**
 * @file
 * otc_flight.features.inc
 */

/**
 * Implements hook_views_api().
 */
function otc_flight_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function otc_flight_node_info() {
  $items = array(
    'flight_agencies' => array(
      'name' => t('Flight Agencies'),
      'base' => 'node_content',
      'description' => t('All about the flight agencies and their flight and aircraft. '),
      'has_title' => '1',
      'title_label' => t('Flight Agency'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
