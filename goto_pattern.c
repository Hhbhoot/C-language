#include<stdio.h>
int main(){
    int i =1 ;
    Text :
    if(i<=5){
        int j =1 ;
        Loop :

        if(j<=5){
            printf(" * ");
            j++;
            goto Loop;
        }
        i++;
        printf("\n");
        goto Text;
         
    }
}