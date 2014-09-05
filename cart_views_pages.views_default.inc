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
  $handler->display->display_options['title'] = 'Exhibits completeness';
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
  $export['cart_view_completeness'] = $view;

  $view = new view();
  $view->name = 'cart_view_curriculum';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart view curriculum';
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
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image_1']['id'] = 'field_cart_image_1';
  $handler->display->display_options['fields']['field_cart_image_1']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image_1']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image_1']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['field_cart_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image_1']['element_class'] = 'cv-exhibit';
  $handler->display->display_options['fields']['field_cart_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image_1']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['title_1']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title_1']['alter']['suffix'] = ' (curator)';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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

  /* Display: Artist cv minimal */
  $handler = $view->new_display('panel_pane', 'Artist cv minimal', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibits';
  $handler->display->display_options['display_description'] = 'This displays only exhibits the person has been an artist for.';
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
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_icon',
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

  /* Display: Sponsor Attachment */
  $handler = $view->new_display('attachment', 'Sponsor Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_sponsor */
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['id'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['field'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['ui_name'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['relationships']['reverse_field_cart_sponsor_node']['label'] = 'referencing from field_cart_sponsor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_cart_sponsor_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['title_2']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title_2']['alter']['suffix'] = ' (sponsor)';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
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
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'panel_pane_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Exhibits per venue pane */
  $handler = $view->new_display('panel_pane', 'Exhibits per venue pane', 'panel_pane_3');
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

  /* Display: Exhibit of the Catalog fields pane */
  $handler = $view->new_display('panel_pane', 'Exhibit of the Catalog fields pane', 'panel_pane_4');
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

  /* Display: Exhibit of the Catalog rendered pane */
  $handler = $view->new_display('panel_pane', 'Exhibit of the Catalog rendered pane', 'panel_pane_5');
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
    'field_cart_facebook_link' => 'field_cart_facebook_link',
    'field_cart_twitter_link' => 'field_cart_twitter_link',
    'field_cart_google_link' => 'field_cart_google_link',
    'field_cart_instagram_link' => 'field_cart_instagram_link',
    'field_cart_flickr_link' => 'field_cart_flickr_link',
    'field_cart_youtube_link' => 'field_cart_youtube_link',
    'field_cart_rss_link' => 'field_cart_rss_link',
    'field_cart_linkedin_link' => 'field_cart_linkedin_link',
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
  $handler->display->display_options['fields']['field_cart_links_web']['alter']['text'] = '<a href="[field_cart_links_web-url]" target="_blank" title="[field_cart_links_web-title]"><i class="fa fa-external-link-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_links_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_links_web']['click_sort_column'] = 'url';
  /* Field: Content: Blog link */
  $handler->display->display_options['fields']['field_cart_blog_link']['id'] = 'field_cart_blog_link';
  $handler->display->display_options['fields']['field_cart_blog_link']['table'] = 'field_data_field_cart_blog_link';
  $handler->display->display_options['fields']['field_cart_blog_link']['field'] = 'field_cart_blog_link';
  $handler->display->display_options['fields']['field_cart_blog_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_blog_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_blog_link']['alter']['text'] = '<a href="[field_cart_blog_link-url]" target="_blank" title="[field_cart_blog_link-title]"><i class="fa fa-newspaper-o fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_blog_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_blog_link']['click_sort_column'] = 'url';
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
  /* Field: Content: Youtube link */
  $handler->display->display_options['fields']['field_cart_youtube_link']['id'] = 'field_cart_youtube_link';
  $handler->display->display_options['fields']['field_cart_youtube_link']['table'] = 'field_data_field_cart_youtube_link';
  $handler->display->display_options['fields']['field_cart_youtube_link']['field'] = 'field_cart_youtube_link';
  $handler->display->display_options['fields']['field_cart_youtube_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_youtube_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_youtube_link']['alter']['text'] = '<a href="[field_cart_youtube_link-url]" target="_blank" title="[field_cart_youtube_link-title]"><i class="fa fa-youtube fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_youtube_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_youtube_link']['click_sort_column'] = 'url';
  /* Field: Content: Linkedin link */
  $handler->display->display_options['fields']['field_cart_linkedin_link']['id'] = 'field_cart_linkedin_link';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['table'] = 'field_data_field_cart_linkedin_link';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['field'] = 'field_cart_linkedin_link';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_linkedin_link']['alter']['text'] = '<a href="[field_cart_linkedin_link-url]" target="_blank" title="[field_cart_linkedin_link-title]"><i class="fa fa-linkedin-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_linkedin_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_linkedin_link']['click_sort_column'] = 'url';
  /* Field: Content: RSS link */
  $handler->display->display_options['fields']['field_cart_rss_link']['id'] = 'field_cart_rss_link';
  $handler->display->display_options['fields']['field_cart_rss_link']['table'] = 'field_data_field_cart_rss_link';
  $handler->display->display_options['fields']['field_cart_rss_link']['field'] = 'field_cart_rss_link';
  $handler->display->display_options['fields']['field_cart_rss_link']['label'] = '';
  $handler->display->display_options['fields']['field_cart_rss_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cart_rss_link']['alter']['text'] = '<a href="[field_cart_rss_link-url]" target="_blank" title="[field_cart_rss_link-title]"><i class="fa fa-rss-square fa-2x"></i></a>';
  $handler->display->display_options['fields']['field_cart_rss_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_rss_link']['click_sort_column'] = 'url';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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

  /* Display: Artists Page */
  $handler = $view->new_display('page', 'Artists Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Artists';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix artist';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_artist */
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['id'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['field'] = 'reverse_field_cart_artist_node';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['ui_name'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['label'] = 'referencing from field_cart_artist';
  $handler->display->display_options['relationships']['reverse_field_cart_artist_node']['required'] = TRUE;
  $handler->display->display_options['path'] = 'artists';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Artistsold';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Curators Page */
  $handler = $view->new_display('page', 'Curators Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curators';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: referencing from field_cart_curator */
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['id'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['field'] = 'reverse_field_cart_curator_node';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['ui_name'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['label'] = 'referencing from field_cart_curator';
  $handler->display->display_options['relationships']['reverse_field_cart_curator_node']['required'] = TRUE;
  $handler->display->display_options['path'] = 'curators';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curators';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Artists Page */
  $handler = $view->new_display('page', 'Artists Page', 'page_3');
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
  $handler->display->display_options['path'] = 'artists';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Artists';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Venues */
  $handler = $view->new_display('page', 'Venues', 'page_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  $handler->display->display_options['path'] = 'venues';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Venues';
  $handler->display->display_options['menu']['description'] = 'Venues list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Catalogs */
  $handler = $view->new_display('page', 'Catalogs', 'page_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  $handler->display->display_options['path'] = 'catalogs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Catalogs';
  $handler->display->display_options['menu']['description'] = 'All catalogs list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cart_view_lists'] = $view;

  return $export;
}
