/*************************************************************************
	> File Name: unit.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 16时40分51秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
int is_prime(int x){
    for(int i = 2; i * i <= x; i ++){
        if(x % i == 0)return 0;
    }
    return 1;
}

int max_int(int x,...){
    va_list arg;
    va_start(arg,x);
    int ans = 0;
    while(x --){
        int temp = va_arg(arg,int);
        ans = temp > ans ? temp : ans;
    }
    va_end(arg);
    return ans;
}
