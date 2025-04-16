//调用模块
#include<stdio.h>
//#include"calc.h"
//#include"show.h"
#include"math.h"

int main(void){
    int x = 123,y = 456;
    show(x,'+',y,add(x,y));
    show(x,'-',y,sub(x,y));
    return 0;
}
