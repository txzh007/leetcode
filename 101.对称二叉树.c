/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool _isSymmetric(struct TreeNode *left, struct TreeNode *right) {
  if (left == NULL && right == NULL)
    return true;

  if ((left && !right) || (!left && right) || (left->val != right->val))
    return false;
  // 左的左 和 右的右，右的左 和 左的右 比较
  return _isSymmetric(left->left, right->right) &&
         _isSymmetric(left->right, right->left);
}
bool isSymmetric(struct TreeNode *root) {
  if (!root)
    return true;
  else
    return _isSymmetric(root->left, root->right);
}
