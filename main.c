#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *longestCommonPrefix(char strs[3][6], int strsSize) {
    int maxLen = strlen(strs[0]);
    char *result = NULL;
    for (int i = 0; i < maxLen; i++) {

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                printf("i=%d\n", i);
                result = (char *) malloc(sizeof(char) * i);
                printf("res length is %d\n", strlen(result));
                for (int k = 0; k < i; k++) {
                    result[k] = strs[0][k];

                }
                result[i]='\0';
                return result;
            }
        }
    }
    return result;

}

int main() {
    char str[3][6] = {"flower", "flow", "flight"};

    printf("%s\n", longestCommonPrefix(str, 3));
    printf("%d", strlen(longestCommonPrefix(str, 3)));
    return 0;
}