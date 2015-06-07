<?php
/**
 * @file
 * feature_msf_org_country_region_page.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function feature_msf_org_country_region_page_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-country_region_page-body.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-body.field_instance|display|search_result"] = array(
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
  );
  $overrides["field.node-country_region_page-body.field_instance|widget|weight"] = '4';
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|label"] = 'hidden';
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|type"] = 'field_collection_fields';
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|default|weight"] = '4';
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_attachments.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '23',
  );
  $overrides["field.node-country_region_page-field_audio.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|label"] = 'hidden';
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|type"] = 'field_collection_fields';
  $overrides["field.node-country_region_page-field_audio.field_instance|display|default|weight"] = '3';
  $overrides["field.node-country_region_page-field_audio.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_audio.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_audio.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '30',
  );
  $overrides["field.node-country_region_page-field_employees.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|settings|decimal_separator"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|settings|prefix_suffix"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|settings|scale"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|settings|thousand_separator"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_employees.field_instance|display|default|weight"] = '20';
  $overrides["field.node-country_region_page-field_employees.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_employees.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_employees.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '31',
  );
  $overrides["field.node-country_region_page-field_facts.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_facts.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_facts.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_facts.field_instance|display|default|weight"] = '25';
  $overrides["field.node-country_region_page-field_facts.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_facts.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_facts.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '29',
  );
  $overrides["field.node-country_region_page-field_getlocation.field_config|settings|autocomplete_bias"] = 0;
  $overrides["field.node-country_region_page-field_getlocation.field_config|settings|input_geolocation_button_weight"] = 0;
  $overrides["field.node-country_region_page-field_getlocation.field_config|settings|latlon_warning"] = 0;
  $overrides["field.node-country_region_page-field_getlocation.field_config|settings|restrict_by_country"] = 0;
  $overrides["field.node-country_region_page-field_getlocation.field_config|settings|search_country"] = '';
  $overrides["field.node-country_region_page-field_getlocation.field_config|settings|use_geolocation_button"] = 0;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|baselayers"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|behavior"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|bicycleinfo"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|comment_map_marker"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|controltype"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|country_full"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_additional"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_city"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_country"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_dms"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_latlong"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_mapheight"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_maplink"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_mapwidth"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_name"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_postal_code"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_province"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_showmap"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|display_street"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|draggable"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|map_marker"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|maptype"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|mtc"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|node_map_marker"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|pancontrol"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|panoramio_show"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|per_item_marker"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|poi_show"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|streetview_show"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|trafficinfo"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|transit_show"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|user_map_marker"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|settings|vocabulary_map_marker"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|default|weight"] = '30';
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_getlocation.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '28',
  );
  $overrides["field.node-country_region_page-field_image.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|label"] = 'hidden';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|module"] = 'juicebox_field_collection';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|advanced"] = array(
    'config' => '',
    'custom_parent_classes' => '',
  );
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|caption_source"] = 'field_nmetadata_caption';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|height"] = '100%';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|image_source"] = 'field_media_image';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|image_style"] = 'gallery';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|thumb_style"] = 'thumbnail';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|title_source"] = 'field_nmetadata_title';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|view_mode"] = 'gallery';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|settings|width"] = '100%';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|type"] = 'juicebox_field_collection_formatter';
  $overrides["field.node-country_region_page-field_image.field_instance|display|default|weight"] = '1';
  $overrides["field.node-country_region_page-field_image.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_image.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_image.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '25',
  );
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|default|weight"] = '31';
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_iso_definition.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '26',
  );
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|default|weight"] = '24';
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_media_local_location_image.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '27',
  );
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|default|weight"] = '23';
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_media_world_location_image.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '32',
  );
  $overrides["field.node-country_region_page-field_movies.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|label"] = 'hidden';
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|type"] = 'field_collection_fields';
  $overrides["field.node-country_region_page-field_movies.field_instance|display|default|weight"] = '2';
  $overrides["field.node-country_region_page-field_movies.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_movies.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_movies.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '33',
  );
  $overrides["field.node-country_region_page-field_other.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|label"] = 'hidden';
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|type"] = 'field_collection_fields';
  $overrides["field.node-country_region_page-field_other.field_instance|display|default|weight"] = '5';
  $overrides["field.node-country_region_page-field_other.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_other.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_other.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '38',
  );
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|settings|format_type"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|settings|fromto"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|settings|multiple_from"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|settings|multiple_number"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|settings|multiple_to"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|settings|show_repeat_rule"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|default|weight"] = '32';
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_presence_date.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '40',
  );
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|default|weight"] = '19';
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_pull_outs.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '37',
  );
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|settings|view_mode"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|default|weight"] = '26';
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_quotes.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '34',
  );
  $overrides["field.node-country_region_page-field_related.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_related.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_related.field_instance|display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_related.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_related.field_instance|display|default|weight"] = '6';
  $overrides["field.node-country_region_page-field_related.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_related.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_related.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '35',
  );
  $overrides["field.node-country_region_page-field_related.field_instance|widget|weight"] = '11';
  $overrides["field.node-country_region_page-field_subtitle.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_subtitle.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_subtitle.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_subtitle.field_instance|display|default|weight"] = '18';
  $overrides["field.node-country_region_page-field_subtitle.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '36',
  );
  $overrides["field.node-country_region_page-field_subtitle.field_instance|widget|weight"] = '2';
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|settings|add"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|settings|delete"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|settings|description"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|settings|edit"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|settings|view_mode"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|default|weight"] = '33';
  $overrides["field.node-country_region_page-field_summary_image.field_instance|display|search_result"] = array(
    'label' => 'hidden',
    'module' => 'field_collection',
    'settings' => array(
      'view_mode' => 'teaser_block_media',
    ),
    'type' => 'field_collection_fields',
    'weight' => '1',
  );
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|default|weight"] = '21';
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '24',
  );
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|widget|settings|apply_chosen"] = 0;
  $overrides["field.node-country_region_page-field_taxonomy_issues.field_instance|widget|weight"] = '17';
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|default|weight"] = '29';
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '39',
  );
  $overrides["field.node-country_region_page-field_taxonomy_package.field_instance|widget|weight"] = '5';
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|default|weight"] = '22';
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '21',
  );
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|widget|settings|apply_chosen"] = 0;
  $overrides["field.node-country_region_page-field_taxonomy_region.field_instance|widget|weight"] = '16';
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|default|weight"] = '27';
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '22',
  );
  $overrides["field.node-country_region_page-field_taxonomy_related_countries.field_instance|widget|settings|apply_chosen"] = 0;
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_config|settings|allowed_values|0|vocabulary"] = 'tags_msforg';
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|colorbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|default|type"] = 'hidden';
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|default|weight"] = '28';
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|highlights"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|related_content"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|display|search_result"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '20',
  );
  $overrides["field.node-country_region_page-field_taxonomy_tags.field_instance|widget|weight"] = '18';

 return $overrides;
}
