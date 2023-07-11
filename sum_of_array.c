#include<stdio.h>
int main(){

    int a[5],b[5];

    for(int i=0;i<5;i++){

        printf("Enter value of a[%d]",i);
        scanf("%d",&a[i]);
        printf("Enter value of b[%d]",i);
        scanf("%d",&b[i]);
    }
      for(int i=0;i<5;i++){
        int sum = a[i]+b[i];
        printf("sum of a[%d] + b[%d] = %d\n",i,i,sum);

      }
      

}