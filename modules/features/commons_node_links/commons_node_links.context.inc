<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function commons_node_links_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'simple_style_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
        'discussion' => 'discussion',
        'document' => 'document',
        'event' => 'event',
        'group' => 'group',
        'notice' => 'notice',
        'page' => 'page',
        'poll' => 'poll',
        'simpletest_example' => 'simpletest_example',
        'wiki' => 'wiki',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'node_link_style' => 'simple_style',
  );
  $context->condition_mode = 0;

  $export['simple_style_context'] = $context;
  return $export;
}
