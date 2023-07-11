#include<stdio.h>
int coins(){
    
    int n;
    printf("Enter value of Rupees :");
    scanf("%d",&n);

    int arr[10]={2000,500,200,100,50,20,10,5,2,1};
                
    for(int i=0;i<10;i++){        
                         if(n>=arr[i]){  
                                       int count = n/arr[i];
                                       printf(" %d : %d ",arr[i],count);
                                       n=n- count * arr[i];
                                      }
                    
                         }        
      
           }
void main(){
      
     coins();
              }