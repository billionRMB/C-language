/*************************************************************************
	> File Name: 1.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月04日 星期五 20时10分25秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n ;
    while(scanf("%d",&n)!=EOF){
        int i = printf("%d",n);
        for(int j = 0;j < i;j ++)printf("\b");
        printf("%d",i);
        for(int j = 0;j < i-1;j++)printf(" ");
        printf("\n");
    }
    return 0;
}
