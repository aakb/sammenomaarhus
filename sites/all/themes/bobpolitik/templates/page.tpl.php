<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<div class="menu-overlay js-menu-toggle js-hamburger-menu-overlay"></div>
<div class="nav-toggle js-menu-toggle">
  <span></span>
  <span></span>
  <span></span>
  <span></span>
</div>
<div id="page">
  <nav class="hamburger-menu js-hamburger-menu">
    <div class="hamburger-menu--inner">
      <div class="hamburger-menu--links">
        <div class="user-links">
          <?php if ($user_menu_block) : ?>
            <?php print render($user_menu_block); ?>
          <?php else : ?>
            <ul class="menu">
              <li class="first"><a href="/user">Login</a></li>
              <li class="last"><a href="/user/register">Register</a></li>
            </ul>
          <?php endif; ?>
        </div>
        <?php if ($main_menu_block): ?>
          <?php print render($main_menu_block); ?>
        <?php endif; ?>
      </div>
    </div>
  </nav>

  <div class="header--wrapper">
    <header class="header" id="header" role="banner">
      <div class="header--inner">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
        <?php endif; ?>

        <?php if ($site_name || $site_slogan): ?>
          <div class="header__name-and-slogan" id="name-and-slogan">
            <?php if ($site_name): ?>
              <h1 class="header__site-name" id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>

            <?php if ($site_slogan): ?>
              <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
            <?php endif; ?>
          </div>
        <?php endif; ?>
        <?php if ($secondary_menu): ?>
          <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
            <?php print render($page['secondary_navigation']); ?>
          </nav>
        <?php endif; ?>
        <?php if ($main_menu_block): ?>
          <div class="main-menu">
            <?php print render($main_menu_block); ?>
          </div>
        <?php endif; ?>
        <?php print render($page['header']); ?>
      </div>
    </header>
  </div>
  <div id="main">

    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>

      <?php print $feed_icons; ?>
    </div>

    <?php
    // Render the sidebars to see if there's anything in them.
    $sidebar_first  = render($page['sidebar_first']);
    $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
