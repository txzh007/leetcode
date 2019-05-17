/*
 * @lc app=leetcode.cn id=108 lang=c
 *
 * [108] 将有序数组转换为二叉搜索树
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
// };

struct TreeNode *_sortedArrayToBST(int *nums, int left, int right) {
    if (left > right)
        return NULL;
    int mid = (left + right) / 2;
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->val = nums[mid];
    node->left = _sortedArrayToBST(nums, left, mid - 1);
    node->right = _sortedArrayToBST(nums, mid + 1, right);
    return node;
}

struct TreeNode *sortedArrayToBST(int *nums, int numsSize) {
    return _sortedArrayToBST(nums, 0, numsSize - 1);
}
