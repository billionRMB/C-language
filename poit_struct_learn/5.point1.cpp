/*************************************************************************
	> File Name: 5.point1.cpp
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 15时29分21秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
#include<inttypes.h>
using namespace std;

#define p(n){\
    printf("%s =  %lu\n",#n,n);\
}

int add(int a,int b){
    return a + b;
}

typedef int (*func)(int,int);

int main(){
    func pfun = add;
    printf("%d\n",pfun(3,4));
    
    int a = 5;
    int* p = &a;
    printf("*p = %d ,a = %d \n",*p,a);
    
    p(sizeof(char *));
    p(sizeof(int *));
    p(sizeof(void *));
   
    int64_t temp;
    p = (int *)&temp;
    p[0] = 0x3f80;
    printf("%"PRIx64"\n",temp);
    return 0;
}
