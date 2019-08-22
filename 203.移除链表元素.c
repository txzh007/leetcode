/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
  if (head == NULL) return head;
  while (head && head->val == val) {
    head = head->next;
  }
  struct ListNode* p = head;
  while (p && p->next) {
    if (p->next->val == val) {
      p->next = p->next->next;
      continue;
    }
    p = p->next;
  }
  return head;
}
