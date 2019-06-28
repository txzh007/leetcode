#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int binarySearch(int *nums, int left, int right, int target) {
    int mid = (left + right) / 2;
    if (right < left) {
        return -1;
    } else if (nums[mid] > target) {
        return binarySearch(nums, left, right - 1, target);
    } else if (nums[mid] < target) {
        return binarySearch(nums, left + 1, right, target);
    } else {
        return mid;
    }
}
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize) {
    int result[2] = {-1, -1};
    returnSize = (int *)malloc(sizeof(int));
    returnSize = 2;
    for (int i = 0; i < numbersSize; i++) {
        result[0] = i + 1;
        result[1] =
                binarySearch(numbers, i + 1, numbersSize - 1, target - numbers[i]) +
                1;
        if (result[1] != 0)
            return result;
    }
    return result;
}

int main() {
  int len;
  int numsers[]

    return 0;
}