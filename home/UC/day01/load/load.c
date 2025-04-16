//动态库的动态加载
//[bash]gcc load.c -o load.out -ldl
#include<stdio.h>
#include<dlfcn.h> // dlopen() dlsym() dlclose() dlerror()

int main(void){
    //将动态库载入到内存
    void* handle = dlopen("./libmath.so",RTLD_NOW);
    if(handle == NULL){
        fprintf(stderr,"dlopen: %s\n",dlerror());
        return -1;
    }
    //获取库中add函数的地址
    int (*add)(int,int) = (int (*)(int,int))dlsym(handle,"add");
    if(add == NULL){
        fprintf(stderr,"dlsym->add: %s\n",dlerror());
        return -1;
    }
    // sub函数
    int (*sub)(int,int) = (int (*)(int,int))dlsym(handle,"sub");
    if(sub == NULL){
        fprintf(stderr,"dlsym->sub: %s\n",dlerror());
        return -1;
    }
    // show函数
    void (*show)(int,char,int,int) = (void (*)(int,char,int,int))dlsym(handle,"show");
    if(show == NULL){
        fprintf(stderr,"dlsym->show: %s\n", dlerror());
        return -1;
    }

    //使用
    int a = 123,b = 456;
    show(a,'+',b,add(a,b));
    show(a,'-',b,sub(a,b));

    //卸载动态库
    if(dlclose(handle)){
        fprintf(stderr,"dlclose: %s\n",dlerror());
        return -1;
    }
    return 0;
}





