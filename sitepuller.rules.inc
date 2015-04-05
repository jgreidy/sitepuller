<?php
set_include_path(get_include_path() . PATH_SEPARATOR . 'phpseclib');

include('Net/SSH2.php');

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
	$cmd = "ssh $user@$mach test -d \"$path\" || exit 1";
	$cmd = escapeshellcmd($cmd);
	//$cmd = "which ssh";
	$output='';
	$error='';
	//exec($cmd, $output, $error);
	dsm (array('the node is' => $node, 'command' => $cmd, 'error' => $error, 'output' => $output));


$ssh = new Net_SSH2("$mach");
if ($ssh->isConnected()) dsm('connected 1');
// keyfile must be id_rsa (private key) - absolute path
$keyfile = file_get_contents('/Users/jgreidy/.ssh/id_rsa');
if (empty($keyfile)) { 
	dsm('no keyfile');
	return;
}
$key = new Crypt_RSA();
// password must be the one set for id_rsa above
$key->setPassword('xxx');
$key->loadKey($keyfile);
if (!$ssh->login($user,$key)) {
	$allErr = $ssh->getErrors();
    dsm(array('Login Failed', $allErr));
    return;
}

if ($ssh->isConnected()) dsm('connected 2');

$pwd = $ssh->exec('pwd');
$err1 = $ssh->getStdError();
$ls = $ssh->exec("test -d \"$path\" || echo 'no path'");
$err2 = $ssh->getStdError();
$allErr = $ssh->getErrors();
dsm(array($pwd, $err1, $ls, $err2, $allErr));

}