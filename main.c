#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    int str0len = strlen(strs[0]);
    int min = 0;
    for (int i = 0; i < strsSize; i++) {
        if (str0len < strlen(strs[i])) {
            min = i;
            str0len = strlen(strs[i]);
        }
    }

    int maxPre = 0;
    for (int i = 0; i < str0len; i++) {
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[min][i]) {
                i = 999;
                maxPre--;
                break;
            }
        }
        maxPre++;
    }
    char *max = (char *) malloc(sizeof(char) * maxPre);
    for (int i = 0; i < maxPre; i++) max[i] = strs[min][i];

    return max;
}

int main() {
    char str[3][10] = {"12312312", "323212313", "12312312"};
    printf("%s", longestCommonPrefix(str, 3));
    return 0;
}