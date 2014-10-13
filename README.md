INTRO:
Welcome to the RealQuestions codebase

'FirstSlip' Code base. Excited to release this, looking forward to hearing from everyone.  These intial releases will be named after cricket fielding positions.

NOTE:
----
there are currently two main branches, Master and Develop. The Master code base is what our site runs. 
As is normal practise, fork & send pull requests to this one preferably, since we clone this onto our development & testing servers first.


This needs Drupal 7, with features. The codebase adds on features and custom modules. You can use drush and make to get started quickly.

* Before you begin: Make sure you have both these installed and working properly

Drush make https://www.drupal.org/project/drush

and 

git http://git-scm.com


make sure to run 'rqcontenttypes' first to get the content types installed, then switch the rest on.

Clone the Repository
```
git clone https://github.com/RealQuestions/firstslip.git
```

Enter the "firstslip" directory and run 

```
drush make profiles/realquestionsau/build-realquestionsau.make
```

Then all you need to do is visit the drupal site via your browser and choose "RealQuestions Australia". Follow the rest of the instructions to install the site. This leaves the bootstap theme enabled as default. We have also provided the RealQuestions theme (a subtheme of bootstrap)


Handy Developer Tips:
we often use "drush si realquestionsau" to quickly blow away the database and resetup the install profile to a clean slate. Very useful during development.

While we get things in place... a quick run down. If you cant wait to get up & running, ping me/ one of the RealQuestions Team at www.realquestions.net.au

Features
~~~~~~~~

Answers:
=======
Verfied* / Unnverified Politicians
Verfied* / +1 (safe users - auto flagged) / Unnverified 

Questions:
==========
View Own Questions
Ask a Question


Site Interations
================
Comments on Answers, Questions.
Rate a Question (Clarity Rating)
Add Support
Flag for Spam/Abose

Scorecard
=========
System Calculating scores for questios/answers of the politicians. This is based on calculation.

Talk (Browse)
============
Browse the list of Questions, Categorised

---
It is important to note here, that currently it contains the political structure for the Australian goverment model. For usage in any other region, it will need to be changed appropriately. We at RealQuestions are willing to help with any efforts, for any willing teams from those regions to step forward.

