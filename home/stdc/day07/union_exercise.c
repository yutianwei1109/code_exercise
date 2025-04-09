//联合体实践
#include <stdio.h>

typedef union{
    char a;
    short b;
    int c;
}dt_t;

int main()
{
    dt_t d = {.c = 0x12345678};

    printf("%lu\n", sizeof(d));//内存长度为最大类型int的长度

    //地址共享
    printf("&d.a:%p\n", &d.a);
    printf("&d.b:%p\n", &d.b);
    printf("&d.c:%p\n", &d.c);

    //小端字节序
    printf("a:%#hhx\n", d.a);
    printf("b:%#hx\n", d.b);
    printf("c:%#x", d.c);

    return 0;
}