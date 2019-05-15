/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode *root) {

    if (root == NULL)
        return 0;
    else {
        int lt = maxDepth(root->left);
        int rt = maxDepth(root->right);

        if (lt > rt)
            return lt + 1;
        else
            return rt + 1;
    }
}
