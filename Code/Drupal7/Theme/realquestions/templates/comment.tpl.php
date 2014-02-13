<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $unpublished; ?>

  <?php print $picture; ?>

  <?php print render($title_prefix); ?>
  <?php if ($title || $new || $submitted): ?>
  <header<?php # print $header_attributes; ?>>
 

    <?php if ($new): ?>
      <em class="new"><?php print $new ?></em>
    <?php endif; ?>
  </header>
  <?php endif; ?>


  <div<?php print $content_attributes; ?>>
    <?php
      hide($content['links']);
      print render($content);
    ?>
  </div>
  <?php if ($signature): ?>
    <div class="user-signature"><?php print $signature ?></div>
  <?php endif; ?>

  <?php if ($links = render($content['links'])): ?>
    <nav<?php print $links_attributes; ?>>
   <div class="comment-submitted"><?php print "&#187;" . $submitted . "&#133;". $links ; ?></div>
   </nav>
  <?php endif; ?>

</article>
