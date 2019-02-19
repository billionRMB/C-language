/*************************************************************************
	> File Name: 1.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月04日 星期五 20时10分25秒
 ************************************************************************/
#include<stdio.h>
int main(){
    int n ;
    freopen("/dev/null", "w",stderr);// 打开了垃圾桶
    char str[20] = {0};
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",fprintf(stderr,"%d",n));
        printf("%d\n",sprintf(str,"%d",n));
    }
    return 0;
}
