/*************************************************************************
	> File Name: 4.point.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 14时24分52秒
 ************************************************************************/

#include<stdio.h>

struct Date{
    int x,y;
};

int main(){
    int aa = 10;
    int * p = &aa;
    void * v;
    *p = 5;
    struct Date a[2] = {0, 1,2,3},*p1 = a;
    printf("%d\n",(*(a + 1)).x);
    printf("%d\n",(*(p1+ 1)).x);
    printf("%d\n",(p1 + 1)->x);
    printf("%d\n",(a + 1)->x);
    printf("%d\n",(&a[0] + 1)->x);
    printf("%d\n",(*(&a[0] + 1)).x);
    return 0;
}
