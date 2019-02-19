/*************************************************************************
	> File Name: nact.c
	> Author:Gin.TaMa 
	> Mail:1137554811@qq.com 
	> Created Time: 2019年01月12日 星期六 20时36分19秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
typedef struct {
    int roman_flag;
    FILE *fin;
    FILE *fout;
}System_args;

int init(int ,char*[],System_args*);
void read_and_output(System_args *);
void close_all(System_args *);

int main(int argc,char *argv[]){
    System_args main_args;
    if(init(argc,argv,&main_args) == 0){
        return 0;
    }
    read_and_output(&main_args);
    close_all(&main_args);
    return 0;
}

int init(int argc,char *argv[],System_args*args){
    if(argc < 2)return 0;
    args->roman_flag = (strcmp(argv[1],"-r") == 0 ? 1 : 0);
    args->fin = stdin;
    args->fout = stdout;
    if(argc >= 3){
        args->fin = fopen(argv[2],"r");
        if(argc >= 4){
            args ->fout = fopen(argv[3],"w");
        }
    }
    return 1;
}

void close_all(System_args *args){
    if(args->fin != stdin){
        fclose(args->fin);
        args->fin = NULL;
    }
    if(args->fout !=stdout){
       fclose(args->fout);
        args->fin = NULL;
    }
    return ;

}

void read_and_output(System_args * args){
    if(args->fin == NULL || args->fout == NULL)return ;
    int line_index = 1;
    int output_line_index = 1;
    char dst[25];
    char c;
    while(fscanf(args->fin,"%c",&c) != EOF){
        if(output_line_index == 1){
            if(args->roman_flag){
                fprintf(args->fout,"%s\t",to_roman_numeral(dst,line_index));
            }else{
                fprintf(args->fout,"%d\t",line_index);
            }
            output_line_index = 0;
        }
        fprintf(args->fout,"%c",c);
        if(c == '\n'){
            output_line_index  = 1;
            ++line_index;
        }
    }
}
