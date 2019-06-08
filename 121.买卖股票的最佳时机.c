/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

int maxProfit(int *prices, int pricesSize) {
    int best = 0, min = prices[0];
    if (pricesSize > 1) {
        for (int i = 1; i < pricesSize; i++) {
            int tmp = prices[i] - min;
            best = best > tmp ? best : tmp;
            if (prices[i] < min)
                min = prices[i];
        }
        return best;
    } else {
        return 0;
    }
}
