<?php
/**
 * @file
 * cart_views_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cart_views_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_editing-tools:editing
  $menu_links['user-menu_editing-tools:editing'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'editing',
    'router_path' => 'editing',
    'link_title' => 'Editing tools',
    'options' => array(
      'identifier' => 'user-menu_editing-tools:editing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editing tools');


  return $menu_links;
}
