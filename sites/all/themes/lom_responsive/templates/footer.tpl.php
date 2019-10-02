<footer class="page-footer font-small footer-bg"> 
    
    <div >
        
        <div class="container">
            <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third'] || $page['footer_fourth']): ?> 
              <div id="bottom" class="container">
              <?php $botomwid = "four"; $bottom = ((bool) $page['footer_first'] + (bool) $page['footer_second'] + (bool) $page['footer_third'] + (bool) $page['footer_fourth']);
                switch ($bottom) { 
                  case 1: $botomwid = "sixteen"; break; case 2: $botomwid = "eight"; break;
                  case 3: $botomwid = "five"; break; case 4: $botomwid = "four";
                } ?>
                <?php if ($page['footer_first']): ?>
                <div class="<?php print $botomwid; ?> columns botblck"><?php print render($page['footer_first']); ?></div>
                <?php endif; ?>
                <?php if ($page['footer_second']): ?>
                <div class="<?php print $botomwid; ?> columns botblck"><?php print render($page['footer_second']); ?></div>
                <?php endif; ?>
                <?php if ($page['footer_third']): ?>
                <div class="<?php print $botomwid; ?> columns botblck"><?php print render($page['footer_third']); ?></div>
                <?php endif; ?>
                <?php if ($page['footer_fourth']): ?>
                <div class="<?php print $botomwid; ?> columns botblck"><?php print render($page['footer_fourth']); ?></div>
                <?php endif; ?>
                </div>
            <?php endif; ?>
        </div>

        <div  class="container">
            <div class="credit"><?php print t('Copyright'); ?> &copy; <?php echo date("Y"); ?>, Lemurs of Madagascar <br/> </div>
            <div class="clear"></div>
        </div>
        
    </div>
    
</footer> 