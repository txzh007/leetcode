/*
 * @lc app=leetcode.cn id=122 lang=c
 *
 * [122] 买卖股票的最佳时机 II
 */

int maxProfit(int *prices, int pricesSize) {
    int max = 0;
    for (int i = 1; i < pricesSize; i++) {
        int tmp = prices[i] - prices[i - 1];
        max += tmp > 0 ? tmp : 0;
    }
    return max;
}
