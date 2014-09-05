<?php
/**
 * @file
 * cart_views_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cart_views_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart_editing';
  $page->task = 'page';
  $page->admin_title = 'Cart editing';
  $page->admin_description = '';
  $page->path = 'editing';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Editing tools',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cart_editing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cart_editing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'editing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'unico';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82f5892b-e42c-4079-85d5-ff3842f4179e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1f871f1-2a8b-4f5e-906f-542a317644ae';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-editing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c1f871f1-2a8b-4f5e-906f-542a317644ae';
    $display->content['new-c1f871f1-2a8b-4f5e-906f-542a317644ae'] = $pane;
    $display->panels['contentmain'][0] = 'new-c1f871f1-2a8b-4f5e-906f-542a317644ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart_editing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart_home';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cart_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cart_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'multi';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
      'four' => NULL,
    ),
    'middle' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '376b0fed-fc18-485d-a31b-70a1a434c2c9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b7295131-8e22-47ac-97fc-8f0059d6cf12';
    $pane->panel = 'four';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What',
      'title' => '',
      'body' => 'What',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wwww',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7295131-8e22-47ac-97fc-8f0059d6cf12';
    $display->content['new-b7295131-8e22-47ac-97fc-8f0059d6cf12'] = $pane;
    $display->panels['four'][0] = 'new-b7295131-8e22-47ac-97fc-8f0059d6cf12';
    $pane = new stdClass();
    $pane->pid = 'new-93f4abed-235a-409e-9a0e-a434acec8e74';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Site-title',
      'title' => '',
      'body' => '<h1 class="site-title text-center">Cuban art ex<strong>HUB</strong>bitions</h1>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'jumbotron',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '93f4abed-235a-409e-9a0e-a434acec8e74';
    $display->content['new-93f4abed-235a-409e-9a0e-a434acec8e74'] = $pane;
    $display->panels['header'][0] = 'new-93f4abed-235a-409e-9a0e-a434acec8e74';
    $pane = new stdClass();
    $pane->pid = 'new-2c9d97f9-811c-438a-a284-a212d3fac184';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Map',
      'title' => '',
      'body' => 'Map',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c9d97f9-811c-438a-a284-a212d3fac184';
    $display->content['new-2c9d97f9-811c-438a-a284-a212d3fac184'] = $pane;
    $display->panels['left'][0] = 'new-2c9d97f9-811c-438a-a284-a212d3fac184';
    $pane = new stdClass();
    $pane->pid = 'new-2c363b09-c326-4c73-a660-a093363e6207';
    $pane->panel = 'one';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Where',
      'title' => '',
      'body' => 'Where',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wwww',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c363b09-c326-4c73-a660-a093363e6207';
    $display->content['new-2c363b09-c326-4c73-a660-a093363e6207'] = $pane;
    $display->panels['one'][0] = 'new-2c363b09-c326-4c73-a660-a093363e6207';
    $pane = new stdClass();
    $pane->pid = 'new-429a40ea-d09f-4f56-b35e-211d86a90946';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '11',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '429a40ea-d09f-4f56-b35e-211d86a90946';
    $display->content['new-429a40ea-d09f-4f56-b35e-211d86a90946'] = $pane;
    $display->panels['right'][0] = 'new-429a40ea-d09f-4f56-b35e-211d86a90946';
    $pane = new stdClass();
    $pane->pid = 'new-2cfc2c53-2b52-4770-872a-4324ec97a3b5';
    $pane->panel = 'three';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Who',
      'title' => '',
      'body' => 'Who',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wwww',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2cfc2c53-2b52-4770-872a-4324ec97a3b5';
    $display->content['new-2cfc2c53-2b52-4770-872a-4324ec97a3b5'] = $pane;
    $display->panels['three'][0] = 'new-2cfc2c53-2b52-4770-872a-4324ec97a3b5';
    $pane = new stdClass();
    $pane->pid = 'new-84a3ca9b-da64-409d-bf06-81bc18a1adda';
    $pane->panel = 'two';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'When',
      'title' => '',
      'body' => 'When',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wwww',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84a3ca9b-da64-409d-bf06-81bc18a1adda';
    $display->content['new-84a3ca9b-da64-409d-bf06-81bc18a1adda'] = $pane;
    $display->panels['two'][0] = 'new-84a3ca9b-da64-409d-bf06-81bc18a1adda';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-429a40ea-d09f-4f56-b35e-211d86a90946';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart_home'] = $page;

  return $pages;

}
