<?php

/**
 * @file
 * node_link_style overriden theme hook
 */

/**
 * Overrides theme function for Custom list in node_link_style module
 * @return
 *   HTML for drop down group item.
 *
 * @ingroup themeable
 */
function theme_commons_node_links_custom_group_item($link,$config,$options) {
  $output = '';
  $list_name=$options['list_name'];
  $first=$options['first'];
  $last=$options['last'];

  $title_tag=_get_title($link,$config);
  if ($first){
    $output.='<li class="node_link_style-dropdown-main">';
    $title_tag='<span>'.$title_tag.'</span>';
  }
  else $output.='<li class="node_link_style-dropdown-item">';
  $output.=l($title_tag, $link['href'], $link);
  if (!$first) $output.='</li>';
  if ($first && !$last) $output.='<ul>';
  else if ($last && !$first) $output.='</ul>';
  if ($last) $output.='</li>';

  return $output;
}

/**
 * Overrides theme function for Custom list in node_link_style module
 * @return
 *   HTML for drop down group.
 *
 * @ingroup themeable
 */
function theme_commons_node_links_custom_group($list_name,$link,$config,$options,$start=TRUE) {
  $output = '';
  if ($start){
    $drop_down_form_name='drop_down_form_'.$list_name;
    $drop_down_input_name='drop_down_input_'.$list_name;
     
    $output.='<div class="subscription_clear_style">';
    $output.='<ul class="node_link_style-dropdown">';

  }else{
    $output.='</ul>';
    $output.='</div>';
  }
  return $output;
}


