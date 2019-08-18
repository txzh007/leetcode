/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
 *
 * https://leetcode-cn.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (38.39%)
 * Likes:    256
 * Dislikes: 0
 * Total Accepted:    34K
 * Total Submissions: 88.7K
 * Testcase Example:  '[1,2]'
 *
 * 请判断一个链表是否为回文链表。
 *
 * 示例 1:
 *
 * 输入: 1->2
 * 输出: false
 *
 * 示例 2:
 *
 * 输入: 1->2->2->1
 * 输出: true
 *
 *
 * 进阶：
 * 你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// struct ListNode {
//   int val;
//   struct ListNode *next;
// };

struct ListNode *reverseList(struct ListNode *node) {
  struct ListNode *p = NULL;
  struct ListNode *q;
  while (node) {
    q = node->next;
    node->next = p;
    p = node;
    node = q;
  }
  return p;
}

bool isPalindrome(struct ListNode *head) {
  if (head == NULL || head->next == NULL)
    return true;
  //利用快慢指针
  struct ListNode *fast = head;
  struct ListNode *slow = head;
  while (fast->next && fast->next->next) {
    fast = fast->next->next;
    slow = slow->next;
  }
  struct ListNode *mid = reverseList(slow->next);
  while (head && mid) {
    if (head->val != mid->val)
      return false;
    head = head->next;
    mid = mid->next;
  }
  return true;
}
