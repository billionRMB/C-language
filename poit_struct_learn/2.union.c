/*************************************************************************
	> File Name: 2.union.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 10时00分13秒
 ************************************************************************/

#include<stdio.h>
union ipv4{
    unsigned int ipv4_int;
    struct{
        unsigned char i1;
        unsigned char i2;
        unsigned char i3;
        unsigned char i4;
    } ipv4_d;
};

union IP{
    struct {
        unsigned char arr[4];
    }ip;
    unsigned int num;
};

void p_ipv4(union ipv4 i){
    printf("%d.%d.%d.%d\n",i.ipv4_d.i1,
           i.ipv4_d.i2,i.ipv4_d.i3,i.ipv4_d.i4); 
}

void p_int(unsigned n){
    while(n){
        printf("%d",(n & 1));
        n >>= 1;
    }
    printf("\n");
}

int main(){
    union ipv4 test;
    int n = 0;
    union IP ip;
    int a,b,c,d;
    while(~scanf("%d.%d.%d.%d",&a,&b,&c,&d)){
        ip.ip.arr[0] = a;ip.ip.arr[1] = b;
        ip.ip.arr[2] = c;ip.ip.arr[3] = d;
        printf("%ud\n",ip.num);
    }
    /*
    while(~scanf("%d",&n)){
        test.ipv4_int = n;
        p_int(n);
        p_ipv4(test); 
    }*/
    return 0;
}
