<?php include('header-front.inc') ?>


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
     <div class="col-sm-6 col-lg-6" style="background-color:black;text-align:center">
            <iframe width="330" height="330" src="//www.youtube.com/embed/RHHwiY39byg?rel=0" frameborder="0" allowfullscreen></iframe>
       </div>                   
         <div class="col-sm-5  col-lg-5">
                     <span class="align-center"><h5>Ask <text style="color:#573D7D;">politicians questions </text>
 that matter to you. Real Questions provides a platform for people to 
ask effective questions, and show the extent of user support for them.</h5></span>   
         </div>  
  <section id="getstartedachor"> 
 </section>

   </div>  
    </section>
</div><!-- End Container -->              
   
             <!-- 3 Steps -->
  <div class="container centered" id="GetStarted">

      <h2 class="works"> GET STARTED </h2>
      <div class="row-fluid">
      <div class="col-sm-4 col-md-4 col-lg-4 centered">
        <a href="content/top-questions">
        <span class="glyphicon glyphicon-star fontawesome scale-in"></span>
        <h5>Top Questions</h5>
        <p>See the top questions others are asking</p>
        </a>
      </div>
      <div class="col-sm-4 col-lg-4 center-block centered">
        <a href="talk">
        <span class="glyphicon glyphicon-comment fontawesome scale-in"></span>
        <h5>Talk Page</h5>
        </a>
        <p>Browse questions by topic or by politician</p>
      </div>
      <div class="col-sm-4 col-lg-4 center-block centered">
        <a href="user/register"> 
        <span class="glyphicon glyphicon-user fontawesome scale-in"></span>
        <h5>Sign Up</h5>
        <p>Create your account, then rate and comment on questions</p>
        </a>
      </div>
      </div>
</div>

<div class="prefooter container">
	<div class="row clearfix">
		<div class="col-sm-4 col-md-4 column">
<a href="https://twitter.com/RealQuestionsAU"><img src="<?php $GLOBALS['base_url'] . '/'. print drupal_get_path('theme', 'realquestions'); ?>/icons/twitter.png" />@RealQuestionsAU
<img src="http://placehold.it/300x300&text=twitter+feed+placeholder+widget"></a>
		</div>

		<div class="col-sm-4 col-md-4 column social-icons"> 
<h3>Real Question Flyer</h3>
<a href="https://realquestions.net.au/RQFlyer2013.pdf" target="_blank"><img src="http://placehold.it/300x300&text=+placeholder+widget"></a>
		</div>
		
		<div class="col-sm-4 col-md-4 column bloglist">
       <h3> Recent Blogs</h3>
		<?php echo views_embed_view('blogpreview', 'block'); ?>
    </div>
</div>

<?php include('footer.inc') ?>
