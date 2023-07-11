#include<stdio.h>
int main(){

     FILE *fp ;
     fp = fopen("file.txt","w+");
     fprintf(fp,"hello ...\n");
     fputs("good after noon....\n",fp);
     fputs("i m hitesh...\n",fp);
     fclose(fp); 

      
}