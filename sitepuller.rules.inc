<?php
set_include_path(get_include_path() . PATH_SEPARATOR . 'phpseclib');

include('Net/SSH2.php');
include('Crypt/Blowfish.php');

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
	$actions['sitepuller_action_save_user'] = array (
			'label' => t('Sitepuller: Save local user'),
			'group' => t('Sitepuller'),
			'parameter' => array(
				'node' => array(
					'type' => 'node',
					'label' => t('The Sitepuller User node.'),
					),
				),
			'provides' => array(
				'sitepuller_message' => array(
					'type' => 'text',
					'label' => t('Message'),
					)
				),
		);
 
	return $actions;
}

function sitepuller_action_save_user($node) {
	dsm('hello from sitepuller_action_save_user 1');
	$wrapper = entity_metadata_wrapper('node', $node);
	dsm('got wrapper');
	$rsa_private = $wrapper->field_sitepuller_rsa_private_key->value();
	dsm($rsa_private);
	$passphrase = $wrapper->field_sitepuller_rsa_passphrase->value();
	dsm($passphrase);
	$key_file = $wrapper->field_sitepuller_encryption_key->value();
	dsm('here');

	$sitepuller_message = array();
	$sitepuller_message[] = $key_file;
	dsm($sitepuller_message);
	// be sure the private key file exists
	if (!file_exists($rsa_private)) {
		$sitepuller_message[] = t("can't find private key @key", array('@key' => $rsa_private));
		dsm('no private key');
	}
	dsm('yes private key');

	// be sure key file exists
	if (file_exists($key_file)) {
		$hash = md5(file_get_contents($key_file));
		dsm($hash);
		$cipher = new Crypt_AES(CRYPT_AES_MODE_ECB);
		$cipher->setKey($hash);
		$wrapper->field_sitepuller_rsa_passphrase->set($cipher->encrypt($passphrase));
		$wrapper->save();
		//$nid = $node->nid;
		// $mynode =  node_load($nid);
		// $wrapper2 = entity_metadata_wrapper('node', $mynode);
		// $wrapper2->field_sitepuller_rsa_passphrase->set($cipher->encrypt($passphrase));
		// node_save($mynode);
		$sitepuller_message[] = t("Stored encrypted passphrase.");
	}
	else {
		$sitepuller_message[] = t("can't find entropy file @file", array('@file' => $key_file));
	}

	dsm (array('final:',$sitepuller_message));

	return array (
		'sitepuller_message' => implode("\r",$sitepuller_message),
		);
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