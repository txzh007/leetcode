/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int **generate(int numRows, int *returnSize, int **returnColumnSizes) {
    *returnSize = numRows;
    int **result = (int **)malloc(sizeof(int) * numRows);
    for (int i = 1; i <= numRows; i++) {
        *result[i - 1] = (int *)malloc(sizeof(int) * i);
        *returnColumnSizes = i;
    }
    for (int i = 0; i <= numRows; i++) {
        for (int j = 0; j < i; j++) {
            if (j == i || j == 0) {
                result[i][j] = 1;
            } else {
                result[i][j] = result[i][j - 1] + result[i][j - 1];
            }
        }
    }

    return result;
}
