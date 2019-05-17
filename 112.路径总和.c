/*
 * @lc app=leetcode.cn id=112 lang=c
 *
 * [112] 路径总和
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode *root, int sum) {

    if (!root)
        return false;
    else if (root->val == sum && root->left == NULL && root->right == NULL)
        return true;
    else if (root->left || root->right)
        return hasPathSum(root->left, sum - root->val) ||
               hasPathSum(root->right, sum - root->val);
    else
        return false;
}
