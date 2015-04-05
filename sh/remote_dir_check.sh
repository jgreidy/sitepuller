#!/bin/bash
# remote_dir_check.sh - confirm a remote directory exists
# arguments:
#  	user - ssh user
#	machine - remote ssh server
#	path - directory path on remote machine
# returns error exit
#	$? - 0 if we are able to verify the directory exists

if [ $# -eq 3 ]; then
	user="$1"
	mach="$2"
	path="$3"
	echo 'start;'
	ssh "${user}@${mach}" [ -d \""${path}"\" ] || error exit 1
	error="$?"
	echo 'done'
else
	error=3
fi
[ "$error" -eq 0 ] || echo "remote_dir_check failed"
exit "$error"