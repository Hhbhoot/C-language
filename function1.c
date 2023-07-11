#include<stdio.h>

int smallest(){
 
   int a,b;
   printf("Enter a :");
   scanf("%d",&a);
   printf("Enter b :");
   scanf("%d",&b);

    if(a<b) return a;
    else    return b;   
        }   

int main()
{
    
     int x=smallest();

    
    printf("smallest is %d",x);
   
    return 0;

 }