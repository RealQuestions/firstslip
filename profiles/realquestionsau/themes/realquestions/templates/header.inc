<div id="main-nav" class="<?php print $navbar_classes; ?>" role="navigation">
    <div class=" container">
       	<div class="navbar-header">
    		<button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#site-nav">
            <span class = "icon-bar"> </span> 
            <span class ="icon-bar"> </span> 
            <span class ="icon-bar"> </span> 
             </button>

            <?php if (!empty($site_name)): ?>
            <a class="navbar-brand scrollto" href="<?php print $front_page; ?>">
            <?php print $site_name; ?></a > <?php endif; ?>

            <?php if (!empty($logo)): ?>
                <a href="<?php print $front_page; ?>" title=" <?php print t('Home'); ?> " id="homelogo">
                <img src="<?php print $logo; ?> " alt="<?php print t('Home'); ?>" class="img-responsive img-fullwidth img-min-height-width-100" />
                </a>
            <?php endif; ?>
            <?php if (!empty($site_slogan)): ?>
                <p class="lead"><?php print $site_slogan; ?></p>
            <?php endif; ?>

        </div> <!--navbar-header-->

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div id="site-nav" class="navbar-collapse collapse ">
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
	    </div>
    </div>

  <header role="banner" id="page-header">
    <?php print render($page['header']); ?>
    <?php print render($page['highlighted']); ?>
        
  </header> <!-- /#header -->
