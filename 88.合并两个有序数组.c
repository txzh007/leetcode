/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
    while (m + n) {
        if (n == 0) {
            nums1[n + m - 1] = nums1[m - 1];
            m--;
        } else if (m == 0) {
            nums1[n + m - 1] = nums2[n - 1];
            n--;
        } else if (nums1[m - 1] < nums2[n - 1]) {
            nums1[n + m - 1] = nums2[n - 1];
            n--;
        } else {
            nums1[n + m - 1] = nums1[m - 1];
            m--;
        }
    }
}
