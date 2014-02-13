(function($) {$(function() {
  var $comments = $('#comments');
  if (!$comments.size()) return;
  var count = $comments.find('.comment').size();
  // if (!count) return; // Do nothing when there is no comment.
  var label = Drupal.formatPlural(count, '1 comment', '@count comments');
  var $legend = $(document.createElement('legend')).html('<span class="fieldset-legend">' + label + '</span>');
  var fsetclass = 'comments collapsible' + (location.href.search(/#(comment|new)/) == -1 ? ' collapsed' : '');
  var $fset = $(document.createElement('fieldset')).addClass(fsetclass);
  var $fsetwrap = $(document.createElement('div')).addClass('fieldset-wrapper');
  $fset.insertBefore($comments).append($legend).append($fsetwrap);
  $fsetwrap.append($comments);
  var attach = function() {Drupal.behaviors.collapse.attach($fset.parent(), Drupal.settings);};
  Drupal.behaviors.collapse ? attach() : $.getScript(Drupal.settings.basePath + 'misc/collapse.js', attach);
});})(jQuery);
