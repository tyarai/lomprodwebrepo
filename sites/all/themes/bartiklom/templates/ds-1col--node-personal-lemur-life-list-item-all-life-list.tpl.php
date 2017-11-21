<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<article class="item-list-lemur-life">
  <div class="basic_information">
     <h2>
       <?php 
        //print ($node->name != '') ? $node->name : 'Anonymous' ; 
        //print '<span class="text"> seen </span>';
        print '<span class="speciesnames">' . $node->title . '</span>';
        print '<span class="text"> by </span><span class="username">';
        print ($node->name != '') ? $node->name : 'Anonymous';
        print '</span>';
       ?>
     </h2>
     <p>
       <span class="legend">Species:</span>
       <?php
          $species = $node->field_species['und'][0]['entity']->title;
          print master_list_setup_scientific_replace($species);
       ?>
     </p>
     <p>
       <span class="legend">Date :</span> <?php print $node->field_date['und'][0]['value']; ?>
     </p>
     <p>
       <span class="legend">Locality :</span> <?php print $node->field_locality['und'][0]['value']; ?>
     </p>  
     <p>
       <span class="legend">Photo :</span>
       <?php print render($content['field_lemur_photo']);?>
     </p>  
  </div>
  <div class="comment_wrapper_element">
    <?php 
      print render($content['comments']);
    ?>
  </div>
</article>  
