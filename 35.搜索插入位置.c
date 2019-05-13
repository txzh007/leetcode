/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

int searchInsert(int *nums, int numsSize, int target) {
    if (nums[0] > target || nums[0] == target)
        return 0;
    if (nums[numsSize - 1] < target)
        return numsSize;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == target)
            return i;
        if (nums[i] < target && nums[i + 1] >= target)
            return i + 1;
    }
    return numsSize;
}
