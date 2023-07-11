#include<stdio.h>
int main(){
    int i , sum =0;
    int n;
    printf("Enter N :");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+23){
         
        printf("%d ",i); 
        sum = sum + i;   
    }
    printf("\nSum %d",sum);
    
}