<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="article-inner">

    <?php print $unpublished; ?>

    <?php print render($title_prefix); ?>
    <?php if ($title || $display_submitted): ?>
      <header>
        <?php if ($title): ?>
          <h1<?php print $title_attributes; ?>>
            <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a>
          </h1>
        <?php endif; ?>

        <?php if ($display_submitted): ?>
          <p class="submitted"><?php print $submitted; ?></p>
        <?php endif; ?>
      </header>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div<?php print $content_attributes; ?>>
    <?php print $user_picture; ?>
    <?php
      hide($content['comments']);
      hide($content['links']);
      print 'The scorecard provides a summary comparison of politicians scores.  Note that the "average answers" is the average satisfaction or popularity score for all answers given by a politician. Their total score is calculated by multiplying the number of answers and the average answer score. The table shows the number of questions asked of each office-holder, the number of comments made, the number of answers available, and the average scores on their answers. It then combines these results into a total score.';

      print theme('table', array('header' => $output['header'], 'rows' => $output['rows'] ));


      print $output['content'];     
    ?>
    </div>

    <?php if (!empty($content['links'])): ?>
      <nav class="clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>

  </div>
</article>
