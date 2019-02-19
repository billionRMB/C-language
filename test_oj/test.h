/*************************************************************************
	> File Name: test.h
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月15日 星期二 13时59分53秒
 ************************************************************************/
#include<string.h>
#ifndef _TEST_H
#define _TEST_H

void (*func_test[100])() = {0};
char func_name[100][100];
char func_name2[100][100];
int result_test[100][2];

#define cpname(count,name1,name2) {\
    strcpy(func_name[count],#name1);\
    strcpy(func_name2[count],#name2);\
}
#define _F_name(test,count,name1,name2) void test##count(int);\
        __attribute__((constructor))void add##test##count(){\
            func_test[count] = test##count;cpname(count,name1,name2);\
            }\
        void test##count(int num)
#define F_name(a,b,c,d) _F_name(a,b,c,d)

#define TEST(name1,name2)\
       F_name(test, __COUNTER__,name1,name2)

#define EXPECT(a,b){\
    printf("%s\t == %s\t :",#a,#b);\
    if(a == b){result_test[num][1]++;printf("True\n");}\
    else {printf("False\n");}\
    result_test[num][0]++;\
} 

int RUN_ALL_TEST(){
    int i = 0;
    while(func_test[i]){
        printf("[%s:%s]\n",func_name[i],func_name2[i]);
        func_test[i](i);
        int all = result_test[i][0],pass = result_test[i][1],passf = 1.0 * pass / all * 100 ;
        if(passf != 100)
        printf("\033[41m %d  \033[0m:总共: %d 通过 : %d\n",passf,all,pass);
        else
        printf("\033[42m %d \033[0m:总共: %d 通过 : %d\n",passf,all,pass);
        i ++;
    }
    return 0;
}

#endif
