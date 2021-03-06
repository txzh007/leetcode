/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (36.31%)
 * Total Accepted:    60.3K
 * Total Submissions: 162K
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 *
 * 有效字符串需满足：
 *
 *
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 *
 *
 * 注意空字符串可被认为是有效字符串。
 *
 * 示例 1:
 *
 * 输入: "()"
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: "()[]{}"
 * 输出: true
 *
 *
 * 示例 3:
 *
 * 输入: "(]"
 * 输出: false
 *
 *
 * 示例 4:
 *
 * 输入: "([)]"
 * 输出: false
 *
 *
 * 示例 5:
 *
 * 输入: "{[]}"
 * 输出: true
 *
 */
// #include <stdlib.h>
// #include <string.h>
// typedef enum { true, false } bool;
bool isValid(char *s) {
  int index = 0; // 充当栈指针
  char *stark =
      (char *)malloc(sizeof(char) * (strlen(s) + 1)); // 创建一个char数组 充当栈
  for (int i = 0; i < strlen(s); i++) {
    switch (s[i]) {
    case '}':
      if (stark[index] != '{')
        return false;
      else {
        index--;
      }
      break;
    case ']':
      if (stark[index] != '[')
        return false;
      else {
        index--;
      }
      break;
    case ')':
      if (stark[index] != '(')
        return false;
      else {
        index--;
      }
      break;

    default:
      stark[++index] = s[i];
      break;
    }
  }
  if (index > 0)
    return false;
  else
    return true;
}
