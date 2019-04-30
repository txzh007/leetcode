/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (31.78%)
 * Total Accepted:    56.3K
 * Total Submissions: 174.9K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 *
 * 如果不存在公共前缀，返回空字符串 ""。
 *
 * 示例 1:
 *
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 *
 *
 * 示例 2:
 *
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 *
 *
 * 说明:
 *
 * 所有输入只包含小写字母 a-z 。
 *
 */
char *longestCommonPrefix(char **strs, int strsSize) {
    int maxLen = strlen(strs[0]);
    char *result;
    for (int i = 0; i < maxLen; i++) {

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                printf("i=%d\n", i);
                result = (char *)malloc(sizeof(char) * i);
                printf("res length is %d\n", strlen(result));
                for (int k = 0; k < i; k++) {
                    result[k] = strs[0][k];
                }
                result[i] = '\0';
                return result;
            }
        }
    }
    return result;
}
