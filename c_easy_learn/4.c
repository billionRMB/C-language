/*************************************************************************
	> File Name: 4.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 09时54分35秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main(){
    float n ;
    while(scanf("%f",&n) != EOF){
        printf("%f\n",acos(-1)/180 * n);
    }
}
