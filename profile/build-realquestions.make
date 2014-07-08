api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = drupal-org-core.make

; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make
includes[realquestions] = "realquestions.make"
 
projects[realquestions][type] = profile
projects[realquestions][download][type] = git
projects[realquestions][download][url] = git://github.com/RealQuestions/firstslip.git
projects[realquestions][subdir] = "realquestions/modules/realquestions"
;projects[realquestions][download][branch] = master
