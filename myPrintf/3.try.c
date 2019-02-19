/*************************************************************************
	> File Name: 1.try.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月05日 星期六 18时04分33秒
 ************************************************************************/
#include<stdio.h>
#include<stdarg.h>
#include<math.h>
#include<inttypes.h>

int my_printf_num(int n){
    int tail = n % 10;
    n /= 10;
    if(tail < 0){
        n *= -1;
        tail *= -1; 
        putchar('-');
    }
    int lengh = 0; 
    int temp = 0;
    while(n){
        temp = temp * 10 + n % 10;
        n /= 10;
        lengh ++;
    }
    for(int i = 0;i < lengh;i ++){
        putchar('0' + temp % 10);
        temp /= 10;
    }
    putchar('0'+tail);
    return lengh-2;
}

int my_printf(const char * str,...){
    va_list arg;
    va_start(arg,str);
    int lengh = 0;
    int num_lengh = 0;
    while(str[lengh]!='\0'){
        if(str[lengh] == '%'){
            lengh++;
            switch(str[lengh]){
                case'd':{
                int num = va_arg(arg,int);
                num_lengh += my_printf_num(num);
                }break;
                case'c':{
                    int a = va_arg(arg,int);
                    putchar(a);
                    num_lengh+=-1;
                }break;
                case's':{
                    char * as = va_arg(arg,char*);
                    int i = 0;
                    while(as[i]){
                        putchar(as[i++]);
                    }
                    num_lengh += i-2;
                }break;
                default:{
                    fprintf(stderr,"error\n");
                    freopen("/dev/null","W",stdout);
                }
            }
        }else{
            putchar(str[lengh]);
        }
        lengh++;
    }
    va_end(arg);
    return lengh + num_lengh;
}

int main(){
    int n = 123;
    int a = 1,b =2;
    my_printf("hello world\n");
    my_printf("n = %d\n",n);
    my_printf("%d + %d = %d\n",a,b,a +b );
    my_printf("n = %d\n",456);
    my_printf("n = %d\n",-5);
    my_printf("n = %d\n",12000);
    my_printf("n = %d\n",INT32_MIN);
    my_printf("n = %d\n",INT32_MAX);
    my_printf("n = %d\n",0);
    my_printf("%c\n",'a');
    my_printf("%s\n","abcdefgh");
    return 0;
}
