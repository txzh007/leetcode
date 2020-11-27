/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start

int _search(int *nums, int target, int l, int r) {
  if (l > r)
    return -1;
  int mid = (l + r) / 2;
  if (nums[mid] == target)
    return mid;
  else if (nums[mid] < target) {
    return _search(nums, target, mid + 1, r);

  } else {
    return _search(nums, target, l, mid - 1);
  }
  return -1;
}

int search(int *nums, int numsSize, int target) {
  return _search(nums, target, 0, numsSize - 1);
}

// @lc code=end
