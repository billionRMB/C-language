/*************************************************************************
	> File Name: 9.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 15时54分45秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>

int max_int(int num,...){
    int ans = 0,temp;
    va_list arg;
    va_start(arg,num);
    while(num --){
        temp = va_arg(arg,int);
        if(temp > ans) ans = temp; 
    }
    va_end(arg);
    return ans;
}

int main(){
    printf("%d\n",max_int(4,10,1,2));
    return 0;
}
