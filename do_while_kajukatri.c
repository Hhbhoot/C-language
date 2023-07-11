#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n :");
    scanf("%d",&n);

    int nsp =n/2;
    int nst=1;
    int ml=n/2 +1;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=nsp){
            printf("  ");
            j++;
        }
        int k=1;
        while(k<=nsp){
            printf("* ");
            k++;
        }
        if(i>ml){
            nsp++;
            nst-=2;
        }
        else{
            nsp--;
            nst+=2;
        }
        i++;
        printf("\n");


    }
}