<?php
/**
 * @file
 * sitepuller.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sitepuller_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-sitepuller_local-field_sitepuller_local_site_name'
  $field_instances['node-sitepuller_local-field_sitepuller_local_site_name'] = array(
    'bundle' => 'sitepuller_local',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of the site on the local machine. eg. main1',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_local_site_name',
    'label' => 'Site name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-sitepuller_local-field_sitepuller_local_site_root'
  $field_instances['node-sitepuller_local-field_sitepuller_local_site_root'] = array(
    'bundle' => 'sitepuller_local',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Absolute path to the directory on the local machine where the Drupal site\'s index.php is located. eg. /users/myuser/Sites/devdesktop/main1
NO TRAILING SLASH',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_local_site_root',
    'label' => 'Site Root Directory',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-sitepuller_local-field_sitepuller_local_tmp'
  $field_instances['node-sitepuller_local-field_sitepuller_local_tmp'] = array(
    'bundle' => 'sitepuller_local',
    'default_value' => array(
      0 => array(
        'value' => '/tmp',
      ),
    ),
    'deleted' => 0,
    'description' => 'Directory where sitepuller can store temporary files on the local machine. eg. /tmp',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_local_tmp',
    'label' => 'Temporary Directory',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-sitepuller_remote-field_sitepuller_remote_host'
  $field_instances['node-sitepuller_remote-field_sitepuller_remote_host'] = array(
    'bundle' => 'sitepuller_remote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of the remote server where the Drupal site is located.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_remote_host',
    'label' => 'Hostname',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-sitepuller_remote-field_sitepuller_remote_root'
  $field_instances['node-sitepuller_remote-field_sitepuller_remote_root'] = array(
    'bundle' => 'sitepuller_remote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Absolute path to the directory where the Drupal site\'s index.php is located. eg. /server/mysite/htdocs.
NO TRAILING SLASH',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_remote_root',
    'label' => 'Site Root Directory',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-sitepuller_remote-field_sitepuller_remote_site'
  $field_instances['node-sitepuller_remote-field_sitepuller_remote_site'] = array(
    'bundle' => 'sitepuller_remote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of the Drupal site on the remote machine. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_remote_site',
    'label' => 'Site Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-sitepuller_remote-field_sitepuller_remote_tmp'
  $field_instances['node-sitepuller_remote-field_sitepuller_remote_tmp'] = array(
    'bundle' => 'sitepuller_remote',
    'default_value' => array(
      0 => array(
        'value' => '/tmp',
      ),
    ),
    'deleted' => 0,
    'description' => 'Directory where sitepuller can store temporary files on the remote host machine.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_remote_tmp',
    'label' => 'Temporary Directory',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-sitepuller_remote-field_sitepuller_remote_user'
  $field_instances['node-sitepuller_remote-field_sitepuller_remote_user'] = array(
    'bundle' => 'sitepuller_remote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of ssh user on the remote machine. You must be set up to ssh to the remote machine without a password prompt. 
See (Steps 1 - 3) of https://www.digitalocean.com/community/tutorials/how-to-set-up-ssh-keys--2',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_remote_user',
    'label' => 'User',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_pull_code'
  $field_instances['node-sitepuller_task-field_sitepuller_pull_code'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Pull the Drupal code, libraries, modules, themes.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_pull_code',
    'label' => 'Pull Code',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_pull_database'
  $field_instances['node-sitepuller_task-field_sitepuller_pull_database'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Copy the database from the remote site to the local machine. 
If the local site is up and running, install this database in the local site.
If the local database it not initialized, leave a copy of this database in the temporary folder for later use.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_pull_database',
    'label' => 'Pull Database',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_pull_files'
  $field_instances['node-sitepuller_task-field_sitepuller_pull_files'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_pull_files',
    'label' => 'Pull Public Files',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_pull_private'
  $field_instances['node-sitepuller_task-field_sitepuller_pull_private'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Copy the files from the Private file system.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_pull_private',
    'label' => 'Pull Private Files',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_subsites'
  $field_instances['node-sitepuller_task-field_sitepuller_subsites'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => array(
      0 => array(
        'value' => 'default',
      ),
    ),
    'deleted' => 0,
    'description' => 'Which subsites to pull. Leave blank for all subsites.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_subsites',
    'label' => 'Subsites',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_task_local_site'
  $field_instances['node-sitepuller_task-field_sitepuller_task_local_site'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Drupal site on the local machine that will be the target.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_task_local_site',
    'label' => 'Local Site',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-sitepuller_task-field_sitepuller_task_remo_site'
  $field_instances['node-sitepuller_task-field_sitepuller_task_remo_site'] = array(
    'bundle' => 'sitepuller_task',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Drupal site on a remote machine that will be the source.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_task_remo_site',
    'label' => 'Remote Site',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-sitepuller_user-field_sitepuller_encrypt_entropy'
  $field_instances['node-sitepuller_user-field_sitepuller_encrypt_entropy'] = array(
    'bundle' => 'sitepuller_user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A file that can be reliably be found on your disk somewhere (not available over the network or web accessible). The contents of this file will be used to encrypt and decrypt the RSA passphrase above. If the file gets deleted just make a different one, come back here and enter the passphrase again.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_encrypt_entropy',
    'label' => 'Encryption Entropy File',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-sitepuller_user-field_sitepuller_rsa_passphrase'
  $field_instances['node-sitepuller_user-field_sitepuller_rsa_passphrase'] = array(
    'bundle' => 'sitepuller_user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the passphrase you used to create your RSA public/private key pair.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_rsa_passphrase',
    'label' => 'RSA passphrase',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-sitepuller_user-field_sitepuller_rsa_private_key'
  $field_instances['node-sitepuller_user-field_sitepuller_rsa_private_key'] = array(
    'bundle' => 'sitepuller_user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Absolute path to your ssh key file for RSA. eg. /Users/myuser/.ssh/id_rsa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_rsa_private_key',
    'label' => 'RSA Private Key File',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-sitepuller_user-field_sitepuller_user_name'
  $field_instances['node-sitepuller_user-field_sitepuller_user_name'] = array(
    'bundle' => 'sitepuller_user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name of your user account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sitepuller_user_name',
    'label' => 'User Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A file that can be reliably be found on your disk somewhere (not available over the network or web accessible). The contents of this file will be used to encrypt and decrypt the RSA passphrase above. If the file gets deleted just make a different one, come back here and enter the passphrase again.');
  t('Absolute path to the directory on the local machine where the Drupal site\'s index.php is located. eg. /users/myuser/Sites/devdesktop/main1
NO TRAILING SLASH');
  t('Absolute path to the directory where the Drupal site\'s index.php is located. eg. /server/mysite/htdocs.
NO TRAILING SLASH');
  t('Absolute path to your ssh key file for RSA. eg. /Users/myuser/.ssh/id_rsa');
  t('Copy the database from the remote site to the local machine. 
If the local site is up and running, install this database in the local site.
If the local database it not initialized, leave a copy of this database in the temporary folder for later use.');
  t('Copy the files from the Private file system.');
  t('Directory where sitepuller can store temporary files on the local machine. eg. /tmp');
  t('Directory where sitepuller can store temporary files on the remote host machine.');
  t('Drupal site on a remote machine that will be the source.');
  t('Drupal site on the local machine that will be the target.');
  t('Encryption Entropy File');
  t('Enter the passphrase you used to create your RSA public/private key pair.');
  t('Hostname');
  t('Local Site');
  t('Name of ssh user on the remote machine. You must be set up to ssh to the remote machine without a password prompt. 
See (Steps 1 - 3) of https://www.digitalocean.com/community/tutorials/how-to-set-up-ssh-keys--2');
  t('Name of the Drupal site on the remote machine. ');
  t('Name of the remote server where the Drupal site is located.');
  t('Name of the site on the local machine. eg. main1');
  t('Pull Code');
  t('Pull Database');
  t('Pull Private Files');
  t('Pull Public Files');
  t('Pull the Drupal code, libraries, modules, themes.');
  t('RSA Private Key File');
  t('RSA passphrase');
  t('Remote Site');
  t('Site Name');
  t('Site Root Directory');
  t('Site name');
  t('Subsites');
  t('Temporary Directory');
  t('The name of your user account.');
  t('User');
  t('User Name');
  t('Which subsites to pull. Leave blank for all subsites.');

  return $field_instances;
}
