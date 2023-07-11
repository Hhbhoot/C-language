#include<stdio.h>
int main(){

    FILE * fp ;
    fp=fopen("file1.txt","w");

    fputs("Hello Every one...\n",fp);
    fputs("How Are you doing...\n",fp);


}