<section id="comments" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php if ($content['comments'] && $node->type != 'forum'): ?>
    <?php #print render($title_prefix); ?>
    <h2 class="title">
      <?php #print format_plural($node->comment_count, '1 Comment', '@count Comments'); ?>
    </h2>
    <?php #print render($title_suffix); ?>
  <?php endif; ?>
  <?php 
	
	#print render($content['comments']); 
	$texttitle = format_plural($node->comment_count, '1 Comment', '@count Comments');
	$collapsed_content = render($content['comments']);
	print theme('ctools_collapsible', array('handle' => $texttitle , 'content' => $collapsed_content, 'collapsed' => TRUE));
   ?>
  <?php if ($content['comment_form']): ?>
    <h2 class="title comment-form"><?php print t('Add new comment'); ?></h2>
    <?php print render($content['comment_form']); ?>
  <?php endif; ?>

</section>
