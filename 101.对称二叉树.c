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

    if ((left && !right) || (!left && right))
        return false;

    if (left->val == right->val)
        return _isSymmetric(left->left, right->right) &&
               _isSymmetric(left->right, right->left);
    else
        return false;
}

bool isSymmetric(struct TreeNode *root) {
    if (!root)
        return true;
    else
        return _isSymmetric(root->left, root->right);
}
