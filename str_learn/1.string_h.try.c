/*************************************************************************
	> File Name: 1.strlen.try.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月11日 星期五 18时48分14秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<inttypes.h>

uint64_t my_strlen(const char * str){
    uint64_t n = 0;
    while(str[n])n++;
    return n;
}

int my_strcmp(const char * str1,const char * str2){
    uint64_t i = 0;
    while(str1[i]&&str2[i]&&str1[i] == str2[i])i++;
    return str1[i] - str2[i];
}

int my_strncmp(const char * str1,const char * str2,int n){
    uint64_t i = 0,flag = 0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        flag = str1[i] - str2[i];
        if(i >= n)return flag;
        if(flag)return flag;
        i++;
    }
    return str1[i] - str2[i];
}

int x_strncmp(const char * str1,const char *str2,uint64_t n){
    uint64_t i = 0;
    while(i < n && str1[i] && str2[i] && str1[i] == str2[i])i++;
    if(i == n)return 0;
    return str1[i] - str2[i];
}

int main(){
    char test[] = "testtest";
    int n = strlen(test);
    char str1[] = "hell";
    n = strcmp(str1,"hall world");
    return 0;
}
