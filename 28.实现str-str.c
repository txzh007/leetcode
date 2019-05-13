/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现strStr()
 */

int strStr(char *haystack, char *needle) {
    int needleLen = strlen(needle);
    int haystackLen = strlen(haystack);
    if (needleLen == 0)
        return 0;
    else if (needleLen > haystackLen)
        return -1;
    else {
        for (int i = 0; i < haystackLen; i++) {
            int j = 0;
            for (; j < needleLen; j++) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (j == needleLen)
                return i;
        }
        return -1;
    }
}
