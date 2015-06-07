<?php
/**
 * @file
 * feature_msf_org_country_region_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_msf_org_country_region_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_summary_image|country_region_media';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_summary_image';
  $ds_layout->view_mode = 'country_region_media';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media_summary_image',
      ),
    ),
    'fields' => array(
      'field_media_summary_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['field_collection_item|field_summary_image|country_region_media'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|country_region_image';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'country_region_image';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
        1 => 'field_metadata_copyright',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
      'field_metadata_copyright' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['file|image|country_region_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country_region_page|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country_region_page';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_attachments',
        1 => 'field_image',
        2 => 'field_audio',
        3 => 'field_movies',
      ),
    ),
    'fields' => array(
      'field_attachments' => 'ds_content',
      'field_image' => 'ds_content',
      'field_audio' => 'ds_content',
      'field_movies' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|country_region_page|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country_region_page|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country_region_page';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-flipcard';
  $ds_layout->settings = array(
    'regions' => array(
      'front_header' => array(
        0 => 'aggregator_title',
      ),
      'front_body' => array(
        1 => 'field_summary_image',
      ),
      'back' => array(
        2 => 'field_taxonomy_country',
        3 => 'post_date',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'aggregator_title' => 'front_header',
      'field_summary_image' => 'front_body',
      'field_taxonomy_country' => 'back',
      'post_date' => 'back',
      'body' => 'back',
    ),
    'classes' => array(),
    'wrappers' => array(
      'front_header' => 'div',
      'front_body' => 'div',
      'back' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|country_region_page|search_result'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_msf_org_country_region_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_region_image';
  $ds_view_mode->label = 'Country / Region image';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['country_region_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_region_media';
  $ds_view_mode->label = 'Country / Region media';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['country_region_media'] = $ds_view_mode;

  return $export;
}
