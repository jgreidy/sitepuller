; drush make file for sitepuller dependencies
core = 7.x
api = 2

; Modules

projects[ctools][version] = "1.7"

projects[composer_manager][version] = "1.7"

projects[devel][version] = "1.5"

projects[entity][version] = "1.6"

projects[entityreference][version] = "1.1"

projects[features][version] = "2.5"

projects[rules][version] = "2.9"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[sitepuller_tools][download][type] = "git"
projects[sitepuller_tools][download][url] = "https://github.com/jgreidy/sitepuller-tools.git"
projects[sitepuller_tools][type] = "module"
projects[sitepuller_tools][version] = "develop"

projects[strongarm][version] = "2.0"

projects[views][version] = "3.10"
