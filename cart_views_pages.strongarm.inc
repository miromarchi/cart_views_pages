<?php
/**
 * @file
 * cart_views_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cart_views_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'cart_vmode_minimal' => array(
        'label' => 'Cart minimal',
        'custom settings' => 1,
      ),
      'cart_vmode_curator' => array(
        'label' => 'Cart curator',
        'custom settings' => 1,
      ),
      'cart_vmode_sponsor' => array(
        'label' => 'Cart sponsor',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
