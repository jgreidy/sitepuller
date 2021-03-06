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
  $items['rules_sitepuller_check_local_site_on_save'] = entity_import('rules_config', '{ "rules_sitepuller_check_local_site_on_save" : {
      "LABEL" : "Sitepuller: Check Local site on Save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "sitepuller" ],
      "REQUIRES" : [ "sitepuller_tools", "rules" ],
      "ON" : {
        "node_insert--sitepuller_local" : { "bundle" : "sitepuller_local" },
        "node_update--sitepuller_local" : { "bundle" : "sitepuller_local" }
      },
      "DO" : [
        { "sitepuller_tools_action_check_local_site" : {
            "USING" : { "node" : [ "node" ] },
            "PROVIDE" : { "sitepuller_tools_message" : { "sitepuller_tools_message" : "Message" } }
          }
        },
        { "drupal_message" : { "message" : "Sitepuller: [sitepuller-tools-message:value]" } }
      ]
    }
  }');
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
        { "sitepuller_tools_action_check_remote_site" : {
            "USING" : { "node" : [ "node" ] },
            "PROVIDE" : { "sitepuller_tools_message" : { "sitepuller_tools_message" : "Message" } }
          }
        },
        { "drupal_message" : { "message" : "Sitepuller: [sitepuller-tools-message:value]" } }
      ]
    }
  }');
  $items['rules_sitepuller_perform_task_on_task_save'] = entity_import('rules_config', '{ "rules_sitepuller_perform_task_on_task_save" : {
      "LABEL" : "Sitepuller: Perform task on task save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "sitepuller" ],
      "REQUIRES" : [ "sitepuller_tools", "rules" ],
      "ON" : {
        "node_insert--sitepuller_task" : { "bundle" : "sitepuller_task" },
        "node_update--sitepuller_task" : { "bundle" : "sitepuller_task" }
      },
      "DO" : [
        { "sitepuller_tools_action_save_task" : {
            "USING" : { "node" : [ "node" ] },
            "PROVIDE" : { "sitepuller_tools_message" : { "sitepuller_tools_message" : "Message" } }
          }
        },
        { "drupal_message" : { "message" : "[sitepuller-tools-message:value]" } },
        { "redirect" : { "url" : "sitepuller_tools\\/[node:nid]\\/run", "destination" : "1" } }
      ]
    }
  }');
  return $items;
}
