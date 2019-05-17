/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
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

bool isBalanced(struct TreeNode *root) {
    if (root == NULL)
        return true;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (left - right > 1 || right - left > 1)
        return false;
    return isBalanced(root->left) && isBalanced(root->right);
}
