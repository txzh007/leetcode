/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */
// #include "limits.h"
int max(int a, int b) { return a > b ? a : b; }

int maxSubArray(int *nums, int numsSize) {
    if (numsSize == 1)
        return nums[0];
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        if (sum < nums[i])
            sum = nums[i];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
