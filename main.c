#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int max(int a, int b) { return a > b ? a : b; }
char *addBinary(char *a, char *b) {
    int aLength = strlen(a);
    int bLength = strlen(b);
    int length = max(aLength, bLength);
    char *arr = (char *) malloc(sizeof(char) * (length + 2));
    int tmp = 0;
    for (int i = 0; i <= length; i++) {
        arr[i] = '0';
        if (aLength - i - 1 >= 0) {
            arr[i] += (a[aLength - i - 1] - '0');
        }
        if (bLength - i - 1 >= 0) {
            arr[i] += (b[bLength - i - 1] - '0');
        }
        arr[i] += tmp;
        if (arr[i] >= '2') {
            arr[i] = '0' + ((arr[i] - '0') % 2);
            tmp = 1;
        } else {
            tmp = 0;
        }
    }
    if (arr[length] == '1')
        arr[length + 1] = '\0';
    else
        arr[length] = '\0';
    length = strlen(arr);
    for (int i = 0; i < length / 2; i++) {
        char tmp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = tmp;
    }
    if (arr[0] == '0')
        return "0";
    return arr;
}

int main() {
    char *a = (char *) malloc(sizeof(char) * 4);
    char *b = (char *) malloc(sizeof(char) * 4);
    strcpy(a, "1111");
    strcpy(b, "1111");
    printf("%s\n", addBinary(a, b));

    return 0;
}