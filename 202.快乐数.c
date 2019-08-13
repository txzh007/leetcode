/*
 * @lc app=leetcode.cn id=202 lang=c
 *
 * [202] 快乐数
 */

bool isHappy(int n) {
  int res = 0;
  while (n) {
    int m = n % 10;
    res += m * m;
    n = n / 10;
  }
  if (res == 1)
    return true;
  else
    return isHappy(res);
}
