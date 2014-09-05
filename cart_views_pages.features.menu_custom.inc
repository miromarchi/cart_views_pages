<?php
/**
 * @file
 * cart_views_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cart_views_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-editing.
  $menus['menu-editing'] = array(
    'menu_name' => 'menu-editing',
    'title' => 'Editing tools',
    'description' => 'Editing tools',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editing tools');


  return $menus;
}
