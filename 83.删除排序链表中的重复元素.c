/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

struct ListNode *deleteDuplicates(struct ListNode *head) {

    struct ListNode *node = head;
    struct ListNode *p = node;
    while (head != NULL) {
        if (head->val != node->val) {
            node->next = head;
            node = node->next;
        }
        head = head->next;
    }
    if (node != NULL)
        node->next = NULL;
    return p;
}
