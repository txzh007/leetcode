/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

int removeElement(int *nums, int numsSize, int val) {
    int offset = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == val) {
            offset++;
        } else if (offset > 0) {
            nums[i - offset] = nums[i];
        }
    }
    return numsSize - offset;
}
