/*
 * @lc app=leetcode.cn id=172 lang=c
 *
 * [172] 阶乘后的零
 */

int trailingZeroes(int n) {
    int res = 0;
    while (n) {
        res += n /= 5;
    }

    return res;
}
