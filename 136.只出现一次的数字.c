/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

int singleNumber(int *nums, int numsSize) {
    int single = 0;
    for (int i = 0; i < numsSize; i++) {
        single ^= nums[i];
    }
    return single;
}
