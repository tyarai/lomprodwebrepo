<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<article class="item-list-lemur-life publication-list">
  <div class="basic_information">
     <h2>
       <?php 
        print '<span class="username">';
        print ($node->name != '') ? $node->name : 'Anonymous';
        print '</span><span class="text"> says on ' . date('Y-m-d h:i:s', $node->created) . ' :</span>';
       ?>
     </h2>
    <p>
       <?php print render($content['body']); ?> 
    </p>
     <p>
       <span class="legend">Species:</span>
       <?php
          $species = $node->field_associated_species['und'][0]['entity']->title;
          print master_list_setup_scientific_replace($species);
       ?>
     </p>
     <p>
       <span class="legend">Photo :</span>
       <?php print render($content['field_photo']);?>
     </p>  
  </div>
  <div class="comment_wrapper_element">
    <?php 
      print render($content['comments']);
    ?>
  </div>
</article>  
