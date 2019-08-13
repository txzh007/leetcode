/*
 * @lc app=leetcode.cn id=198 lang=c
 *
 * [198] 打家劫舍
 */

int max(int a, int b) { return a > b ? a : b; }
int rob(int *nums, int numsSize) {
    if (numsSize == 1)
        return nums[0];
    if (numsSize > 2)
        nums[2] += nums[0];
    for (int i = 3; i < numsSize; i++) {
        nums[i] += max(nums[i - 3], nums[i - 2]);
    }

    return max(nums[numsSize - 2], nums[numsSize - 1]);
}
