<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function commons_node_links_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "node_link_style" && $api == "node_link_style") {
    return array("version" => 1);
  }
}
