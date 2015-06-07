<?php
/**
 * @file
 * feature_msf_org_country_region_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_msf_org_country_region_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-countries.
  $menus['menu-countries'] = array(
    'menu_name' => 'menu-countries',
    'title' => 'Countries',
    'description' => 'Menu for navigating through country / region pages below activities.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Countries');
  t('Menu for navigating through country / region pages below activities.');


  return $menus;
}
