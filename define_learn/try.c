/*************************************************************************
	> File Name: try.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月09日 星期三 20时46分48秒
 ************************************************************************/
#include<stdio.h>

#define p(a){\
    printf("%s =  %d\n",#a,a);\
}

#define swap(a,b){\
    a ^= b;\
    b ^= a;\
    a ^= b;\
}

#define MAX(a,b) ({\
    __typeof(a) __tempa = a;\
    __typeof(b) __tempb = b;\
    (__tempa) > (__tempb) ? (__tempa) : (__tempb);\
})

#define ppppp() ({\
    printf("%d\n",3);\
})
int main(){
    ppppp();
    printf("-----------\n");
    
    int b = 2,c = 3;
    p(b);
    p(c);
    swap(b,c);
    p(b);
    p(c);
    p(MAX(2,3));
    p(5 + MAX(2,3));
    p(MAX(2,MAX(3,4)));
    p(MAX(2,3 > 4 ? 3 : 4));
    int a = 7;
    p(a);
    p(MAX(a ++,6));
    p(a);
    return 0;
}
