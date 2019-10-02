<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<?php include 'navbar.tpl.php'; ?>

<div class="container">
    
    
    <div class="container" id="content-contain">

        <?php if ($is_front): ?>
        
          <div class="container">
            <?php if (theme_get_setting('slideshow_display', 'responsive')): ?>
              <!-- Slides -->
              <?php 
              $url1 = check_plain(theme_get_setting('slide1_url','responsive')); $cap1 = check_markup(theme_get_setting('slide1_desc','responsive'), 'full_html');
              $url2 = check_plain(theme_get_setting('slide2_url','responsive')); $cap2 = check_markup(theme_get_setting('slide2_desc','responsive'), 'full_html');
              $url3 = check_plain(theme_get_setting('slide3_url','responsive')); $cap3 = check_markup(theme_get_setting('slide3_desc','responsive'), 'full_html');
              ?>
             <div class="flexslider">
              <ul class="slides">
                <li>
                  <a href="<?php print url($url1); ?>"><img src="<?php print base_path() . drupal_get_path('theme', 'responsive') . '/images/slide-image-1.jpg'; ?>"/></a>
                  <?php if ($cap1): ?> <div class="flex-caption"> <h3> <?php print $cap1; ?> </h3> </div>  <?php endif; ?>
                </li>
                <li>
                  <a href="<?php print url($url2); ?>"><img src="<?php print base_path() . drupal_get_path('theme', 'responsive') . '/images/slide-image-2.jpg'; ?>"/></a>
                  <?php if ($cap2): ?> <div class="flex-caption"> <h3> <?php print $cap2; ?> </h3> </div> <?php endif; ?>
                </li>
                <li>
                  <a href="<?php print url($url3); ?>"><img src="<?php print base_path() . drupal_get_path('theme', 'responsive') . '/images/slide-image-3.jpg'; ?>"/></a>
                  <?php if ($cap3): ?> <div class="flex-caption"> <h3> <?php print $cap3; ?> </h3> </div> <?php endif; ?>
                </li>
              </ul>
              </div>
             <?php endif; ?>

              <?php if ($page['front_welcome']): ?>
                <div id="front-welcome"> <?php print render($page['front_welcome']); ?></div>
              <?php endif; ?>
            </div>
        
        <?php endif; ?>
  
    
  
  <?php if ($page['header']): ?>
   <div id="header" class="sixteen columns">
    <?php print render($page['header']); ?>
   </div>
   <div class="clear"></div>
   <?php endif; ?>
  
 <?php if($page['sidebar_first']) { $contentwid= "eleven"; } else { $contentwid= "sixteen"; } ?>
 
 <div id="content" class="container">
  <div class="row">
      <div class="container col-md-8">
          <?php print render($page['content']); ?>
      </div>
      <div class="container col-md-2">
          <?php print render($page['sidebar_first']); ?>
      </div>
  </div>
 </div>
   
  <div class="clear"></div>
  
  <?php if ($page['footer']): ?>
   <div id="foot" class="sixteen columns">
     <?php print render($page['footer']) ?>
   </div>
   <?php endif; ?>
  
</div>
 
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
  
    <div id="copyright" class="container">
        <div class="credit"><?php print t('Copyright'); ?> &copy; <?php echo date("Y"); ?>, Lemurs of Madagascar <br/> </div>
        <div class="clear"></div>
    </div>
    
</div>