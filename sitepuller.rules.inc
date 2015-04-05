<?php
 
/**
 * Implement hook_rules_action_info().
 */
function sitepuller_rules_action_info() {
	$actions['sitepuller_action_check_remote_site'] = array (
		'label' => t('Sitepuller: Check remote site'),
		'group' => t('Sitepuller'),
		'parameter' => array(
			'node' =>  array(
				'type' => 'node', 
				'label' => t('The Sitepuller Remote node.'),
				),
			),
		);
 
	return $actions;
}
 
function sitepuller_action_check_remote_site($node) {
	$wrapper = entity_metadata_wrapper('node', $node);

	$user = $wrapper->field_sitepuller_remote_user->value();
	$mach = $wrapper->field_sitepuller_remote_host->value();
	$path = $wrapper->field_sitepuller_remote_root->value();
	$module = drupal_get_path('module', 'sitepuller');
	$scripts =  drupal_realpath($module . '/sh');
	$cmd = "/bin/bash $scripts/remote_dir_check.sh $user $mach $path";
	$cmd = "ssh $user@$mach date";
	$cmd = escapeshellcmd($cmd);
	//$cmd = "which ssh";
	$output='';
	$error='';
	//exec($cmd, $output, $error);
	$output = shell_exec($cmd);
	dsm (array('the node is' => $node, 'command' => $cmd, 'error' => $error, 'output' => $output));
}