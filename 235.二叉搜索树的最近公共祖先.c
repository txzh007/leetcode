/*
 * @lc app=leetcode.cn id=235 lang=c
 *
 * [235] 二叉搜索树的最近公共祖先
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p,
                                      struct TreeNode *q) {
  if (root == NULL)
    return NULL;
  struct TreeNode *node = root;
  while (node) {
    if (p->val < node->val && q->val < node->val) {
      node = node->left;
      continue;
    } else if (p->val > node->val && q->val > node->val) {
      node = node->right;
      continue;
    }

    return node;
  }
  return node;
}
