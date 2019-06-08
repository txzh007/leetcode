/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

bool isChar(char s) {
    if (s <= 'z' && s >= 'a')
        return true;
    if (s <= '9' && s >= '0')
        return true;
    return false;
}

bool isPalindrome(char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {

        if (s[left] <= 'Z' && s[left] >= 'A')
            s[left] += 32;

        if (s[right] <= 'Z' && s[right] >= 'A')
            s[right] += 32;

        if (!isChar(s[left])) {
            left++;
            continue;
        }

        if (!isChar(s[right])) {
            right--;
            continue;
        }
        if (s[left] + 32 != s[right] && s[left] - 32 != s[right] &&
            s[left] != s[right])
            return false;

        left++;
        right--;
    }
    return true;
}
