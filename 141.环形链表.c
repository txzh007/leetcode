/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {

    struct ListNode *p = head, *q = head;
    while (p && p->next) {
        p = p->next;
        if (!p->next)
            return false;
        p = p->next;
        q = q->next;
        if (p == q)
            return true;
    }

    return false;
}
