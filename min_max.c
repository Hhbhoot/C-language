#include<stdio.h>
#define n 10

int dis(int arr[]){
              
         for(int i=0;i<n;i++){
          
         printf("%d ",arr[i]);
                             
                               }
         int max = arr[0];
         int min= arr[0];
         
         for(int i=0;i<n;i++){
         if(arr[i]>max) {
                        max=arr[i];
                         } 
           
          if(min>arr[i]) {
               min=arr[i];
                          }
               }
            printf("\nMaximum : %d",max);
            printf("\nMinimum : %d",min);
                   }
int main(){
         
      int arr[n];
      for(int i=0;i<n;i++){
      printf("Enter value of arr[%d]",i);
      scanf("%d",&arr[i]); 
                        }

      dis(arr);
}