<?php
/**
 * @file
 * feature_msf_org_country_region_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_msf_org_country_region_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_exclude_node_enable_country_region_page';
  $strongarm->value = 1;
  $export['apachesolr_exclude_node_enable_country_region_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__country_region_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'highlights' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'carrousel' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'related_content' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'carrousel_homepage' => array(
        'custom_settings' => FALSE,
      ),
      'contact' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '21',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '20',
        ),
        'redirect' => array(
          'weight' => '19',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__country_region_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_country_region_page_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => '26',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => '27',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_attachments' => array(
      'region' => 'main',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Attachments',
      'hidden' => 0,
    ),
    'field_audio' => array(
      'region' => 'main',
      'weight' => '19',
      'has_required' => FALSE,
      'title' => 'Audio',
      'hidden' => 0,
    ),
    'field_employees' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Number of employees',
      'hidden' => 1,
    ),
    'field_facts' => array(
      'region' => 'main',
      'weight' => '15',
      'has_required' => FALSE,
      'title' => 'Fact',
      'hidden' => 1,
    ),
    'field_getlocation' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Location',
      'hidden' => 1,
    ),
    'field_image' => array(
      'region' => 'main',
      'weight' => '17',
      'has_required' => FALSE,
      'title' => 'Photos',
      'hidden' => 0,
    ),
    'field_iso_definition' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'ISO definition',
      'hidden' => 1,
    ),
    'field_media_local_location_image' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Local Location Image',
      'hidden' => 1,
    ),
    'field_media_world_location_image' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Worldwide Location Image',
      'hidden' => 1,
    ),
    'field_movies' => array(
      'region' => 'main',
      'weight' => '18',
      'has_required' => FALSE,
      'title' => 'Movies',
      'hidden' => 0,
    ),
    'field_other' => array(
      'region' => 'main',
      'weight' => '21',
      'has_required' => FALSE,
      'title' => 'Other',
      'hidden' => 0,
    ),
    'field_presence_date' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Presence date',
      'hidden' => 1,
    ),
    'field_taxonomy_package' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Package',
      'hidden' => 1,
    ),
    'field_pull_outs' => array(
      'region' => 'main',
      'weight' => '25',
      'has_required' => FALSE,
      'title' => 'Pull-out',
      'hidden' => 0,
    ),
    'field_quotes' => array(
      'region' => 'main',
      'weight' => '23',
      'has_required' => FALSE,
      'title' => 'Quote',
      'hidden' => 0,
    ),
    'field_related' => array(
      'region' => 'main',
      'weight' => '14',
      'has_required' => FALSE,
      'title' => 'Related content',
      'hidden' => 0,
    ),
    'field_subtitle' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Subtitle',
      'hidden' => 0,
    ),
    'field_summary_image' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Summary image',
      'hidden' => 0,
    ),
    'field_taxonomy_issues' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Issues',
      'hidden' => 1,
    ),
    'field_taxonomy_region' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Country / Region',
      'hidden' => 1,
    ),
    'field_taxonomy_related_countries' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Related countries',
      'hidden' => 1,
    ),
    'field_taxonomy_tags' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Free taxonomy (Tags)',
      'hidden' => 0,
    ),
    'group_facts' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => TRUE,
      'title' => 'Facts (group_facts)',
    ),
    'group_location' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Location (group_location)',
    ),
    'group_media' => array(
      'region' => 'main',
      'weight' => '16',
      'has_required' => TRUE,
      'title' => 'Media (group_media)',
    ),
    'group_pullouts' => array(
      'region' => 'main',
      'weight' => '24',
      'has_required' => TRUE,
      'title' => 'Pull-outs (group_pullouts)',
    ),
    'group_quotes' => array(
      'region' => 'main',
      'weight' => '22',
      'has_required' => TRUE,
      'title' => 'Quotes (group_quotes)',
    ),
    'field_taxonomy_country' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Country',
      'hidden' => 0,
    ),
    'field_taxonomy_section' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Aggregator Content Type',
      'hidden' => 0,
    ),
    'field_taxonomy_search_news' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Aggregator News Content group',
      'hidden' => 0,
    ),
    'field_taxonomy_search_resources' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Aggregator Resources Content group',
      'hidden' => 0,
    ),
    'field_taxonomy_diseases' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Diseases',
      'hidden' => 0,
    ),
    'field_taxonomy_topics' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Topics',
      'hidden' => 0,
    ),
    'field_short_title' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Short Title',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_country_region_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_country_region_page';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_country_region_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_country_region_page';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_country_region_page'] = $strongarm;

  return $export;
}
