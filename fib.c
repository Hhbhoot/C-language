#include<stdio.h>
int a=0,b=0,sum=1;
int fib(int n)
{
   if(n>0){
           printf("%d ",sum);
           a=b;
	   b=sum;
	   sum=a+b;
     fib(--n);
            }

             
}
int main(){
        int n;
        printf("Enter value of n :");
        scanf("%d",&n);

        fib(n);
  }