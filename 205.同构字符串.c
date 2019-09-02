/*
 * @lc app=leetcode.cn id=205 lang=c
 *
 * [205] 同构字符串
 *
 * https://leetcode-cn.com/problems/isomorphic-strings/description/
 *
 * algorithms
 * Easy (45.59%)
 * Likes:    131
 * Dislikes: 0
 * Total Accepted:    16.1K
 * Total Submissions: 35.1K
 * Testcase Example:  '"egg"\n"add"'
 *
 * 给定两个字符串 s 和 t，判断它们是否是同构的。
 *
 * 如果 s 中的字符可以被替换得到 t ，那么这两个字符串是同构的。
 *
 * 所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。两个字符不能映射到同一个字符上，但字符可以映射自己本身。
 *
 * 示例 1:
 *
 * 输入: s = "egg", t = "add"
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: s = "foo", t = "bar"
 * 输出: false
 *
 * 示例 3:
 *
 * 输入: s = "paper", t = "title"
 * 输出: true
 *
 * 说明:
 * 你可以假设 s 和 t 具有相同的长度。
 *
 */

bool isIsomorphic(char *s, char *t) {
  char memo[256];
  for (int i = 0; i < 256; i++) {
    memo[i] = -1;
  }
  for (int i = 0; i < strlen(s); i++) {
    if (memo[s[i]] == -1) {
      for (int j = 0; j < 256; j++) { //防止出现多对一的关系
        if (memo[j] == t[i])
          return false;
      }
      memo[s[i]] = t[i];
    } else {
      if (memo[s[i]] != t[i])
        return false;
    }
  }
  return true;
}
