//树调用
#include <stdio.h>
#include "tree.h"

int main()
{
    tree_t tree;
    //初始化
    tree_init(&tree);
    //插入
    tree_insert(&tree, 60);
    tree_insert(&tree, 30);
    tree_insert(&tree, 90);
    tree_insert(&tree, 10);
    tree_insert(&tree, 50);
    tree_insert(&tree, 20);
    tree_insert(&tree, 40);
    tree_insert(&tree, 80);
    tree_insert(&tree, 100);
    tree_insert(&tree, 70);
    //遍历
    tree_first_travel(tree.root);
    printf("\n");
    tree_mid_travel(tree.root);
    printf("\n");
    tree_last_travel(tree.root);
    printf("\n");

    tree_del(&tree, 30);
    tree_first_travel(tree.root);
    printf("\n");
    tree_mid_travel(tree.root);
    printf("\n");
    tree_last_travel(tree.root);
    printf("\n");

    //树释放
    tree_deinit(tree.root);
    tree.count = 0;

    return 0;
}