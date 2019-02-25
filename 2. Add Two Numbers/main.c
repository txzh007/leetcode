//
// Created by Tan on 2019/1/9.
//
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *list = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode *p = list;
    int tmp = 0;
    while (1) {
        struct ListNode *node = (struct ListNode *) malloc(sizeof(struct ListNode));
        int val = ((l1 != NULL ? l1->val : 0) + (l2 != NULL ? l2->val : 0) + tmp);
        tmp = val / 10;
        node->val = val % 10;
        p->next = node;
        p = p->next;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;

        if (!l1 && !l2 && !tmp) {
            p->next = NULL;
            break;
        }
    }

    return list->next;

}

int main() {
    return 0;
}