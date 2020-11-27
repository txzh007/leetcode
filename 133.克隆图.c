/*
 * @lc app=leetcode.cn id=133 lang=c
 *
 * [133] 克隆图
 */

// @lc code=start
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numNeighbors;
 *     struct Node** neighbors;
 * };
 */

struct Node **nodeList;
struct Node *_cloneGraph(struct Node *s) {
  if (s == NULL) {
    return NULL;
  }

  if (nodeList[s->val]) {
    return nodeList[s->val];
  }

  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->val = s->val;
  node->numNeighbors = s->numNeighbors;
  nodeList[node->val] = node;
  node->neighbors =
      (struct Node **)malloc(sizeof(struct Node *) * node->numNeighbors);
  for (int i = 0; i < node->numNeighbors; i++) {
    node->neighbors[i] = _cloneGraph(s->neighbors[i]);
  }

  return node;
}

struct Node *cloneGraph(struct Node *s) {
  // 初始化全局数组 用于存储是否被访问
  nodeList = (struct Node **)malloc(sizeof(struct Node *) * 101);
  memset(nodeList, 0, sizeof(struct Node *) * 101);

  return _cloneGraph(s);
}
