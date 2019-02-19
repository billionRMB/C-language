/*************************************************************************
	> File Name: 2.16_n.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月11日 星期五 20时18分33秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    freopen("/dev/null","w",stderr);
    while(~scanf("%d",&n))
    printf("%d\n",fprintf(stderr,"%x",n));
    return 0;
}
