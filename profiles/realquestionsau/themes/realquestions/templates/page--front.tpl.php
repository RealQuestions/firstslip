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
                <a href="<?php print $front_page; ?>" title=" <?php print t('Home'); ?> ">
                <img src="<?php print $logo; ?> " alt="<?php print t('Home'); ?>" class="img-responsive img-fullwidth img-min-height-width-100" />
                </a>
            <?php endif; ?>
            <?php if (!empty($site_slogan)): ?>
                <p class=" lead "><?php print $site_slogan; ?></p>
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
   

      <?php if (!empty($breadcrumb)): print $breadcrumb; 
      endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title) && $show_title): ?>
        <h3 class="page-header"><?php print $title; ?></h3>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
        <?php if (!empty($page['help'])): ?>
        <div class=" well "><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class=" action-links "><?php print render($action_links); ?></ul>
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
                <a href="#GetStarted"><button type="button" class="btn btn-primary btn-lg" style="margin-top:50px;">Get Started</button></a>>
                  </center> 
                  </div>

                </div> <!-- END ROW --> 
            </div > <!-- END HERO -->

  </div><!-- Paralax --> 

  </header> <!-- /#header -->


  <div class="main-container container background"  style="background-color:#f7f7f7;">
  <div class = "row" >

  <?php # print $content_column_class; ?>


  <?php if (!empty($page['highlighted'])): ?>
  <div class="highlighted hero-unit"> 
    <?php print render($page['highlighted']); ?>
  </div>
      <?php endif; ?>
      <?php #if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a > <?php print render($title_prefix); ?> 
      <?php if (!empty($title) && $show_title): ?>
  <h3 class="page-header"> <?php print $title; ?> </h3> <?php endif; ?>
  <?php print render($title_suffix); ?> <?php print $messages; ?>
  <?php if (!empty($tabs)): ?> <?php print render($tabs); ?>
  <?php endif; ?> <?php if (!empty($page['help'])): ?>
  <div class="well"> <?php print render($page['help']); ?> </div> <ul class =
  "action-links" > <?php print render($action_links); ?> </ul>
      <?php endif; ?>

    </div>

    <section id="QuestionFeed">
    <div class="row">
    <?php $request = drupal_http_request($GLOBALS['base_url'] .'/questionsfeed?callback=jsonCallback');
    $qresults = (drupal_json_decode($request->data)); ?>
    <!-- parse & display feed from -- questionsfeed?callback=jsonCallback -->       
  <div class="col-sm-3 col-md-3 col-lg-3 question"> 
    <p> <strong> QUESTION </strong> <a>@ <?php print $qresults['nodes'][0]['node']['Individual']; ?> </a> <i><?php print $qresults['nodes'][0]['node']['Question']; ?></i></p>
  <span class="glyphicon glyphicon-user"></span> From
  <a> <?php print $qresults['nodes'][0]['node']['By']; ?> </a>, in <a> <?php print $qresults['nodes'][0]['node']['Tags']; ?> </a>
  </div>
                  
  <div class="col-sm-4 col-md-4 col-lg-4 question">
    <p> <strong> QUESTION </strong> <a>@ <?php print $qresults['nodes'][1]['node']['Individual']; ?> </a> <i><?php print $qresults['nodes'][1]['node']['Question']; ?></i></p>
  <span class="glyphicon glyphicon-user"></span> From
  <a> <?php print $qresults['nodes'][1]['node']['By']; ?> </a>, in <a> <?php print $qresults['nodes'][1]['node']['Tags']; ?> </a>
  </div>
  
    <div class="col-sm-4 col-md-4 col-lg-4 question">
              <p> <strong> QUESTION </strong> <a>@ <?php print $qresults['nodes'][2]['node']['Individual']; ?> </a> <i><?php print $qresults['nodes'][2]['node']['Question']; ?></i></p>
  <span class="glyphicon glyphicon-user"></span> From
  <a> <?php print $qresults['nodes'][2]['node']['By']; ?> </a>, in <a> <?php print $qresults['nodes'][2]['node']['Tags']; ?> </a>

  </div>
  
  </div>
  </section>



  <?php if (!empty($page['sidebar_first'])): ?>
  <aside class="col-sm-3" role="complementary"> 
  <?php print render($page['sidebar_first']); ?> </aside>
   <!-- /#sidebar-first -->
    <?php endif; ?>  
    
  </div> </div>



  <div class="container">
  <section id="Info" style="background-color:white;" >
    <h2 class="works"> HOW IT WORKS </h2> 
    <div class="row"> 
        <div class="col-mdn-8 offset2"> 
            <p></p> 
        </div>
    </div>
  <!-- https://www.youtube.com/watch?feature=player_embedded&v=RHHwiY39byg -->
   <div class="row-fluid" style="min-height:360px;">  
     <div class = "col-md-6 col-lg-6" style="background-color:black; min-height:330px; height:330px;">
       <video id="RHHwiY39byg" class="sublime" poster="<?php print drupal_get_path('theme', 'realquestions'); ?>/patricks/politician-thumb.jpg" width="100%" height="330" data-uid="RHHwiY39byg" data-youtube-id="RHHwiY39byg" data-autoresize="fit" preload="none">
       </div>
    
                     
         <div class="col-md-5  col-lg-5">
                     <span class="align-center"><h5>Ask <text style="color:#573D7D;">politicians questions </text>
 that matter to you. Real Questions provides a platform for people to 
