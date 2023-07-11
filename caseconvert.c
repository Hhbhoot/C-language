#include<stdio.h>
int function(){
      char ch;
      printf("Enter your Character :");
      scanf("%c",&ch);
   
       printf("%c => %c",ch,ch+32);
    
    }
void main(){
           printf("convert Upper case to lower case:\n");
           function();  
           }