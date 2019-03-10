/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 *
 * https://leetcode-cn.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (56.05%)
 * Total Accepted:    70.1K
 * Total Submissions: 125K
 * Testcase Example:  '121'
 *
 * 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 *
 * 示例 1:
 *
 * 输入: 121
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: -121
 * 输出: false
 * 解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
 *
 *
 * 示例 3:
 *
 * 输入: 10
 * 输出: false
 * 解释: 从右向左读, 为 01 。因此它不是一个回文数。
 *
 *
 * 进阶:
 *
 * 你能不将整数转为字符串来解决这个问题吗？
 *
 */
// typedef enum { false, true } bool;  // 自定义bool枚举类型 让vscode不报错
bool isPalindrome(int x) {
  if (x < 0) {
    return false;
  } else if (x < 10) {
    return true;
  } else {
    char *ch = (char *)malloc(sizeof(char) * 10);
    int length = 0;
    while (x >= 1) {
      ch[length] = x % 10;
      x = x / 10;
      length++;
    }
    for (int i = 0; i < length / 2; i++) {
      if (ch[i] != ch[length - 1 - i]) return false;
    }

    return true;
  }
}
