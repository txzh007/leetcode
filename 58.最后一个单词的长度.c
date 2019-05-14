/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

int lengthOfLastWord(char *s) {
    char *p = s;
    int length = 0;
    while (*p) {

        if (*p++ == ' ') {
            if (!*p || *p == ' ') {
                continue;
            }
            length = 0;
        } else {
            length++;
        }
    }
    return length;
}
