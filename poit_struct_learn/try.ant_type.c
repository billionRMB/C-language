/*************************************************************************
	> File Name: 3.try.any_tpye.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 11时03分36秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#define p(n){\
    printf("%s %d\n",#n,n);\
}

typedef struct arr{
    int type;
    union{
        int num_int;
        float num_float;
        char num_char;
    }N;
}arr;

void arr_scanf(arr*a,int type,...){
    va_list arg;
    va_start(arg,type);
    a -> type = type;
    switch(type){
        case 0:{
            a -> N.num_int = va_arg(arg,int);
        }break;
        case 1:{
            a -> N.num_float = va_arg(arg,double);
        }break;
    }
    va_end(arg);
}

void arr_printf(arr*a,int i){
    int type = a[i].type;
    switch(type){
        case 0:{
            printf("%d\n",a[i].N.num_int);
        }break;
        case 1:{
            printf("%f\n",a[i].N.num_float);
        }
    }
}

int main(){
    arr test[10];
    arr_scanf(test,0,10);
    arr_scanf(test+1,1,1.0);
    arr_printf(test,0);
    arr_printf(test,1);
    return 0;
}
