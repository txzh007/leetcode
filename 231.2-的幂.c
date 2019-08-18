/*
 * @lc app=leetcode.cn id=231 lang=c
 *
 * [231] 2的幂
 */

bool isPowerOfTwo(int n) {
  if (n == 1) {
    return true;
  } else if (n % 2 == 1) {
    return false;
  } else {
    while (n % 2 == 0 && n) {
      if (n == 2) {
        return true;
      } else {
        n = n / 2;
      }
    }
  }

  return false;
}
