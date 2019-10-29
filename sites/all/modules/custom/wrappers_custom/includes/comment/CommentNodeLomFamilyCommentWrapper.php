<?php
/**
 * @file
 * class CommentNodeLomFamilyCommentWrapper
 */

class CommentNodeLomFamilyCommentWrapper extends WdCommentWrapper {

  protected $entity_type = 'comment';
  private static $bundle = 'comment_node_lom_family';

  /**
   * Create a new comment_node_lom_family comment.
   *
   * @param array $values
   * @param string $language
   * @return CommentNodeLomFamilyCommentWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'comment', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new CommentNodeLomFamilyCommentWrapper($entity_wrapper->value());
  }

  /**
   * Sets comment_body
   *
   * @param $value
   *
   * @return $this
   */
  public function setCommentBody($value, $format = NULL) {
    $this->setText('comment_body', $value, $format);
    return $this;
  }

  /**
   * Retrieves comment_body
   *
   * @return mixed
   */
  public function getCommentBody($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('comment_body', $format, $markup_format);
  }

}
