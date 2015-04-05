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
	myerror=0
	echo 'start;'
	#/usr/bin/ssh "${user}@${mach}" "test -d \"${path}\" || exit 1"
	ssh "${user}@${mach}" ls
	myerror="$?"
	pwd
	echo "done $myerror"
else
	myerror=3
fi
[ "$myerror" -eq 0 ] || echo "remote_dir_check failed"
exit "$myerror"