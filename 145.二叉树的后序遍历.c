/*
 * @lc app=leetcode.cn id=145 lang=c
 *
 * [145] 二叉树的后序遍历
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
void *_postorderTraversal(struct TreeNode *root, int *returnSize) {
  if (root == NULL) {
    return;
  }
  _postorderTraversal(root->left, returnSize);
  _postorderTraversal(root->right, returnSize);
  result[(*returnSize)++] = root->val;
}
int *postorderTraversal(struct TreeNode *root, int *returnSize) {
  result = malloc(sizeof(int) * 1024);
  *returnSize = 0;
  _postorderTraversal(root, returnSize);
  return result;
}
// @lc code=end
