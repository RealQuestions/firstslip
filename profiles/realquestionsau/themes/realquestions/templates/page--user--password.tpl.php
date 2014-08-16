<?php include('header.inc') ?>
 		
<div class="container tophero">
        <h2 class="title"><?php print $title; ?></h2>
    <div class="row">
        <div class="col-sm-8 col-md-8 col-lg-8">
            <?php print $messages; ?>
        	<?php print render($page['content']); ?>	 
        </div>

    <div class="row">
        <div class="col-sm-4 col-md-4">
            <div class="thumbnail">
              <div class="caption">
                <h3>Not Registered ?</h3>
                <p>Create a new account.<br><br><small>Or try logging in again, if you remember your password.</small></p>
            <p>
            <?php print l(t('New account'), 'user/register', array('attributes' => array('class' => array('btn btn-default')), 'role' => array('button'))); ?>
            <?php print l(t('Login'), 'user/login', array('attributes' => array('class' => array('btn btn-default')), 'role' => array('button'))); ?>

            </p>
          </div>
        </div>
      </div>
    </div>

<!--             <a href="<?php print url('<front>'); ?>">&larr; Back <?php print $site_name; ?></a>-->    
</div>
</div>

<?php include('footer.inc') ?>
