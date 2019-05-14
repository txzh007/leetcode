/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

int climbStairs(int n) {
    if (n <= 2)
        return n;
    int *memo = (int *)malloc(sizeof(int) * (n));
    memo[0] = 1;
    memo[1] = 2;
    for (int i = 2; i < n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n - 1];
}
