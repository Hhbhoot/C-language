#include<stdio.h>
int function(){
    char ch =65;
   for(int i=1;i<=5;i++){
   ch=65;
   for(int j=1;j<=i;j++){

           printf("%c",ch);
           ch++;
              
                          }
             printf("\n");                          }  
 
}
void main(){
   
    function();
 }