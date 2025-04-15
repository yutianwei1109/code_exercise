//树实现
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

//树初始化
void tree_init(tree_t* t)
{
    t->root = NULL;
    t->count = 0;
}
//树插入节点
void tree_insert(tree_t* t, int data)
{
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    if (t->root == NULL) 
    {
        t->root = new;
        t->count++;
        return;
    }
    node_t* p1 = t->root;
    while (p1 != NULL)
    {
        if (p1->data == data)
        {
            printf("数据重复 插入无效\n");
            free(new);
            return;
        }
        if (data < p1->data)
        {
            if (p1->left == NULL) 
            {
                p1->left = new;
                t->count++;
                return;
            }
            p1 = p1->left;
        }else {
            if (p1->right == NULL) 
            {
                p1->right = new;
                t->count++;
                return;
            }
            p1 = p1->right;
        }
    }
}
//树删除节点 data作为筛选条件
void tree_del(tree_t* t, int data)
{
    //确定目标节点 没有目标节点则return pf记录父节点
    node_t* pt = t->root;
    node_t* pf = NULL;
    while (pt != NULL && data != pt->data)
    {
        pf = pt;
        if (data < pt->data)
        {
            pt = pt->left;
        }else {
            pt = pt->right;
        }
    }
    if (pt == NULL)
    {
        printf("节点不存在\n");
        return;
    }
    
    //备份子树 删除目标节点 目标节点为根节点则直接置空
    node_t* pleft = pt->left, * pright = pt->right;
    /*
    if (pt == t->root)
    {
        free(t->root);
        pt = t->root = NULL;
        t->count--;
    }else {
        free(pt);
        pt = NULL;
        t->count--;
    }
    */
    free(pt); //释放目标节点
    if(pt == t->root) t->root = NULL; //目标根节点置空
    pt = NULL; //目标指针置空
    t->count--; //计数减

    //合成(使左子树挂在右子树中最左侧)并使pn指向新子树
    node_t* pn = NULL;
    if (pleft != NULL && pright == NULL)
    {
        pn = pleft;
    }
    if (pleft == NULL && pright != NULL)
    {
        pn = pright;
    }
    if (pleft != NULL && pright != NULL)
    {
        node_t* p1 = pright;
        while(p1->left != NULL) p1 = p1->left;
        p1->left = pleft;
        pn = pright;
    }

    //子树重新插入
    if (pf == NULL) t->root = pn;
    else
    {
        if (pn == pf->left) pf->left = pn;
        else pf->right = pn;
    }
}
/**
 * 前序遍历
 * @param n 根节点地址
 */
void tree_first_travel(node_t* n)
{
    if(n == NULL) return;
    printf("%d ", n->data);
    tree_first_travel(n->left);
    tree_first_travel(n->right);
}
/**
 * 中序遍历
 * @param n 根节点地址
 */
void tree_mid_travel(node_t* n)
{
    if(n == NULL) return;
    tree_mid_travel(n->left);
    printf("%d ", n->data);
    tree_mid_travel(n->right);
}
/**
 * 后序遍历
 * @param n 根节点地址
 */
void tree_last_travel(node_t* n)
{
    if(n == NULL) return;
    tree_last_travel(n->left);
    tree_last_travel(n->right);
    printf("%d ", n->data);
}
//树释放
void tree_deinit(node_t* n)
{
    if (n == NULL) return;
    tree_deinit(n->left);
    tree_deinit(n->right);
    free(n);
    n = NULL;
}