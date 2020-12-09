/*
 * @lc app=leetcode.cn id=215 lang=c
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start

void initMinHeap(int *arr, int n, int index) {
  arr[index] = n;
  int i = index;
  while (i > 0 && arr[i] < arr[(i - 1) / 2]) {
    int tmp = arr[i];
    arr[i] = arr[(i - 1) / 2];
    arr[(i - 1) / 2] = tmp;
    i = (i - 1) / 2;
  }
}
void insertMinHeap(int *arr, int n, int index) {
  if (arr[0] < n) {
    arr[0] = n;
  }
  int i = 0;

  while (i * 2 + 1 <= index) {
    int j = i * 2 + 1;
    if (j + 1 <= index && arr[j] > arr[j + 1]) {
      j = j + 1;
    }
    if (arr[i] <= arr[j]) {
      break;
    }

    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    i = j;
  }
}

int findKthLargest(int *nums, int numsSize, int k) {
  int *heap = malloc(sizeof(int) * k);
  for (int i = 0; i < numsSize; i++) {
    if (i < k) {
      initMinHeap(heap, nums[i], i);
    } else {
      insertMinHeap(heap, nums[i], k - 1);
    }
  }

  return heap[0];
}

// @lc code=end
