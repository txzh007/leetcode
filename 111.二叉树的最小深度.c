/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int min(int a, int b) { return a < b ? a : b; }
int minDepth(struct TreeNode *root) {
    if (!root)
        return 0;
    int left = minDepth(root->left) + 1;
    int right = minDepth(root->right) + 1;
    return left > right ? right > 1 ? right : left : left > 1 ? left : right;
}
