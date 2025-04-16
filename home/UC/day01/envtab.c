//环境变量
#include<stdio.h>

int main(int argc,char* argv[],char* envp[]/* char** envp */){

    extern char** environ;//记录数组首元素地址
    /*for(char** pp = environ;*pp != NULL;pp++){
        printf("%s\n",*pp);
    }*/
    for(char** pp = envp;*pp != NULL;pp++){
        printf("%s\n",*pp);
    }
    printf("environ = %p\n",environ);
    printf("envp    = %p\n",envp);
    return 0;
}
