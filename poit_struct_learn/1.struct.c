/*************************************************************************
	> File Name: 1.struct.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 09时18分29秒
 ************************************************************************/

#include<stdio.h>
struct person{
    char name[20];
    int age;
    char gender;
    float height;
};
struct node1{
    char a;
    char b;
    int c;
};
struct node2{
    char a;
    int c;
    char b;
};
#define p(n){\
    printf("%s = %lu\n",#n,n);\
}
int main(){
    p(sizeof(struct person));
    p(sizeof(struct node1));
    p(sizeof(struct node2));
    return 0;
}
