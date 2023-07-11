#include<stdio.h>
int function(){
   
     float n , j=0.5 ;
     
    printf("Enter value of n :");
    scanf("%f",&n);
  
   for(float i=0.5;i<n;i++){

    printf("%0.2f ",j);
    j=i+j; 
             }
   
}
void main()
{
       printf ("print this series upto n"); // 0.5,1,2.5,5,..
       function();
}