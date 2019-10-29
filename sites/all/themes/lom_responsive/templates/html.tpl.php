<!DOCTYPE html>
<head>
<?php print $head; ?>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

<title><?php print $head_title; ?></title>
<!-- Bootstrap CSS -->
<?php print $styles; ?>
<?php print $scripts; ?>
<link   
<!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>

<?php if ($is_front): ?>
<body class="<?php print $classes; ?> "<?php print $attributes; ?>>
<?php else: ?>
<body class="<?php print $classes; ?> body-no-image"<?php print $attributes; ?>>
<?php endif ?>
    
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>