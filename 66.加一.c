/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize) {
    int *arr = (int *)malloc(sizeof(int) * (digitsSize + 1));
    for (int i = 0; i < digitsSize; i++) {
        arr[i] = digits[digitsSize - i - 1];
    }
    arr[digitsSize] = 0;
    arr[0] += 1;
    if (arr[0] == 10) {
        for (int i = 0; i < digitsSize; i++) {
            if (arr[i] == 10) {
                arr[i] = 0;
                arr[i + 1] += 1;
            }
        }
    }
    if (arr[digitsSize] > 0) {
        *returnSize = digitsSize + 1;
    } else {
        *returnSize = digitsSize;
    }

    for (int i = 0; i < *returnSize / 2; i++) {
        int tmp = arr[i];
        arr[i] = arr[*returnSize - i - 1];
        arr[*returnSize - i - 1] = tmp;
    }
    return arr;
}
