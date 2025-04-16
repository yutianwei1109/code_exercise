//错误处理
#include<stdio.h>
#include<stdlib.h>// rand() srand() malloc() 
#include<errno.h>// int errno;
#include<string.h>// strerror();
int main(void){
    int* p = malloc(0xffffffffffffffff);
    /*if(p == NULL){
        printf("errno = %d\n",errno);
        printf("malloc: %s\n",strerror(errno));
        perror("malloc");
        return -1;
    }*/
    free(p);
    p = NULL;
    
    FILE* fp = fopen("./envtab.c","r");
    //if(errno != 0){
    if(fp == NULL){
        perror("fopen");
        return -1;
    }

    return 0;
}
