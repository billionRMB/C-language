/*************************************************************************
	> File Name: 3.any_type.cpp
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 11时34分27秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Number{
    int type; // 0 -> int ,1 -> float;
    union {
        int num_int_0;
        float num_float_1;
    }N;
}Number;

void print(Number * n){
    switch(n -> type){
        case 0:printf("%d\n",n -> N.num_int_0);break;
        case 1:printf("%lf\n",n -> N.num_float_1);break;
        // ％ｌｆ注意
    }
}

void set(Number * n,int i){
    n -> type = 0;
    n -> N . num_int_0 = i;
    return ;
}

void set(Number * n,float i){
    n -> type = 1;
    n -> N. num_float_1 = i;
    return ;
}

int main(){
    srand(time(0));
    Number arr[20];
    for(int i = 0;i < 20;i ++){
        int op = rand() % 2;
        switch (op){
            case 0:{
                int value = rand()%100;
                set(arr + i,value);
            }break;
            case 1:{
                float value = 1.0 * (rand()% 10000) / 100;
                //注意类型转换
                set(arr + i,value);
            }break;
        }
    }
    for(int i = 0;i < 20;i ++){
        print(arr+i);
    }
    return 0;
}

