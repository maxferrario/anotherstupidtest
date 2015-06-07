<?php
/**
 * @file
 * feature_msf_org_country_region_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_msf_org_country_region_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_msf_org_country_region_page_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_fields_alter().
 */
function feature_msf_org_country_region_page_field_default_fields_alter(&$data) {
  if (isset($data['node-country_region_page-body'])) {
    $data['node-country_region_page-body']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-body']['field_instance']['display']['search_result'] = array(
      'label' => 'hidden',
      'module' => 'smart_trim',
      'settings' => array(
        'more_link' => '0',
        'more_text' => 'Read more',
        'summary_handler' => 'trim',
        'trim_length' => '100',
        'trim_options' => array(
          'text' => 'text',
        ),
        'trim_suffix' => '...',
        'trim_type' => 'chars',
      ),
      'type' => 'smart_trim_format',
      'weight' => '4',
    ); /* WAS: '' */
    $data['node-country_region_page-body']['field_instance']['widget']['weight'] = '4'; /* WAS: '5' */
  }
  if (isset($data['node-country_region_page-field_attachments'])) {
    $data['node-country_region_page-field_attachments']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_attachments']['field_instance']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-country_region_page-field_attachments']['field_instance']['display']['default']['type'] = 'field_collection_fields'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_attachments']['field_instance']['display']['default']['weight'] = '4'; /* WAS: 27 */
    $data['node-country_region_page-field_attachments']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_attachments']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_attachments']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '23',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_attachments']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_attachments']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_attachments']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_attachments']['field_instance']['display']['default']['settings']['edit']);
  }
  if (isset($data['node-country_region_page-field_audio'])) {
    $data['node-country_region_page-field_audio']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_audio']['field_instance']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-country_region_page-field_audio']['field_instance']['display']['default']['type'] = 'field_collection_fields'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_audio']['field_instance']['display']['default']['weight'] = '3'; /* WAS: 29 */
    $data['node-country_region_page-field_audio']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_audio']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_audio']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '30',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_audio']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_audio']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_audio']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_audio']['field_instance']['display']['default']['settings']['edit']);
  }
  if (isset($data['node-country_region_page-field_employees'])) {
    $data['node-country_region_page-field_employees']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_employees']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'number_integer' */
    $data['node-country_region_page-field_employees']['field_instance']['display']['default']['weight'] = '20'; /* WAS: '7' */
    $data['node-country_region_page-field_employees']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_employees']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_employees']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '31',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_employees']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_employees']['field_instance']['display']['default']['settings']['decimal_separator']);
    unset($data['node-country_region_page-field_employees']['field_instance']['display']['default']['settings']['prefix_suffix']);
    unset($data['node-country_region_page-field_employees']['field_instance']['display']['default']['settings']['scale']);
    unset($data['node-country_region_page-field_employees']['field_instance']['display']['default']['settings']['thousand_separator']);
  }
  if (isset($data['node-country_region_page-field_facts'])) {
    $data['node-country_region_page-field_facts']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_facts']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-country_region_page-field_facts']['field_instance']['display']['default']['weight'] = '25'; /* WAS: '18' */
    $data['node-country_region_page-field_facts']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_facts']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_facts']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '29',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_facts']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_getlocation'])) {
    $data['node-country_region_page-field_getlocation']['field_config']['settings']['autocomplete_bias'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_config']['settings']['input_geolocation_button_weight'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_config']['settings']['latlon_warning'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_config']['settings']['restrict_by_country'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_config']['settings']['search_country'] = ''; /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_config']['settings']['use_geolocation_button'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'getlocations_fields_default' */
    $data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['weight'] = '30'; /* WAS: '24' */
    $data['node-country_region_page-field_getlocation']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_getlocation']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '28',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['baselayers']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['behavior']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['bicycleinfo']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['comment_map_marker']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['controltype']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['country_full']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_additional']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_city']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_country']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_dms']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_latlong']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_mapheight']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_maplink']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_mapwidth']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_name']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_postal_code']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_province']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_showmap']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['display_street']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['draggable']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['map_marker']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['maptype']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['mtc']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['node_map_marker']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['pancontrol']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['panoramio_show']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['per_item_marker']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['poi_show']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['streetview_show']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['trafficinfo']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['transit_show']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['user_map_marker']);
    unset($data['node-country_region_page-field_getlocation']['field_instance']['display']['default']['settings']['vocabulary_map_marker']);
  }
  if (isset($data['node-country_region_page-field_image'])) {
    $data['node-country_region_page-field_image']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['module'] = 'juicebox_field_collection'; /* WAS: 'field_collection' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['advanced'] = array(
      'config' => '',
      'custom_parent_classes' => '',
    ); /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['caption_source'] = 'field_nmetadata_caption'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['height'] = '100%'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['image_source'] = 'field_media_image'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['image_style'] = 'gallery'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['thumb_style'] = 'thumbnail'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['title_source'] = 'field_nmetadata_title'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['view_mode'] = 'gallery'; /* WAS: 'full' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['width'] = '100%'; /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['type'] = 'juicebox_field_collection_formatter'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_image']['field_instance']['display']['default']['weight'] = '1'; /* WAS: 28 */
    $data['node-country_region_page-field_image']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_image']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '25',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_image']['field_instance']['display']['default']['settings']['edit']);
  }
  if (isset($data['node-country_region_page-field_iso_definition'])) {
    $data['node-country_region_page-field_iso_definition']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_iso_definition']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-country_region_page-field_iso_definition']['field_instance']['display']['default']['weight'] = '31'; /* WAS: 25 */
    $data['node-country_region_page-field_iso_definition']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_iso_definition']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_iso_definition']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '26',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_iso_definition']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_media_local_location_image'])) {
    $data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['default']['weight'] = '24'; /* WAS: '15' */
    $data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '27',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['default']['settings']['image_link']);
    unset($data['node-country_region_page-field_media_local_location_image']['field_instance']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-country_region_page-field_media_world_location_image'])) {
    $data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['default']['weight'] = '23'; /* WAS: '14' */
    $data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '32',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['default']['settings']['image_link']);
    unset($data['node-country_region_page-field_media_world_location_image']['field_instance']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-country_region_page-field_movies'])) {
    $data['node-country_region_page-field_movies']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_movies']['field_instance']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-country_region_page-field_movies']['field_instance']['display']['default']['type'] = 'field_collection_fields'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_movies']['field_instance']['display']['default']['weight'] = '2'; /* WAS: 30 */
    $data['node-country_region_page-field_movies']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_movies']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_movies']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '33',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_movies']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_movies']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_movies']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_movies']['field_instance']['display']['default']['settings']['edit']);
  }
  if (isset($data['node-country_region_page-field_other'])) {
    $data['node-country_region_page-field_other']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_other']['field_instance']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-country_region_page-field_other']['field_instance']['display']['default']['type'] = 'field_collection_fields'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_other']['field_instance']['display']['default']['weight'] = '5'; /* WAS: 31 */
    $data['node-country_region_page-field_other']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_other']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_other']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '38',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_other']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_other']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_other']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_other']['field_instance']['display']['default']['settings']['edit']);
  }
  if (isset($data['node-country_region_page-field_presence_date'])) {
    $data['node-country_region_page-field_presence_date']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'date_default' */
    $data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['weight'] = '32'; /* WAS: 26 */
    $data['node-country_region_page-field_presence_date']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_presence_date']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_presence_date']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '40',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['settings']['format_type']);
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['settings']['fromto']);
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['settings']['multiple_from']);
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['settings']['multiple_number']);
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['settings']['multiple_to']);
    unset($data['node-country_region_page-field_presence_date']['field_instance']['display']['default']['settings']['show_repeat_rule']);
  }
  if (isset($data['node-country_region_page-field_pull_outs'])) {
    $data['node-country_region_page-field_pull_outs']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_pull_outs']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-country_region_page-field_pull_outs']['field_instance']['display']['default']['weight'] = '19'; /* WAS: '5' */
    $data['node-country_region_page-field_pull_outs']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_pull_outs']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_pull_outs']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '37',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_pull_outs']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_quotes'])) {
    $data['node-country_region_page-field_quotes']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_quotes']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_quotes']['field_instance']['display']['default']['weight'] = '26'; /* WAS: '20' */
    $data['node-country_region_page-field_quotes']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_quotes']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_quotes']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '34',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_quotes']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_quotes']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_quotes']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_quotes']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_quotes']['field_instance']['display']['default']['settings']['edit']);
    unset($data['node-country_region_page-field_quotes']['field_instance']['display']['default']['settings']['view_mode']);
  }
  if (isset($data['node-country_region_page-field_related'])) {
    $data['node-country_region_page-field_related']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_related']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['node-country_region_page-field_related']['field_instance']['display']['default']['weight'] = '6'; /* WAS: '13' */
    $data['node-country_region_page-field_related']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_related']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_related']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '35',
    ); /* WAS: '' */
    $data['node-country_region_page-field_related']['field_instance']['widget']['weight'] = '11'; /* WAS: '12' */
    unset($data['node-country_region_page-field_related']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_related']['field_instance']['display']['default']['settings']['link']);
  }
  if (isset($data['node-country_region_page-field_subtitle'])) {
    $data['node-country_region_page-field_subtitle']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_subtitle']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-country_region_page-field_subtitle']['field_instance']['display']['default']['weight'] = '18'; /* WAS: '1' */
    $data['node-country_region_page-field_subtitle']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '36',
    ); /* WAS: '' */
    $data['node-country_region_page-field_subtitle']['field_instance']['widget']['weight'] = '2'; /* WAS: '1' */
    unset($data['node-country_region_page-field_subtitle']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_summary_image'])) {
    $data['node-country_region_page-field_summary_image']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'field_collection_view' */
    $data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['weight'] = '33'; /* WAS: 32 */
    $data['node-country_region_page-field_summary_image']['field_instance']['display']['search_result'] = array(
      'label' => 'hidden',
      'module' => 'field_collection',
      'settings' => array(
        'view_mode' => 'teaser_block_media',
      ),
      'type' => 'field_collection_fields',
      'weight' => '1',
    ); /* WAS: '' */
    unset($data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['module']);
    unset($data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['settings']['add']);
    unset($data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['settings']['delete']);
    unset($data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['settings']['description']);
    unset($data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['settings']['edit']);
    unset($data['node-country_region_page-field_summary_image']['field_instance']['display']['default']['settings']['view_mode']);
  }
  if (isset($data['node-country_region_page-field_taxonomy_issues'])) {
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['default']['weight'] = '21'; /* WAS: '11' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '24',
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['widget']['settings']['apply_chosen'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_issues']['field_instance']['widget']['weight'] = '17'; /* WAS: '18' */
    unset($data['node-country_region_page-field_taxonomy_issues']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_taxonomy_package'])) {
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['default']['weight'] = '29'; /* WAS: 23 */
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '39',
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_package']['field_instance']['widget']['weight'] = '5'; /* WAS: '6' */
    unset($data['node-country_region_page-field_taxonomy_package']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_taxonomy_region'])) {
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['default']['weight'] = '22'; /* WAS: '12' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '21',
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['widget']['settings']['apply_chosen'] = 0; /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_region']['field_instance']['widget']['weight'] = '16'; /* WAS: '17' */
    unset($data['node-country_region_page-field_taxonomy_region']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_taxonomy_related_countries'])) {
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['default']['weight'] = '27'; /* WAS: '22' */
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '22',
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['widget']['settings']['apply_chosen'] = 0; /* WAS: '' */
    unset($data['node-country_region_page-field_taxonomy_related_countries']['field_instance']['display']['default']['module']);
  }
  if (isset($data['node-country_region_page-field_taxonomy_tags'])) {
    $data['node-country_region_page-field_taxonomy_tags']['field_config']['settings']['allowed_values']['0']['vocabulary'] = 'tags_msforg'; /* WAS: 'tags' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['colorbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['default']['weight'] = '28'; /* WAS: '23' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['highlights'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['related_content'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '20',
    ); /* WAS: '' */
    $data['node-country_region_page-field_taxonomy_tags']['field_instance']['widget']['weight'] = '18'; /* WAS: '19' */
    unset($data['node-country_region_page-field_taxonomy_tags']['field_instance']['display']['default']['module']);
  }
  // Available bundles for Field Related
  if (isset($data['node-country_region_page-field_related'])){
    $data['node-country_region_page-field_related']['field_config']['settings']['handler_settings']['target_bundles'] = array(
      'article' => 'article',
      'blog' => 'blog',
      'page' => 'page',
      'country_region_page' => 'country_region_page',
      'msf_office' => 'msf_office',
      'page' => 'page',
      'publication' => 'publication',
      'vacancy' => 'vacancy',
      );
  }

}

/**
 * Implements hook_image_default_styles().
 */
function feature_msf_org_country_region_page_image_default_styles() {
  $styles = array();

  // Exported image style: country_region.
  $styles['country_region'] = array(
    'name' => 'country_region',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '964',
          'height' => '330',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
