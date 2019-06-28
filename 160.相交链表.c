/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getLen(struct ListNode *list) {
    int len = 0;
    while (list != NULL) {
        list = list->next;
        len++;
    }
    return len;
}
struct ListNode *postIndex(struct ListNode *list, int len) {
    while (len && len--) {
        list = list->next;
    }
    return list;
}

struct ListNode *getIntersectionNode(struct ListNode *headA,
                                     struct ListNode *headB) {
    struct ListNode *la = headA;
    struct ListNode *lb = headB;
    int lenA = getLen(headA);
    int lenB = getLen(headB);

    if (lenA > lenB) {
        la = postIndex(headA, lenA - lenB);
    } else {
        lb = postIndex(headB, lenB - lenA);
    }

    while (la && lb) {
        if (la == lb) {
            return la;
        }
        la = la->next;
        lb = lb->next;
    }

    return NULL;
}
