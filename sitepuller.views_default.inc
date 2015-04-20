<?php
/**
 * @file
 * sitepuller.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sitepuller_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sitepuller_tasks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SItepuller Tasks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sitepuller Tasks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sitepuller_task_remo_site_target_id']['id'] = 'field_sitepuller_task_remo_site_target_id';
  $handler->display->display_options['relationships']['field_sitepuller_task_remo_site_target_id']['table'] = 'field_data_field_sitepuller_task_remo_site';
  $handler->display->display_options['relationships']['field_sitepuller_task_remo_site_target_id']['field'] = 'field_sitepuller_task_remo_site_target_id';
  $handler->display->display_options['relationships']['field_sitepuller_task_remo_site_target_id']['label'] = 'remote site';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sitepuller_task_local_site_target_id']['id'] = 'field_sitepuller_task_local_site_target_id';
  $handler->display->display_options['relationships']['field_sitepuller_task_local_site_target_id']['table'] = 'field_data_field_sitepuller_task_local_site';
  $handler->display->display_options['relationships']['field_sitepuller_task_local_site_target_id']['field'] = 'field_sitepuller_task_local_site_target_id';
  $handler->display->display_options['relationships']['field_sitepuller_task_local_site_target_id']['label'] = 'local site';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Run Task';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Create Pull Script';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'sitepuller_tools/[nid]/run';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'sitepuller_task' => 'sitepuller_task',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sitepuller-tasks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'SItepuller Tasks';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['sitepuller_tasks'] = $view;

  return $export;
}
