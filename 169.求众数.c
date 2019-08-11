/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 求众数
 */

int majorityElement(int *nums, int numsSize) {
  int **countArr = (int **)malloc(sizeof(int *) * numsSize);
  for (int i = 0; i < numsSize; i++) {
    countArr[i] = (int *)malloc(sizeof(int) * 2);
  }

  int len = 0;
  for (int i = 0; i < numsSize; i++) {
    bool flag = false;
    for (int j = 0; j < len; j++) {
      if (nums[i] == countArr[j][0]) {
        countArr[j][1]++;
        flag = true;
        break;
      }
    }
    if (!flag) {
      countArr[len][0] = nums[i];
      countArr[len][1] = 0;
      len++;
    }
  }
  int marjority=0;

  for(int i=0;i<len;i++){
      if(countArr[i][1]>countArr[marjority][1]){
          marjority =i;
      }
  }

  return countArr[marjority][0];
}
