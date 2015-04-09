<?php
/**
 * @file
 * sitepuller.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function sitepuller_default_rules_configuration() {
  $items = array();
  $items['rules_sitepuller_check_remote_site_on_save'] = entity_import('rules_config', '{ "rules_sitepuller_check_remote_site_on_save" : {
      "LABEL" : "Sitepuller - Check remote site on save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "sitepuller" ],
      "REQUIRES" : [ "sitepuller_tools", "rules" ],
      "ON" : {
        "node_insert--sitepuller_remote" : { "bundle" : "sitepuller_remote" },
        "node_update--sitepuller_remote" : { "bundle" : "sitepuller_remote" }
      },
      "DO" : [
        { "devel_debug" : { "value" : [ "node" ] } },
        { "sitepuller_action_check_remote_site" : [] }
      ]
    }
  }');
  return $items;
}
