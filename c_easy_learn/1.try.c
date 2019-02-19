/*************************************************************************
	> File Name: 1.try.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月06日 星期日 14时37分13秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n = 0;
    freopen("/dev/null","w",stderr);
    while(~scanf("%d",&n)){
        printf("%d\n",fprintf(stderr,"%d",n));
    }
    return 0;
}
