#include<stdio.h>
int main(){

    int i=1;
    while(i<=5){
        int sp=1;
        while(sp<=20){
            printf(" ");
            sp++;


        }
        int j=1;
        while(j<=i){
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
}