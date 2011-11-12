<?php

/**
 * Implementation of hook_node_link_style_default_styles().
 */
function commons_node_links_node_link_style_default_styles() {
  $export = array();

  $style = new stdClass;
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'simple_style';
  $style->settings = array(
    'links' => array(
      'comment_add' => array(
        'show' => 1,
        'title' => 'Comment',
        'element' => 'div',
        'class' => 'comment_clear_style',
        'apply_attributes' => 0,
        'custom_group' => '',
        'info' => array(
          'label' => 'Add comment',
        ),
        'weight' => '-50',
      ),
      'upload_attachments' => array(
        'show' => 1,
        'title' => '',
        'element' => '0',
        'class' => '',
        'apply_attributes' => 0,
        'custom_group' => 'remaining_links',
        'info' => array(
          'label' => 'Uploaded files',
        ),
        'weight' => '5',
      ),
      'notifications__' => array(
        'show' => 1,
        'group_element' => 'div',
        'group_class' => 'subscription_clear_style',
        'list_element' => 'custom',
        'list_class' => '',
        'element' => '0',
        'class' => '',
        'apply_attributes' => 0,
        'custom_group' => 'remaining_links',
        'info' => array(
          'label' => 'Subscription links',
          'group' => TRUE,
        ),
        'weight' => '1',
      ),
      'node_read_more' => array(
        'show' => 1,
        'title' => '',
        'element' => '0',
        'class' => '',
        'apply_attributes' => 0,
        'custom_group' => '',
        'info' => array(
          'label' => 'Read more link',
        ),
        'weight' => '4',
      ),
      'flag-bookmarks' => array(
        'show' => 1,
        'title' => '',
        'element' => '0',
        'class' => '',
        'apply_attributes' => 0,
        'custom_group' => 'remaining_links',
        'info' => array(
          'label' => 'Bookmarks flag (bookmarks)',
        ),
        'weight' => '3',
      ),
      'blog_usernames_blog' => array(
        'show' => 1,
        'title' => '',
        'element' => '0',
        'class' => '',
        'apply_attributes' => 0,
        'custom_group' => 'remaining_links',
        'info' => array(
          'label' => 'Blog author',
        ),
        'weight' => '2',
      ),
    ),
  );
  $export['simple_style'] = $style;

  return $export;
}
