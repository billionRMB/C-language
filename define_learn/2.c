/*************************************************************************
	> File Name: 2.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月09日 星期三 19时57分41秒
 ************************************************************************/
#include<stdio.h>
#define VERSION 3 
#define DEBUG
#ifdef DEBUG
#define P(a){\
    printf("[%s : %s : %d] %s : %d\n",__FILE__,__func__,__LINE__,#a,a);\
}
#else
#define P(a){}
#endif

#define swap(a,b){\
    __typeof(a) __temp = a;\
    a = b;b = __temp;\
}

// 之所以可以行　是因为在主函数里就定义里没有涉及到函数调用

void test(){
#if VERSION == 4
    printf("test\n");
#else
    printf("test2\n");
#endif
}

int main(){
    test();
    int sum = 0;
    for(int i = 0;i < 100;i ++){
        sum += i;
        P(sum);
    }
    printf("%d\n",sum);
    return 0;
}
