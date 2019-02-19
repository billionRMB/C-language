/*************************************************************************
	> File Name: 8.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 14时34分05秒
 ************************************************************************/

#include<stdio.h>

int factorial(int n){
    if(n == 1 || n == 0)return 1;
    return n * factorial(n - 1);
}

int get_100(int n){
    if(n == 1)return 1;
    return n + get_100(n - 1);
}

int main(){
    int n = 0;
    printf("%d\n",get_100(100));
    while(~scanf("%d",&n)){
        printf("%d\n",factorial(n));
    }
    return 0;
}
