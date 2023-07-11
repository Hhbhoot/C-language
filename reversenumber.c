#include<stdio.h>

int reverse(){
     
   int n,m;
   printf("Enter a Number :");
   scanf("%d",&n);

   
  int i=1; 
  while(n!=0){
   
        m= n%10;
        n=n/10;

     i++;
    printf("%d",m);
 
 }

        
  }

int main(){
 
    reverse();
  }