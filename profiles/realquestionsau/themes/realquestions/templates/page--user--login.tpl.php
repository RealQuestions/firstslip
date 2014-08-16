<?php include('header.inc') ?>

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
                <p>Create a new account.<br><br><small>*Alternately, 'Recover Password' will mail a link to your pre-registered Email Address, allowing you to reset your password</small></p>
            <p>
            <?php print l(t('New account'), 'user/register', array('attributes' => array('class' => array('btn btn-default')), 'role' => array('button'))); ?>
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
