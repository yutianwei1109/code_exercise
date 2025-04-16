//动态库的动态加载
#include<stdio.h>
#include<dlfcn.h> // dlopen() dlsym() dlclose() dlerror()

int main(void){
    //将动态库载入到内存
    void* handle = dlopen("/home/tarena/2503/uc/day01/shared/libmath.so",RTLD_NOW);
    if(handle == NULL){
        fprintf(stderr,"dlopen: %s\n",dlerror());
        return -1;
    }
    //获取库中函数的地址
    int (*add)(int,int) = dlsym(handle,"add");
    if(add == NULL){
        fprintf(stderr,"dlsym: %s\n",dlerror());
        return -1;
    }
    // sub
    // show

    //使用
    int a = 123,b = 456;

    //卸载动态库
    if(dlclose(handle)){
        fprintf(stderr,"dlclose: %s\n",dlerror());
        return -1;
    }
    return 0;
}





