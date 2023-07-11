#include<stdio.h>
int function(){
    int n; 
    printf("Enter your Salary : ");
    scanf("%d",&n);
   
   float tax;
   
    if(n<=2500)  printf("your tax is : %f",n*0); 
    else if(n>2500 && n<=5000) printf("your tax is :%0.2f",0+(n-2500)*0.1);
    else if (n>5000 && n<=10000)printf("Your tax is:%0.2f",0+250+(n-5000)*0.2);
    else printf("Your tax is : %0.2f",0+250+1000+(n-10000)*0.3);   
        }
void main(){

   printf("Calculate Taxation on the given salary :");
   function();

           }