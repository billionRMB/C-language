/*************************************************************************
	> File Name: test.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月15日 星期二 09时26分40秒
 ************************************************************************/
#include<stdio.h>
#include"test.h"
int add(int a,int b){
    return a + b;
}
int sum(int n){
    if(n < 0)return -1;
    int a = 0;
    for(int i = 0;i <= n;i ++){
        a += i;
    }
    return a;
}
int is_prime(int n){
    if(n <= 1)return 0;
    for(int i = 2;i * i <= n;i ++){
        if(n % i == 0)return 0;  
    }
    return 1;
}

TEST(test,is_prime_func){
    EXPECT(is_prime(2), 0);
    EXPECT(is_prime(-2), 0);
    EXPECT(is_prime(15), 0);
    EXPECT(is_prime(9973), 1);
}

TEST(test,add_func){
    EXPECT(add(1,2),3);
    EXPECT(add(3,2),5);
    EXPECT(add(5,2),7);
}

TEST(test,sum_func){
    EXPECT(sum(3),6);
    EXPECT(sum(-5),-1);
    EXPECT(sum(100),5050);
}

int main(){
    return RUN_ALL_TEST();
}