ask effective questions, and show the extent of user support for them.</h5></span>   
         </div>  
   </div>

    </section>
             
             <!-- 3 Steps -->
            <article>
                <!-- Features blocks -->

  <section id = "GetStarted"> 
   <h2 class="works"> GET STARTED </h2>
                <div class="row-fluid">
                    <div class="col-sm-4 col-md-4 col-lg-4 center-block">
                        <a href="user/register"> 
                        <span class="glyphicon glyphicon-pencil fontawesome scale-in"></span>
                        <h5>Sign Up</h5>
                        <p>Create your account and register.</p>
                        </a>
                    </div>
                    <div class="col-sm-4 col-lg-4 center-block">
                        <a href="talk">
                        <span class="glyphicon glyphicon-thumbs-up fontawesome scale-in"></span>
                        <h5>Get involved</h5>
                        <p>View, rate and talk about posted questions. </p>
                        </a>
                    </div>
                    <div class="col-sm-4 col-lg-4 center-block">
                        <a href="node/add/questions">
                        <span class="glyphicon glyphicon-comment fontawesome scale-in"></span>
                        <h5>Ask a question</h5>
                        <p>Start asking politicans questions and gain points.</p>
                        </a>
                    </div>
                </div>
        </section>
                        
        </article></div><!-- End Container --> 

        
<footer class="prefooter container">
	<div class="row clearfix">
		<div class="col-sm-4 col-md-4 column">
<a href="https://twitter.com/RealQuestionsAU"><img src=<?php print drupal_get_path('theme', 'realquestions'); ?>/icons/twitter.png" />@RealQuestionsAU</a>
    <script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
<a class="twitter-timeline" href="https://twitter.com/twitterapi" data-widget-id="401567508366254082" data-chrome="noheader nofooter noborders transparent" data-tweet-limit="2" data-border-color=="#cecece" data-aria-polite="polite" data-link-color="#fff" ></a>
		</div>

		<div class="col-sm-4 col-md-4 column social-icons"> 
            <a href="https://realquestions.net.au/RQFlyer2013.pdf" target="_blank"><img src="<?php print drupal_get_path('theme', 'realquestions'); ?>/images/flyericon_300.jpg" width="300" style="text-align: center;margin: 0 auto;display: block;"></a>

		</div>
		
		<div class="col-sm-4 col-md-4 column bloglist">
    <h3> Recent Blogs</h3>
		<?php echo views_embed_view('blogpreview', 'block'); ?>
    </div>
</footer>

<footer class="footer container">
	<div class="row clearfix">
		<div class="col-sm-6 col-md-6 column">
               <div class="region region-footer">
                 <?php print render($page['footer']); ?>
                </div>
		</div>
		
		<div class="social-media-icons col-sm-6 col-md-6 column">
				<a href="https://plus.google.com/108816489598835870606"><img src="<?php print drupal_get_path('theme', 'realquestions'); ?>/icons/gplus.png" /></a>
				<a href="https://www.facebook.com/RealQuestionsAustralia"><img src="<?php print drupal_get_path('theme', 'realquestions'); ?>/icons/facebook.png" /></a>
		<a href="https://www.linkedin.com/company/real-questions"><img src="<?php print drupal_get_path('theme', 'realquestions'); ?>/icons/linkedin.png" /></a>
		<a href="https://www.youtube.com/user/realquestionsoz"><img src="<?php print drupal_get_path('theme', 'realquestions'); ?>/icons/youtube.png" /></a>
        </div>
		
    </div>    
    
</footer>
