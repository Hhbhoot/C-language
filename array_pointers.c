#include<stdio.h>
int main(){
   
     int  a[5]={10,11,12,13,14};
     int *p ,**q ;
     p=&a;
     q=&p;

     for(int i=0;i<5;i++){

       printf("%d\t%u\n",*(p+i),(p+i));
       
     }
    
}