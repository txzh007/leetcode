/*
 * @lc app=leetcode.cn id=202 lang=c
 *
 * [202] 快乐数
 */

int happyNum(int n) {
  int res = 0;
  while (n) {
    int m = n % 10;
    res += m * m;
    n = n / 10;
  }
  return res;
}

bool isHappy(int n) {
  int arr[1000];
  arr[0] = n;
  int len = 0;
  while (1) {
    int tmp = happyNum(arr[len++]);
    if (tmp == 1) {
      return true;
    } else {
      arr[len] = tmp;
    }

    for (int i = 0; i < len; i++) {
      if (tmp == arr[i]) {
        return false;
      }
    }
  }
  return false;
}
