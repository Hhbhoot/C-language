#include<stdio.h>
int perfect(){
 
      int n;
      printf("Enter your Number :");
      scanf("%d",&n);
     
     int sum=0;  
     for(int i=1;i<=n;i++){

           if(n%i==0){
                      printf("%d ",i);
                      sum=sum+i;
              }
   }
        printf("\nThe sum of all positive divisors by 2 :%d\n",sum/2);
  
       if(sum/2==n){
    
                    printf("ITS A PERFECT NUMBER ");
                     }
       else{
                    printf("ITS NOT A PERFECT NUMBER "); 
        }
}

int main(){
         
      perfect(); 
         }