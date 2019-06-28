/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int binarySearch(int *nums, int left, int right, int target) {
    int mid = (left + right) / 2;
    if (right < left) {
        return -1;
    } else if (nums[mid] > target) {
        return binarySearch(nums, left, right - 1, target);
    } else if (nums[mid] < target) {
        return binarySearch(nums, left + 1, right, target);
    } else {
        return mid;
    }
}
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize) {
    int *result = (int *)malloc(sizeof(int) * 2);
    *returnSize = 0;
    for (int i = 0; i < numbersSize && numbers[i] <= target; i++) {
        if (i < (numbersSize - 1) && numbers[i] == numbers[i + 1] &&
            2 * numbers[i] != target) {
            continue;
        }
        result[0] = i + 1;
        result[1] =
            binarySearch(numbers, i + 1, numbersSize - 1, target - numbers[i]) +
            1;
        if (result[1] != 0) {
            *returnSize = 2;
            return result;
        }
    }

    return result;
}
