/*************************************************************************
	> File Name: 6.main.cpp
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 15时47分14秒
 ************************************************************************/
#include<stdio.h>
int main(int arg,char *argc[],char *env[]){ 
    for(int i = 0;i < arg;i ++){
        printf("%s ",argc[i]);
    } 
    printf("\n");
    for(char ** i = env;i[0] != NULL;i ++){
        printf("%s\n",i[0]);
    }
    return 0;
}
