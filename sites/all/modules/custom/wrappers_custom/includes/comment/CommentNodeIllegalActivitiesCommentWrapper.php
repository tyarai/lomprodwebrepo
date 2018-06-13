<?php
/**
 * @file
 * class CommentNodeIllegalActivitiesCommentWrapper
 */
module_load_include('php','wrappers_custom','includes/comment/WdCommentWrapper');
class CommentNodeIllegalActivitiesCommentWrapper extends WdCommentWrapper {

  protected $entity_type = 'comment';
  private static $bundle = 'comment_node_illegal_activities';

  /**
   * Create a new comment_node_illegal_activities comment.
   *
   * @param array $values
   * @param string $language
   * @return CommentNodeIllegalActivitiesCommentWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'comment', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new CommentNodeIllegalActivitiesCommentWrapper($entity_wrapper->value());
  }

}