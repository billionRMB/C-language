/*************************************************************************
	> File Name: 2.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月04日 星期五 20时47分02秒
 ************************************************************************/
#include<stdio.h>
int main(){
    char a;
    char str[100] = {0};
    int i = 0;
    /*while(scanf("%c",&a)!=EOF){
        str[i++] = a;
        if(a == '\n')break;
    }*/
    while(scanf("%[^\n]s",str)!=EOF){
        getchar();
        printf("%s\n",str);
    }
    return 0;
}
