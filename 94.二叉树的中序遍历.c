/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
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

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *result;
int *_inorderTraversal(struct TreeNode *root, int *returnSize) {
  if (root == NULL) {
    return;
  }
  _inorderTraversal(root->left, returnSize);
  result[(*returnSize)++] = root->val;
  _inorderTraversal(root->right, returnSize);
  return 1;
}
int *inorderTraversal(struct TreeNode *root, int *returnSize) {
  result = malloc(sizeof(int) * 2048);
  *returnSize = 0;
  _inorderTraversal(root, returnSize);
  return result;
}
// @lc code=end
