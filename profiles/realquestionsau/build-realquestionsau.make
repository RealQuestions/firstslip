api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = drupal-org-core.make

; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make
includes[realquestionsau] = "realquestionsau.make"
 
;projects[realquestionsau][type] = profile
;projects[realquestionsau][download][type] = git
;projects[realquestionsau][download][url] = git://github.com/RealQuestions/firstslip.git
;projects[realquestionsau][download][branch] = master
