/*
 * @lc app=leetcode.cn id=38 lang=c
 *
 * [38] 报数
 *
 * https://leetcode-cn.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (47.96%)
 * Total Accepted:    25.6K
 * Total Submissions: 52.6K
 * Testcase Example:  '1'
 *
 * 报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。其前五项如下：
 *
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 *
 *
 * 1 被读作  "one 1"  ("一个一") , 即 11。
 * 11 被读作 "two 1s" ("两个一"）, 即 21。
 * 21 被读作 "one 2",  "one 1" （"一个二" ,  "一个一") , 即 1211。
 *
 * 给定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。
 *
 * 注意：整数顺序将表示为一个字符串。
 *
 *
 *
 * 示例 1:
 *
 * 输入: 1
 * 输出: "1"
 *
 *
 * 示例 2:
 *
 * 输入: 4
 * 输出: "1211"
 *
 *
 */
char *countAndSay(int n) {
    if (n == 1)
        return "1";
    else {
        char *res = malloc(10);
        res[0] = 1;
        for (int i = 0; i < n; i++) {
            char *tmp = res;
            res = malloc(1000);
            int len = 1;
            int index = 0;
            for (int j = 0; j < strlen(tmp) - 1; j++) {
                if (tmp[j] != tmp[j - 1]) {
                    res[index++] = '0' + len;
                    res[index++] =
                }
            }
        }
    }
}
