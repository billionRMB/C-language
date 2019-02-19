/*************************************************************************
	> File Name: 5.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 10时11分47秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    printf("23 & 17 = %d\n",23 & 17);
    int a,b;
    scanf("%d %d",&a,&b);
    a ^= b; b ^= a; a ^= b;
    // 等价的
    a = a + b, b = a - b, a = a - b;
    printf("a = %d  b = %d\n",a,b);
    double x;
    scanf("%lf",&x);
    printf("%lf\n",pow(x,1.0/3.0));
    //换底公式
    printf("%lf\n",log(25)/log(5));
    return 0;
}
