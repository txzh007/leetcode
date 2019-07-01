/*
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel表列名称
 */

char *convertToTitle(int n) {
    if (n < 0) {
        return "";
    }
    char *res = malloc(10);
    int len = 0;
    while (n > 0) {
        res[len++] = 'A' + ((n - 1) % 26);
        n = (n - 1) / 26;
    }
    res[len] = '\0';
    for (int i = 0; i < len / 2; i++) {
        char tmp = res[i];
        res[i] = res[len - 1 - i];
        res[len - 1 - i] = tmp;
    }
    return res;
}
