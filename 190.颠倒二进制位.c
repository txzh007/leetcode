/*
 * @lc app=leetcode.cn id=190 lang=c
 *
 * [190] 颠倒二进制位
 */
typedef unsigned int uint32_t;
uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    int count = 32;
    while (count--) {
        res = res * 2 + n % 2;
        n = n / 2;
    }
    return res;
}
