/*************************************************************************
	> File Name: 6.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 10时40分24秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 0){
        printf("FOOLISH\n");
    }else if(n < 60){
        printf("FAIL\n");
    }else if(n < 75){
        printf("MEDIUM\n");
    }else if(n <= 100){
        printf("GOOD\n");
    }else{
        printf("WRONG N\n");
    }
    return 0;
}
