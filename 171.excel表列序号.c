/*
 * @lc app=leetcode.cn id=171 lang=c
 *
 * [171] Excel表列序号
 */

int titleToNumber(char *s) {
    int nums = 0;
    while (*s) {
        nums = ((*s++) - 'A' + 1) + nums * 26;
    }

    return nums;
}
