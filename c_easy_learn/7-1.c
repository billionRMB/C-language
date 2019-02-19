/*************************************************************************
	> File Name: 7.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 11时07分15秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    // 注意  while(~scanf()) == while(scanf()!=EOF)
    while(~scanf("%d",&n)){
        switch(n){
            case 1: printf("one ");
            case 2: printf("two ");
            case 3: printf("three");break;
            default: printf("error\n");
        }
        printf("\n");
    }
    return 0;
}
