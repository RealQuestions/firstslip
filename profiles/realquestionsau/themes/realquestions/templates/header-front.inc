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

  <header role="banner" id="front-page-header">
    <?php print render($page['header']); ?>
    <?php print render($page['highlighted']); ?>
        
 
    <div class="pages white paralax page-features" id="page-features">
        <div class="overlay"></div>
     
        <div class="container tophero">
			 <div class="row">
                <div class="col-md-12">
        
                <center><h2>REAL POLITICANS, REAL ANSWERS</h2>   
                <p class=" byline ">Ask politicians questions that matter to you. Real Questions provides a platform for people to ask effective questions, and show the extent of user support for them.    
                </p> 
                <a href="#QuestionFeed"><button type="button" class="btn btn-primary btn-lg" style ="margin-top:50px;" > How it works </button> </a>  
                <a href="#getstartedachor"><button type="button" class="btn btn-primary btn-lg" style="margin-top:50px;">Get Started</button></a>
                  </center> 
                  </div>

                </div> <!-- END ROW --> 
            </div > <!-- END HERO -->

  </div><!-- Paralax --> 

  </header> <!-- /#header -->
