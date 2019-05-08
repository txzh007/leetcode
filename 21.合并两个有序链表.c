/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = node;
    while (l1 != NULL || l2 != NULL) {
        if (l1 && l2) {
            if (l1->val <= l2->val) {
                node->next = l1;
                l1 = l1->next;
            } else {
                node->next = l2;
                l2 = l2->next;
            }
        } else if (!l1 && l2) {
            node->next = l2;
            l2 = l2->next;
        } else if (!l2 && l1) {
            node->next = l1;
            l1 = l1->next;
        }
        node = node->next;
    }
    node->next = NULL;
    return p->next;
}
