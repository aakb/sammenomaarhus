<?php

function bobpolitik_preprocess_page(&$variables) {
  $block = module_invoke('system', 'block_view', 'main-menu');
  $variables['main_menu_block'] = render($block['content']);

  $block = module_invoke('system', 'block_view', 'user-menu');
  $variables['user_menu_block'] = render($block['content']);
}