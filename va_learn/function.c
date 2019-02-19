/*************************************************************************
	> File Name: function.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 16时16分02秒
 ************************************************************************/

#include<stdio.h>
#define P(func) {\
    printf("%s = %d\n",#func,func);\
}

int is_prime(int);
int max_int(int,...);

int main(){
    for(int i = 2;i <= 10;i ++){
        if(is_prime(i))printf("%d\n",i);
    }
    
    P(max_int(3,2,3,5));
    P(max_int(4,1,2,3,6));
    return 0;
}
