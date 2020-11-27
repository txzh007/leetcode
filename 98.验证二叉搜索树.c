/*
 * @lc app=leetcode.cn id=98 lang=c
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool _isValidBST(struct TreeNode *root, long min, long max) {
  if (!root) {
    return true;
  }
  if (root->val <= min || root->val >= max) {
    return false;
  }
  // 左边的都小于 root->val  右边都大于 root->val
  return _isValidBST(root->left, min, root->val) &&
         _isValidBST(root->right, root->val, max);
}

bool isValidBST(struct TreeNode *root) {
  // 用LONG 的最大最小值来初始化
  return _isValidBST(root, LONG_MIN, LONG_MAX);
}

// @lc code=end
