<?php

print "PHP: ".  $output['textvalue'];
print "<br>PHP: ".  $output['sampleinfo']; 

print "<br><br>In a Utopian world, a js alert will popup with converted data";

drupal_add_js(array('var1' => $output['textvalue'], 'var2' => $output['sampleinfo']), 'setting');
?>

<script>
  alert(Drupal.settings.var1);
  alert(Drupal.settings.var2);
</script>
