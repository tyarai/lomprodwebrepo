<nav class="navbar navbar-expand-sm header-bg">
    <div class="container">
      <a class="navbar-brand" href="<?php print base_path();?>"><img src="<?php print base_path();?>sites/default/files/logo.png" alt="Lemurs Of Madagascar" class="img-fluid" width="100" ></a>
      <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>

      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav mr-auto">

          <?php if ($logged_in): ?>   
            <li class="nav-item lom-nav">
                <a class="nav-link" href="<?php print base_path();?>introduction">Introduction</a>
            </li>
            <li class="nav-item lom-nav">
                <a class="nav-link" href="<?php print base_path();?>public_sightings">Public sightings</a>
            </li>
            <li class="nav-item lom-nav">
              <a class="nav-link " href="<?php print base_path();?>sightings">My sightings</a>
            </li>
            <li class="nav-item lom-nav">
              <a class="nav-link " href="<?php print base_path();?>lifelist">My lemur life list</a>
            </li>
            <li class="nav-item lom-nav">
              <a class="nav-link" href="<?php print base_path();?>add-sighting">New sighting</a>
            </li>
            
          <?php else: ?>
            <li class="nav-item lom-nav">
              <a class="nav-link " href="<?php print base_path();?>public_sightings">Public sightings</a>
            </li>
            <li class="nav-item lom-nav">
              <a class="nav-link" href="<?php print base_path();?>lommember/login">Login</a>
            </li>
            <li class="nav-item lom-nav">
              <a class="nav-link" href="<?php print base_path();?>lommember/register">Register</a>
            </li>
          <?php endif; ?>
        </ul>
        
      </div>

    </div>
</nav>  

