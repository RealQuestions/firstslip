<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="container">
    <div class="navbar-header">
      <?php if ($logo): ?>
      <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
      <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
  </div>
</header>


<div id="rootwizard" class="navbar">
    <div class="navbar-inner">
        <div class="container">
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


	

