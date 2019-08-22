/*
 * @lc app=leetcode.cn id=204 lang=c
 *
 * [204] 计数质数
 */

int countPrimes(int n) {
  int count = 0;
  for (int i = 2; i  < n; i++) {
    bool flag = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0 || i % 2 == 0) {
        flag = false;
        break;
      }
    }
    if (flag) {
      count++;
    }
  }
  return count;
}
