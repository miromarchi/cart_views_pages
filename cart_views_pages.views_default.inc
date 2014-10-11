<?php
/**
 * @file
 * cart_views_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cart_views_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cart_view_completeness';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart completeness';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'type' => 'type',
    'title' => 'title',
    'completeness' => 'completeness',
  );
  $handler->display->display_options['style_options']['default'] = 'completeness';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'completeness' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content Complete: Completeness */
  $handler->display->display_options['fields']['completeness']['id'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['table'] = 'content_complete';
  $handler->display->display_options['fields']['completeness']['field'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['next'] = 1;
  $handler->display->display_options['fields']['completeness']['display_as'] = 'bar';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_catalog' => 'cart_catalog',
    'cart_exhibition' => 'cart_exhibition',
    'cart_organization' => 'cart_organization',
  );

  /* Display: Completeness page */
  $handler = $view->new_display('page', 'Completeness page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content completeness';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Content type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content Complete: Completeness */
  $handler->display->display_options['fields']['completeness']['id'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['table'] = 'content_complete';
  $handler->display->display_options['fields']['completeness']['field'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['next'] = 1;
  $handler->display->display_options['fields']['completeness']['display_as'] = 'bar';
  $handler->display->display_options['path'] = 'editing/completeness';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Completeness';
  $handler->display->display_options['menu']['description'] = 'Completeness of exhibition contents';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-editing';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Complete pane */
  $handler = $view->new_display('panel_pane', 'Complete pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content Complete: Completeness */
  $handler->display->display_options['fields']['completeness']['id'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['table'] = 'content_complete';
  $handler->display->display_options['fields']['completeness']['field'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['label'] = '';
  $handler->display->display_options['fields']['completeness']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['completeness']['next'] = 1;
  $handler->display->display_options['fields']['completeness']['display_as'] = 'bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['cart_view_completeness'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Post date'),
    t('Completeness'),
    t('1'),
    t('bar'),
    t('Completeness page'),
    t('Content completeness'),
    t('Content type'),
    t('Title'),
    t('Complete pane'),
    t('All'),
    t('Cart panes'),
  );
  $export['cart_view_completeness'] = $view;

  $view = new view();
  $view->name = 'cart_view_curriculum';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart curriculum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: referencing from field_cart_artist */
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['id'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['field'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['ui_name'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['label'] = 'referencing from field_cart_artist';
  /* Relationship: referencing from field_cart_curator */
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['id'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['field'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['ui_name'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['label'] = 'referencing from field_cart_curator';
  /* Relationship: referencing from field_cart_sponsor */
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['id'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['field'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['ui_name'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['label'] = 'referencing from field_cart_sponsor';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['suffix'] = ' (artist)';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_cart_venue']['id'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['table'] = 'field_data_field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['field'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['field_cart_venue']['label'] = '';
  $handler->display->display_options['fields']['field_cart_venue']['element_class'] = 'venue';
  $handler->display->display_options['fields']['field_cart_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_venue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_venue']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curator in';
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['title_2']['label'] = 'Sponsor in';
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_person' => 'cart_person',
  );

  /* Display: Curriculum pane */
  $handler = $view->new_display('panel_pane', 'Curriculum pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibits';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_artist */
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['id'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['field'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['ui_name'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['label'] = 'referencing from field_cart_artist';
  /* Relationship: referencing from field_cart_curator */
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['id'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['field'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['ui_name'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['label'] = 'referencing from field_cart_curator';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_cart_venue']['id'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['table'] = 'field_data_field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['field'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['field_cart_venue']['label'] = '';
  $handler->display->display_options['fields']['field_cart_venue']['element_class'] = 'venue';
  $handler->display->display_options['fields']['field_cart_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_venue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_venue']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'cart_date_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Person: Nid',
    ),
  );

  /* Display: Artist cv count */
  $handler = $view->new_display('panel_pane', 'Artist cv count', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays only exhibits count for artists nodes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'count';
  $handler->display->display_options['header']['result']['content'] = '<span class="badge badge-artist" title="related exhibit entries">@total</span>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_artist */
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['id'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['field'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['ui_name'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['label'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Person: Nid',
    ),
  );

  /* Display: Curator Attachment */
  $handler = $view->new_display('attachment', 'Curator Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_curator */
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['id'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['field'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['ui_name'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['label'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['suffix'] = ' (curator)';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_cart_venue']['id'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['table'] = 'field_data_field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['field'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['field_cart_venue']['label'] = '';
  $handler->display->display_options['fields']['field_cart_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_venue']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'cart_date_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'panel_pane_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: venue cv */
  $handler = $view->new_display('panel_pane', 'venue cv', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hosted here';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_venue */
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['id'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['field'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['ui_name'] = 'referencing from field_cart_venue';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['label'] = 'referencing from field_cart_venue';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['relationship'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'cart_date_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Venue: Nid',
    ),
  );

  /* Display: catalog cv */
  $handler = $view->new_display('panel_pane', 'catalog cv', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Catalog of';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-lg-12';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['masonry_resizable'] = FALSE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_catalog */
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['id'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['field'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['ui_name'] = 'referencing from field_cart_catalog';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['label'] = 'referencing from field_cart_catalog';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_cover',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'cart_date_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_catalog' => 'cart_catalog',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Catalog: Nid',
    ),
  );

  /* Display: Catalog cv rendered */
  $handler = $view->new_display('panel_pane', 'Catalog cv rendered', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Catalog of';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-lg-12';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['masonry_resizable'] = FALSE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_catalog */
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['id'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['field'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['ui_name'] = 'referencing from field_cart_catalog';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['label'] = 'referencing from field_cart_catalog';
  $handler->display->display_options['relationships']['reverse_field_cart_catalog_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_cover',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['relationship'] = 'reverse_field_cart_catalog_node';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_catalog' => 'cart_catalog',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Catalog: Nid',
    ),
  );

  /* Display: Sponsor Attachment */
  $handler = $view->new_display('attachment', 'Sponsor Attachment', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_sponsor */
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['id'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['field'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['ui_name'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['label'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['suffix'] = ' (sponsor)';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_cart_venue']['id'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['table'] = 'field_data_field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['field'] = 'field_cart_venue';
  $handler->display->display_options['fields']['field_cart_venue']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['field_cart_venue']['label'] = '';
  $handler->display->display_options['fields']['field_cart_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_venue']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'cart_date_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'panel_pane_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Curator cv count */
  $handler = $view->new_display('panel_pane', 'Curator cv count', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays only exhibits count for curator nodes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'count';
  $handler->display->display_options['header']['result']['content'] = '<span class="badge" title="related exhibit entries">@total</span>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['id'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['field'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['label'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Person: Nid',
    ),
  );

  /* Display: venue cv count */
  $handler = $view->new_display('panel_pane', 'venue cv count', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Count';
  $handler->display->display_options['header']['result']['content'] = '<span class="badge badge-venue" title="exhibits hosted here">@total</span>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_venue */
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['id'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['field'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['ui_name'] = 'referencing from field_cart_venue';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['label'] = 'referencing from field_cart_venue';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Venue: Nid',
    ),
  );

  /* Display: Sponsor cv count */
  $handler = $view->new_display('panel_pane', 'Sponsor cv count', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays only exhibits count for sponsor nodes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'count';
  $handler->display->display_options['header']['result']['content'] = '<span class="badge" title="exhibits sponsored">@total</span>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_sponsor */
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['id'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['field'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['ui_name'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['label'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Person: Nid',
    ),
  );

  /* Display: Sponsor (org) cv count */
  $handler = $view->new_display('panel_pane', 'Sponsor (org) cv count', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays only exhibits count for sponsor organization nodes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'count';
  $handler->display->display_options['header']['result']['content'] = '<span class="badge" title="exhibits sponsored">@total</span>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_sponsor */
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['id'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['field'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['ui_name'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['label'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Person: Nid',
    ),
  );

  /* Display: publisher cv */
  $handler = $view->new_display('panel_pane', 'publisher cv', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Catalogs';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_publisher */
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['id'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['field'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['ui_name'] = 'referencing from field_cart_publisher';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['label'] = 'referencing from field_cart_publisher';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Year published */
  $handler->display->display_options['fields']['field_cart_year']['id'] = 'field_cart_year';
  $handler->display->display_options['fields']['field_cart_year']['table'] = 'field_data_field_cart_year';
  $handler->display->display_options['fields']['field_cart_year']['field'] = 'field_cart_year';
  $handler->display->display_options['fields']['field_cart_year']['relationship'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['fields']['field_cart_year']['label'] = '';
  $handler->display->display_options['fields']['field_cart_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Publisher: Nid',
    ),
  );

  /* Display: Publisher cv count */
  $handler = $view->new_display('panel_pane', 'Publisher cv count', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Count';
  $handler->display->display_options['header']['result']['content'] = '<span class="badge badge-publisher" title="Catalogs published">@total</span>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_publisher */
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['id'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['field'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['ui_name'] = 'referencing from field_cart_publisher';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['label'] = 'referencing from field_cart_publisher';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Publisher: Nid',
    ),
  );

  /* Display: Artists represented */
  $handler = $view->new_display('panel_pane', 'Artists represented', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Artists represented';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'exhibit clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_cart_representedby_node']['id'] = 'reverse_field_cart_representedby_node';
  $handler->display->display_options['relationships']['reverse_field_cart_representedby_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_representedby_node']['field'] = 'reverse_field_cart_representedby_node';
  $handler->display->display_options['relationships']['reverse_field_cart_representedby_node']['label'] = 'referencing from field_cart_representedby';
  $handler->display->display_options['relationships']['reverse_field_cart_representedby_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['relationship'] = 'reverse_field_cart_representedby_node';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['alter']['text'] = '[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"';
  $handler->display->display_options['fields']['field_cart_image']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_circle_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_cart_representedby_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_cart_artist',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Venue: Nid',
    ),
  );
  $translatables['cart_view_curriculum'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('referencing from field_cart_artist'),
    t('referencing from field_cart_curator'),
    t('referencing from field_cart_sponsor'),
    t('[field_cart_image]
[field_cart_image-fid]
"<img src="[field_cart_image-fid]" class="img-responsive img-rounded" />"'),
    t('[title]'),
    t(' (artist)'),
    t('Curator in'),
    t('Sponsor in'),
    t('All'),
    t('Curriculum pane'),
    t('Exhibits'),
    t('Cart panes'),
    t('Artist cv count'),
    t('Displays only exhibits count for artists nodes'),
    t('count'),
    t('<span class="badge badge-artist" title="related exhibit entries">@total</span>'),
    t('Curator Attachment'),
    t(' (curator)'),
    t('venue cv'),
    t('Hosted here'),
    t('referencing from field_cart_venue'),
    t('catalog cv'),
    t('Catalog of'),
    t('referencing from field_cart_catalog'),
    t('Catalog cv rendered'),
    t('Sponsor Attachment'),
    t(' (sponsor)'),
    t('Curator cv count'),
    t('Displays only exhibits count for curator nodes'),
    t('<span class="badge" title="related exhibit entries">@total</span>'),
    t('venue cv count'),
    t('Count'),
    t('<span class="badge badge-venue" title="exhibits hosted here">@total</span>'),
    t('Sponsor cv count'),
    t('Displays only exhibits count for sponsor nodes'),
    t('<span class="badge" title="exhibits sponsored">@total</span>'),
    t('Sponsor (org) cv count'),
    t('Displays only exhibits count for sponsor organization nodes'),
    t('publisher cv'),
    t('Catalogs'),
    t('referencing from field_cart_publisher'),
    t('Publisher cv count'),
    t('<span class="badge badge-publisher" title="Catalogs published">@total</span>'),
    t('Artists represented'),
    t('referencing from field_cart_representedby'),
  );
  $export['cart_view_curriculum'] = $view;

  $view = new view();
  $view->name = 'cart_view_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'text-center';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nid' => 'nid',
    'field_cart_links_web' => 'field_cart_links_web',
    'field_cart_blog_link' => 'field_cart_blog_link',
    'field_cart_rss_link' => 'field_cart_rss_link',
    'field_cart_facebook_link' => 'field_cart_facebook_link',
    'field_cart_twitter_link' => 'field_cart_twitter_link',
    'field_cart_google_link' => 'field_cart_google_link',
    'field_cart_linkedin_link' => 'field_cart_linkedin_link',
    'field_cart_youtube_link' => 'field_cart_youtube_link',
    'field_cart_instagram_link' => 'field_cart_instagram_link',
    'field_cart_flickr_link' => 'field_cart_flickr_link',
    'field_cart_wikipedia_link' => 'field_cart_wikipedia_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Website link */
  $handler->display->display_options['fields']['field_cart_links_web']['id'] = 'field_cart_links_web';
  $handler->display->display_options['fields']['field_cart_links_web']['table'] = 'field_data_field_cart_links_web';
  $handler->display->display_options['fields']['field_cart_links_web']['field'] = 'field_cart_links_web';
  $handler->display->display_options['fields']['field_cart_links_web']['label'] = '';
  $handler->display->display_options['fields']['field_cart_links_web']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_links_web']['alter']['text'] = '<a href="[field_cart_links_web-url]" target="_blank" title="Main website - [field_cart_links_web-title]"><i class="fa fa-external-link-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_links_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_links_web']['click_sort_column'] = 'url';
  /* Field: Content: Blog link */
  $handler->display->display_options['fields']['field_cart_blog_link']['id'] = 'field_cart_blog_link';
  $handler->display->display_options['fields']['field_cart_blog_link']['table'] = 'field_data_field_cart_blog_link';
  $handler->display->display_options['fields']['field_cart_blog_link']['field'] = 'field_cart_blog_link';
  $handler->display->display_options['fields']['field_cart_blog_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_blog_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_blog_link']['alter']['text'] = '<a href="[field_cart_blog_link-url]" target="_blank" title="Blog - [field_cart_blog_link-title]"><i class="fa fa-wordpress fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_blog_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_blog_link']['click_sort_column'] = 'url';
  /* Field: Content: RSS link */
  $handler->display->display_options['fields']['field_cart_rss_link']['id'] = 'field_cart_rss_link';
  $handler->display->display_options['fields']['field_cart_rss_link']['table'] = 'field_data_field_cart_rss_link';
  $handler->display->display_options['fields']['field_cart_rss_link']['field'] = 'field_cart_rss_link';
  $handler->display->display_options['fields']['field_cart_rss_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_rss_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_rss_link']['alter']['text'] = '<a href="[field_cart_rss_link-url]" target="_blank" title="RSS feed - [field_cart_rss_link-title]"><i class="fa fa-rss-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_rss_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_rss_link']['click_sort_column'] = 'url';
  /* Field: Content: Wikipedia link */
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['id'] = 'field_cart_wikipedia_link';
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['table'] = 'field_data_field_cart_wikipedia_link';
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['field'] = 'field_cart_wikipedia_link';
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['alter']['text'] = '<a href="[field_cart_wikipedia_link-url]" target="_blank" title="Wikipedia page - [field_cart_wikipedia_link-title]"><span class="fa-2x">W</i></a>';
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_wikipedia_link']['click_sort_column'] = 'url';
  /* Field: Content: Facebook link */
  $handler->display->display_options['fields']['field_cart_facebook_link']['id'] = 'field_cart_facebook_link';
  $handler->display->display_options['fields']['field_cart_facebook_link']['table'] = 'field_data_field_cart_facebook_link';
  $handler->display->display_options['fields']['field_cart_facebook_link']['field'] = 'field_cart_facebook_link';
  $handler->display->display_options['fields']['field_cart_facebook_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_facebook_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_facebook_link']['alter']['text'] = '<a href="[field_cart_facebook_link-url]" target="_blank" title="[field_cart_facebook_link-title]"><i class="fa fa-facebook-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_facebook_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_facebook_link']['click_sort_column'] = 'url';
  /* Field: Content: Twitter link */
  $handler->display->display_options['fields']['field_cart_twitter_link']['id'] = 'field_cart_twitter_link';
  $handler->display->display_options['fields']['field_cart_twitter_link']['table'] = 'field_data_field_cart_twitter_link';
  $handler->display->display_options['fields']['field_cart_twitter_link']['field'] = 'field_cart_twitter_link';
  $handler->display->display_options['fields']['field_cart_twitter_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_twitter_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_twitter_link']['alter']['text'] = '<a href="[field_cart_twitter_link-url]" target="_blank" title="[field_cart_twitter_link-title]"><i class="fa fa-twitter-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_twitter_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_twitter_link']['click_sort_column'] = 'url';
  /* Field: Content: Google+ link */
  $handler->display->display_options['fields']['field_cart_google_link']['id'] = 'field_cart_google_link';
  $handler->display->display_options['fields']['field_cart_google_link']['table'] = 'field_data_field_cart_google_link';
  $handler->display->display_options['fields']['field_cart_google_link']['field'] = 'field_cart_google_link';
  $handler->display->display_options['fields']['field_cart_google_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_google_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_google_link']['alter']['text'] = '<a href="[field_cart_google_link-url]" target="_blank" title="[field_cart_google_link-title]"><i class="fa fa-google-plus-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_google_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_google_link']['click_sort_column'] = 'url';
  /* Field: Content: Linkedin link */
  $handler->display->display_options['fields']['field_cart_linkedin_link']['id'] = 'field_cart_linkedin_link';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['table'] = 'field_data_field_cart_linkedin_link';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['field'] = 'field_cart_linkedin_link';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_linkedin_link']['alter']['text'] = '<a href="[field_cart_linkedin_link-url]" target="_blank" title="[field_cart_linkedin_link-title]"><i class="fa fa-linkedin-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_linkedin_link']['click_sort_column'] = 'url';
  /* Field: Content: Youtube link */
  $handler->display->display_options['fields']['field_cart_youtube_link']['id'] = 'field_cart_youtube_link';
  $handler->display->display_options['fields']['field_cart_youtube_link']['table'] = 'field_data_field_cart_youtube_link';
  $handler->display->display_options['fields']['field_cart_youtube_link']['field'] = 'field_cart_youtube_link';
  $handler->display->display_options['fields']['field_cart_youtube_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_youtube_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_youtube_link']['alter']['text'] = '<a href="[field_cart_youtube_link-url]" target="_blank" title="[field_cart_youtube_link-title]"><i class="fa fa-youtube fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_youtube_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_youtube_link']['click_sort_column'] = 'url';
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_cart_instagram_link']['id'] = 'field_cart_instagram_link';
  $handler->display->display_options['fields']['field_cart_instagram_link']['table'] = 'field_data_field_cart_instagram_link';
  $handler->display->display_options['fields']['field_cart_instagram_link']['field'] = 'field_cart_instagram_link';
  $handler->display->display_options['fields']['field_cart_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_instagram_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_instagram_link']['alter']['text'] = '<a href="[field_cart_instagram_link-url]" target="_blank" title="[field_cart_instagram_link-title]"><i class="fa fa-instagram fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_instagram_link']['click_sort_column'] = 'url';
  /* Field: Content: Flickr link */
  $handler->display->display_options['fields']['field_cart_flickr_link']['id'] = 'field_cart_flickr_link';
  $handler->display->display_options['fields']['field_cart_flickr_link']['table'] = 'field_data_field_cart_flickr_link';
  $handler->display->display_options['fields']['field_cart_flickr_link']['field'] = 'field_cart_flickr_link';
  $handler->display->display_options['fields']['field_cart_flickr_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_flickr_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_flickr_link']['alter']['text'] = '<a href="[field_cart_flickr_link-url]" target="_blank" title="[field_cart_flickr_link-title]"><i class="fa fa-flickr fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_flickr_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_flickr_link']['click_sort_column'] = 'url';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Image gallery link */
  $handler = $view->new_display('panel_pane', 'Image gallery link', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nid' => 'nid',
    'field_cart_links_web' => 'field_cart_links_web',
    'field_cart_blog_link' => 'field_cart_blog_link',
    'field_cart_rss_link' => 'field_cart_rss_link',
    'field_cart_facebook_link' => 'field_cart_facebook_link',
    'field_cart_twitter_link' => 'field_cart_twitter_link',
    'field_cart_google_link' => 'field_cart_google_link',
    'field_cart_linkedin_link' => 'field_cart_linkedin_link',
    'field_cart_youtube_link' => 'field_cart_youtube_link',
    'field_cart_instagram_link' => 'field_cart_instagram_link',
    'field_cart_flickr_link' => 'field_cart_flickr_link',
    'field_cart_imagegallery_link' => 'field_cart_imagegallery_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image gallery link */
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['id'] = 'field_cart_imagegallery_link';
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['table'] = 'field_data_field_cart_imagegallery_link';
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['field'] = 'field_cart_imagegallery_link';
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['alter']['text'] = '<strong>Main image gallery:</strong> <a href="[field_cart_imagegallery_link-url]" target="_blank" title="Main image gallery - [field_cart_imagegallery_link-title]"><i class="fa fa-photo fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_imagegallery_link']['click_sort_column'] = 'url';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['cart_view_links'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_cart_links_web-url]" target="_blank" title="Main website - [field_cart_links_web-title]"><i class="fa fa-external-link-square fa-2x"></i></a>'),
    t('<a href="[field_cart_blog_link-url]" target="_blank" title="Blog - [field_cart_blog_link-title]"><i class="fa fa-wordpress fa-2x"></i></a>'),
    t('<a href="[field_cart_rss_link-url]" target="_blank" title="RSS feed - [field_cart_rss_link-title]"><i class="fa fa-rss-square fa-2x"></i></a>'),
    t('<a href="[field_cart_wikipedia_link-url]" target="_blank" title="Wikipedia page - [field_cart_wikipedia_link-title]"><span class="fa-2x">W</i></a>'),
    t('<a href="[field_cart_facebook_link-url]" target="_blank" title="[field_cart_facebook_link-title]"><i class="fa fa-facebook-square fa-2x"></i></a>'),
    t('<a href="[field_cart_twitter_link-url]" target="_blank" title="[field_cart_twitter_link-title]"><i class="fa fa-twitter-square fa-2x"></i></a>'),
    t('<a href="[field_cart_google_link-url]" target="_blank" title="[field_cart_google_link-title]"><i class="fa fa-google-plus-square fa-2x"></i></a>'),
    t('<a href="[field_cart_linkedin_link-url]" target="_blank" title="[field_cart_linkedin_link-title]"><i class="fa fa-linkedin-square fa-2x"></i></a>'),
    t('<a href="[field_cart_youtube_link-url]" target="_blank" title="[field_cart_youtube_link-title]"><i class="fa fa-youtube fa-2x"></i></a>'),
    t('<a href="[field_cart_instagram_link-url]" target="_blank" title="[field_cart_instagram_link-title]"><i class="fa fa-instagram fa-2x"></i></a>'),
    t('<a href="[field_cart_flickr_link-url]" target="_blank" title="[field_cart_flickr_link-title]"><i class="fa fa-flickr fa-2x"></i></a>'),
    t('All'),
    t('Content pane'),
    t('Cart panes'),
    t('Image gallery link'),
    t('<strong>Main image gallery:</strong> <a href="[field_cart_imagegallery_link-url]" target="_blank" title="Main image gallery - [field_cart_imagegallery_link-title]"><i class="fa fa-photo fa-2x"></i></a>'),
  );
  $export['cart_view_links'] = $view;

  $view = new view();
  $view->name = 'cart_view_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart view lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'no results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="alert alert-info alert-dismissible" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
  No results were returned by the query. Please <strong>reset the filter</strong> or try again with different filtering options.
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: referencing from field_cart_artist */
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['id'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['field'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['ui_name'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['label'] = 'referencing from field_cart_artist';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_circle_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_person' => 'cart_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search artist';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Filter by exhibit';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Curators */
  $handler = $view->new_display('page', 'Curators', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curators';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'cart_vmode_curator';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_curator */
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['id'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['field'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['ui_name'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['label'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_person' => 'cart_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search curator';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Filter by ehibit';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'directory/curators';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Curators';
  $handler->display->display_options['menu']['description'] = 'Curators list';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Artists */
  $handler = $view->new_display('page', 'Artists', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Artists';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3 artist';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_artist */
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['id'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['field'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['ui_name'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['label'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_person' => 'cart_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search artist';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Based (field_cart_based) */
  $handler->display->display_options['filters']['field_cart_based_value']['id'] = 'field_cart_based_value';
  $handler->display->display_options['filters']['field_cart_based_value']['table'] = 'field_data_field_cart_based';
  $handler->display->display_options['filters']['field_cart_based_value']['field'] = 'field_cart_based_value';
  $handler->display->display_options['filters']['field_cart_based_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_cart_based_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cart_based_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_based_value']['expose']['operator_id'] = 'field_cart_based_value_op';
  $handler->display->display_options['filters']['field_cart_based_value']['expose']['label'] = 'Based (location)';
  $handler->display->display_options['filters']['field_cart_based_value']['expose']['operator'] = 'field_cart_based_value_op';
  $handler->display->display_options['filters']['field_cart_based_value']['expose']['identifier'] = 'field_cart_based_value';
  $handler->display->display_options['filters']['field_cart_based_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Filter by exhibit';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'directory/artists';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Artists';
  $handler->display->display_options['menu']['description'] = 'Artists list';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Lists';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Venues */
  $handler = $view->new_display('page', 'Venues', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Venues';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_venue */
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['id'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['field'] = 'reverse_field_cart_venue_node';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['ui_name'] = 'referencing from field_cart_venue';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['label'] = 'referencing from field_cart_venue';
  $handler->display->display_options['relationships']['reverse_field_cart_venue_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  /* Filter criterion: Content: Location (field_cart_location) */
  $handler->display->display_options['filters']['field_cart_location_value']['id'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['table'] = 'field_data_field_cart_location';
  $handler->display->display_options['filters']['field_cart_location_value']['field'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_cart_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator_id'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['label'] = 'Location (address)';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['identifier'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Venue type (field_cart_venue_type) */
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['id'] = 'field_cart_venue_type_tid';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['table'] = 'field_data_field_cart_venue_type';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['field'] = 'field_cart_venue_type_tid';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['expose']['operator_id'] = 'field_cart_venue_type_tid_op';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['expose']['label'] = 'Venue type';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['expose']['operator'] = 'field_cart_venue_type_tid_op';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['expose']['identifier'] = 'field_cart_venue_type_tid';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cart_venue_type_tid']['vocabulary'] = 'cart_venue_types';
  $handler->display->display_options['path'] = 'directory/venues';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Venues';
  $handler->display->display_options['menu']['description'] = 'Venues list';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Catalogs */
  $handler = $view->new_display('page', 'Catalogs', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Catalogs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referenced from field_cart_editor */
  $handler->display->display_options['relationships']['field_cart_editor_target_id']['id'] = 'field_cart_editor_target_id';
  $handler->display->display_options['relationships']['field_cart_editor_target_id']['table'] = 'field_data_field_cart_editor';
  $handler->display->display_options['relationships']['field_cart_editor_target_id']['field'] = 'field_cart_editor_target_id';
  $handler->display->display_options['relationships']['field_cart_editor_target_id']['ui_name'] = 'referenced from field_cart_editor';
  $handler->display->display_options['relationships']['field_cart_editor_target_id']['label'] = 'referenced from field_cart_editor';
  /* Relationship: referenced from field_cart_publisher */
  $handler->display->display_options['relationships']['field_cart_publisher_target_id']['id'] = 'field_cart_publisher_target_id';
  $handler->display->display_options['relationships']['field_cart_publisher_target_id']['table'] = 'field_data_field_cart_publisher';
  $handler->display->display_options['relationships']['field_cart_publisher_target_id']['field'] = 'field_cart_publisher_target_id';
  $handler->display->display_options['relationships']['field_cart_publisher_target_id']['ui_name'] = 'referenced from field_cart_publisher';
  $handler->display->display_options['relationships']['field_cart_publisher_target_id']['label'] = 'referenced from field_cart_publisher';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_catalog' => 'cart_catalog',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_cart_editor_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Edited by';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_cart_publisher_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Year published (field_cart_year) */
  $handler->display->display_options['filters']['field_cart_year_tid']['id'] = 'field_cart_year_tid';
  $handler->display->display_options['filters']['field_cart_year_tid']['table'] = 'field_data_field_cart_year';
  $handler->display->display_options['filters']['field_cart_year_tid']['field'] = 'field_cart_year_tid';
  $handler->display->display_options['filters']['field_cart_year_tid']['value'] = '';
  $handler->display->display_options['filters']['field_cart_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_year_tid']['expose']['operator_id'] = 'field_cart_year_tid_op';
  $handler->display->display_options['filters']['field_cart_year_tid']['expose']['label'] = 'Year published';
  $handler->display->display_options['filters']['field_cart_year_tid']['expose']['operator'] = 'field_cart_year_tid_op';
  $handler->display->display_options['filters']['field_cart_year_tid']['expose']['identifier'] = 'field_cart_year_tid';
  $handler->display->display_options['filters']['field_cart_year_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_cart_year_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_cart_year_tid']['vocabulary'] = 'cart_years';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'directory/catalogs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Catalogs';
  $handler->display->display_options['menu']['description'] = 'Catalogs list';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Exhibits */
  $handler = $view->new_display('page', 'Exhibits', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referenced from field_cart_artist */
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['id'] = 'field_cart_artist_target_id';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['table'] = 'field_data_field_cart_artist';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['field'] = 'field_cart_artist_target_id';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['ui_name'] = 'referenced from field_cart_artist';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['label'] = 'referenced from field_cart_artist';
  /* Relationship: referenced from field_cart_curator */
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['id'] = 'field_cart_curator_target_id';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['table'] = 'field_data_field_cart_curator';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['field'] = 'field_cart_curator_target_id';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['ui_name'] = 'referenced from field_cart_curator';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['label'] = 'referenced from field_cart_curator';
  /* Relationship: referenced from field_cart_venue */
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['id'] = 'field_cart_venue_target_id';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['table'] = 'field_data_field_cart_venue';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['field'] = 'field_cart_venue_target_id';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['ui_name'] = 'referenced from field_cart_venue';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['label'] = 'referenced from field_cart_venue';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_exhibition' => 'cart_exhibition',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search exhibit';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_cart_artist_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Artist';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_cart_curator_target_id';
  $handler->display->display_options['filters']['title_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Curator/s';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['filters']['title_3']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_3']['expose']['operator_id'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['label'] = 'Venue';
  $handler->display->display_options['filters']['title_3']['expose']['operator'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['identifier'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Location (field_cart_location) */
  $handler->display->display_options['filters']['field_cart_location_value']['id'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['table'] = 'field_data_field_cart_location';
  $handler->display->display_options['filters']['field_cart_location_value']['field'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['filters']['field_cart_location_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_cart_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator_id'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['label'] = 'Location (address)';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['identifier'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'directory/exhibits';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Exhibits';
  $handler->display->display_options['menu']['description'] = 'Exhibits list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Directory';
  $handler->display->display_options['tab_options']['description'] = 'Exhibits, Artists, Curators, Venues, Catalogs';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Sponsors */
  $handler = $view->new_display('page', 'Sponsors', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curators';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'cart_vmode_sponsor';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_sponsor */
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['id'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['field'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['ui_name'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['label'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
    'cart_person' => 'cart_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search sponsor';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Filter by exhibit';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'directory/sponsors';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sporsors';
  $handler->display->display_options['menu']['description'] = 'Sponsors list';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Publishers */
  $handler = $view->new_display('page', 'Publishers', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publishers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_publisher */
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['id'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['field'] = 'reverse_field_cart_publisher_node';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['ui_name'] = 'referencing from field_cart_publisher';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['label'] = 'referencing from field_cart_publisher';
  $handler->display->display_options['relationships']['reverse_field_cart_publisher_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cart_organization' => 'cart_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search publisher';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Location (field_cart_location) */
  $handler->display->display_options['filters']['field_cart_location_value']['id'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['table'] = 'field_data_field_cart_location';
  $handler->display->display_options['filters']['field_cart_location_value']['field'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_cart_location_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cart_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator_id'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['label'] = 'Location (address)';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['identifier'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'directory/publishers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Publishers';
  $handler->display->display_options['menu']['description'] = 'Publishers list';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['cart_view_lists'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('no results'),
    t('<div class="alert alert-info alert-dismissible" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
  No results were returned by the query. Please <strong>reset the filter</strong> or try again with different filtering options.
</div>'),
    t('referencing from field_cart_artist'),
    t('Search artist'),
    t('Filter by exhibit'),
    t('Curators'),
    t('referencing from field_cart_curator'),
    t('Search curator'),
    t('Filter by ehibit'),
    t('Artists'),
    t('Based (location)'),
    t('Venues'),
    t('referencing from field_cart_venue'),
    t('Location (address)'),
    t('Venue type'),
    t('Catalogs'),
    t('referenced from field_cart_editor'),
    t('referenced from field_cart_publisher'),
    t('Edited by'),
    t('Publisher'),
    t('Year published'),
    t('Title'),
    t('Exhibits'),
    t('Exhibitions'),
    t('referenced from field_cart_artist'),
    t('referenced from field_cart_curator'),
    t('referenced from field_cart_venue'),
    t('Search exhibit'),
    t('Artist'),
    t('Curator/s'),
    t('Venue'),
    t('Sponsors'),
    t('referencing from field_cart_sponsor'),
    t('Search sponsor'),
    t('Publishers'),
    t('referencing from field_cart_publisher'),
    t('Search publisher'),
  );
  $export['cart_view_lists'] = $view;

  $view = new view();
  $view->name = 'cart_view_taxonomy';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart taxonomy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: pane */
  $handler = $view->new_display('panel_pane', 'pane', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['cart_view_taxonomy'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('%1'),
    t('Page'),
    t('Feed'),
    t('pane'),
    t('Cart panes'),
  );
  $export['cart_view_taxonomy'] = $view;

  return $export;
}
