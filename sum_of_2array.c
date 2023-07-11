#include<stdio.h>
int main(){

    int a[3][3],b[3][3],sum[3][3];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            printf("Enter value of a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
             printf("Enter value of b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
     }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            
        sum[i][j] = a[i][j] + b[i][j];
            }
    
        
     
        for(int j=0;j<3;j++){
            printf(" %d %d ",a[i][j],b[i][j]);
        }
        for(int j=0;j<3;j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
     }  
     
}



