/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 旋转数组
 */

void _rotate(int *nums, int l, int r) {
    for (int i = 0; i < (r - l + 1) / 2; i++) {
        nums[l + i] = nums[l + i] ^ nums[r - i];
        nums[r - i] = nums[l + i] ^ nums[r - i];
        nums[l + i] = nums[l + i] ^ nums[r - i];
    }
}

void rotate(int *nums, int numsSize, int k) {
    int tk = k % numsSize;
    _rotate(nums, 0, numsSize - 1);
    _rotate(nums, 0, tk - 1);
    _rotate(nums, tk, numsSize - 1);
}
