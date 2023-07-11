#include<stdio.h>
int main(){
  
    FILE * fp;

    char data[250];

    fp=fopen("file1.txt","r");

    while(fscanf(fp,"%s",data)!= EOF){

      printf("%s",data);
    }
    fclose(fp);
        
    }
