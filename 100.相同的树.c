/*
 * @lc app=leetcode.cn id=100 lang=c
 *
 * [100] 相同的树
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode *p, struct TreeNode *q) {

  if (!p && !q) { // 都不存在 真
    return true;
  }

  if ((p && !q) || (!p && q)) { //若有一个不存在 假
    return false;
  } else if (p->val != q->val) { //值不通 假
    return false;
  } else {
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
  }
  return false;
}
