/*
 * @lc app=leetcode.cn id=225 lang=c
 *
 * [225] 用队列实现栈
 *
 * https://leetcode-cn.com/problems/implement-stack-using-queues/description/
 *
 * algorithms
 * Easy (59.77%)
 * Likes:    66
 * Dislikes: 0
 * Total Accepted:    16.3K
 * Total Submissions: 27.2K
 * Testcase Example:
 * '["MyStack","push","push","top","pop","empty"]\n[[],[1],[2],[],[],[]]'
 *
 * 使用队列实现栈的下列操作：
 *
 *
 * push(x) -- 元素 x 入栈
 * pop() -- 移除栈顶元素
 * top() -- 获取栈顶元素
 * empty() -- 返回栈是否为空
 *
 *
 * 注意:
 *
 *
 * 你只能使用队列的基本操作-- 也就是 push to back, peek/pop from front, size,
 * 和 is empty 这些操作是合法的。 你所使用的语言也许不支持队列。 你可以使用 list
 * 或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。
 * 你可以假设所有操作都是有效的（例如, 对一个空的栈不会调用 pop 或者 top
 * 操作）。
 *
 *
 */

#define LEN 100
typedef struct {
  int data[LEN];
  int top;
} MyStack;

/** Initialize your data structure here. */

MyStack *myStackCreate() {
  MyStack *stack = (MyStack *)malloc(sizeof(MyStack));
  stack->top = 0;
  return stack;
}

/** Push element x onto stack. */
void myStackPush(MyStack *obj, int x) {
  obj->top++;
  obj->data[obj->top] = x;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack *obj) { return obj->data[obj->top--]; }

/** Get the top element. */
int myStackTop(MyStack *obj) { return obj->data[obj->top]; }

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack *obj) { return obj->top == 0; }

void myStackFree(MyStack *obj) { free(obj); }

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/
