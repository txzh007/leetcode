//
// Created by Tan on 2019/1/9.
//

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int length = strlen(s);
    int l = 0, r = 0, max = 0;
    while (l <= length - 2) {


        if (s[l] == s[r]) {
            max = max < r - l ? r - l : max;
            l++;
            r = l + 1;
        } else {
            r++;
        }


    }
    return max;

}

int main() {
    char str[8] = "abcabcbb";
    printf("%d", lengthOfLongestSubstring(str));

    return 0;
}
