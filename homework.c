/*************************************************************************
	> File Name: homework.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月13日 星期日 14时35分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char key[10] = "./test";
char argc_key[10] = "-fuck";
char username[20] = "USERNAME=gintama";

int main(int arg,char *argc[],char *env[]){
    if(strcmp(key,argc[0])){
        printf("no\n");
        return 0;
    }

    if(!argc[1] || strcmp(argc_key,argc[1])){
        printf("no argc\n");
        return 0;
    }

    //USERNAME=gintama
    int flag = 1;
    for(char ** i = env;i[0]!=NULL && flag;i ++){
        flag = strcmp(username,i[0]);
    }
    if(flag)return 0;

    printf("welcome\n");
    return 0;
}
