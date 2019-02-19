/*************************************************************************
	> File Name: 1.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月09日 星期三 19时31分22秒
 ************************************************************************/
#include<stdio.h>

#define s(a,b) (a) * (b)

#define p(a,b) ((a) + (b))

int main(){
    printf("%d\n",s(3,4));
    printf("%d\n",s(3 + 2,2));
    printf("%d\n",2 * p(4,5));
    printf("%s %s %d %s\n",__DATE__,__FILE__,__LINE__,__TIME__);
    return 0;
}
