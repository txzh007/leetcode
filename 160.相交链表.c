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
    while (len > 0) {
        list = list->next;
        len--;
    }
    return list;
}

struct ListNode *getIntersectionNode(struct ListNode *headA,
                                     struct ListNode *headB) {
    struct ListNode *la = headA;
    struct ListNode *lb = headA;
    int lenA = getLen(headA);
    int lenB = getLen(headB);

    if (lenA > lenB) {
        postIndex(headA, lenA - lenB);
    } else {
        postIndex(headB, lenB - lenA);
    }
    struct ListNode *node = NULL;

    while (la && lb) {
        if (la == lb) {
            if (node == NULL) {
                node = la;
            }

            if (la->next && (la->next->val != lb->next->val)) {
                node = NULL;
            }
            la = la->next;
            lb = lb->next;
        }
    }

    return node;
}
