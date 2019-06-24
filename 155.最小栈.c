/*
 * @lc app=leetcode.cn id=155 lang=c
 *
 * [155] 最小栈
 */

#define STACK_INIT_SIZE (10000)

typedef struct {
    int data[STACK_INIT_SIZE];
    int cap;
    int top;
    int min;
} MinStack;

/** initialize your data structure here. */

MinStack *minStackCreate() {
    MinStack *stack = (MinStack *)malloc(sizeof(MinStack));
    stack->cap = STACK_INIT_SIZE;
    stack->top = -1;
    stack->min = INT_MAX;
    return stack;
}

void minStackPush(MinStack *obj, int x) {
    if (obj->top < obj->cap) {
        obj->data[++obj->top] = x;
        if (x < obj->min)
            obj->min = x;
    }
}

void minStackPop(MinStack *obj) {
    if (obj->top > -1) {
        if (obj->data[obj->top] == obj->min) {
            int min = INT_MAX;
            for (int i = 0; i < obj->top; i++) {
                if (min > obj->data[i])
                    min = obj->data[i];
            }
            obj->min = min;
        }
        obj->top--;
    }
}

int minStackTop(MinStack *obj) { return obj->data[obj->top]; }

int minStackGetMin(MinStack *obj) { return obj->min; }

void minStackFree(MinStack *obj) { free(obj); }

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 

















 * minStackPop(obj);
 




















































 * int param_3 = minStackTop(obj);
 




















































 * int param_4 = minStackGetMin(obj);
 




















































 * minStackFree(obj);
*/
