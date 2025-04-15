//树声明 有序二叉树
#ifndef _TREE_N_
#define _TREE_H_

#include <stdio.h>

/**
 * 树节点
 * @param data 数据
 * @param left 左节点指针
 * @param right 右节点指针
 */
typedef struct node{
    int data;
    struct node* left;
    struct node* right;    
}node_t;
/**
 * 树
 * @param root 根节点指针
 * @param count 节点参数[可选参数]
 */
typedef struct tree{
    node_t* root;
    int count;  //可用参数 节点个数
}tree_t;

//树初始化
void tree_init(tree_t* t);
//树插入节点
void tree_insert(tree_t* t, int data);
//树删除节点 data作为筛选条件
void tree_del(tree_t* t, int data);
//前序遍历
void tree_first_travel(node_t* n);
//中序遍历
void tree_mid_travel(node_t* n);
//后序遍历
void tree_last_travel(node_t* n);
//树释放
void tree_deinit(node_t* n);

#endif //_TREE_H_ 