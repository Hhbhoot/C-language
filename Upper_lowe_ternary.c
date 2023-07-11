#include<stdio.h>
int main(){

    char ch;
    

    printf("Enter your character :");
    scanf("%c",&ch);

    ch >=65  && ch<= 90 ? printf("%c",ch + 32): printf("%c",ch-32);



}