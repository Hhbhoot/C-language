#include<stdio.h>
int main(){

    int a  ,b , c;
    printf("Enter value of A B C :");
    scanf("%d%d%d",&a,&b,&c);

    a>b ? (a>c ?  printf("A is largest"): printf("c is THe largest")):b>c ? printf("B is largest") : printf("C is the largest");
    
}