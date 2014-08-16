<?php include('header.inc') ?>


<div id="rootwizard" class="navbar tophero">
    <div class="navbar-inner">
        <div class="container ">
            <h2 class="title"><?php print $title; ?></h2>
           	<ul id="registrationwizard" class="nav nav-pills">
  	  	        <li class="round-icon"><a href="#edit-logindetails" role="tab" data-toggle="tab"><span class="glyphicon glyphicon-user"></span></a></li>
           		<li class="round-icon"><a href="#edit-identify" role="tab" data-toggle="tab"><span class="glyphicon glyphicon-th-list"></span></a></li>
   		        <li class="round-icon"><a href="#edit-security" role="tab" data-toggle="tab"><span class="glyphicon glyphicon-lock"></span></a></li>
           	</ul>
        </div>
    </div>
    
    <?php print $messages; ?>
 		
    <div class="container">

        <div class="row"><div class="col-sm-8 col-md-8 col-lg-8">
<em>Q: Why do I have to provide my name, address and phone number to register? </em><br>
A: It is important that everybody contributing to the site is a real person, and that their contribution is valued equally. The scoring or voting of questions and comments on the site makes no sense if people can vote more than once. We ask for details so that we can check if necessary. (This information is confidential - see our <?php print l('Privacy Policy', 'content/privacy-policy')?>.)
        	<?php print render($page['content']); ?>	 
        	<ul class="pager wizard">
                <!-- <li class="previous first"><a href="javascript:;">First</a></li> -->
                <li class="previous"><a href="javascript:;">Previous</a></li>
                <!-- <li class="next last"><a href="javascript:;">Last</a></li> -->
                <li class="next"><a href="javascript:;">Next</a></li>
                <!-- <li class="next finish" style="display:none;"><a href="javascript:;">Register</a></li> -->
            </ul>
        </div>

    <div class="row">
      <div class="col-sm-4 col-md-4">
        <div class="thumbnail">
          <div class="caption">
            <h3>Already Registered ?</h3>
            <p>You can login. <br><br><small>*Alternately, 'Recover Password' will mail a link to your pre-registered Email Address, allowing you to reset your password</small></p>
            <p>
            <?php print l(t('Login'), 'user/login', array('attributes' => array('class' => array('btn btn-default')), 'role' => array('button'))); ?>
            <?php print l(t('Recover password'), 'user/password', array('attributes' => array('class' => array('btn btn-default')), 'role' => array('button'))); ?>
            </p>
          </div>
        </div>
      </div>
    </div>

<!--             <a href="<?php print url('<front>'); ?>">&larr; Back <?php print $site_name; ?></a>-->    
</div>
</div>

<?php include('footer.inc') ?>
