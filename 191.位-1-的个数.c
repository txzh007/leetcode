/*
 * @lc app=leetcode.cn id=191 lang=c
 *
 * [191] 位1的个数
 */
int hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        if (n % 2 == 1)
            count++;
        n = n / 2;
    }
    return count;
}
