/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

int mySqrt(int x) {
    long long i = 0;
    while (++i) {
        if (i * i > x)
            return i - 1;
    }
    return i;
}
