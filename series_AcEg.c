#include<stdio.h>
int main(){
    
    
    for(int i=0;i<=25;i=i+2){

        if(i%4==0){
            printf("%c ",i+65);
        } 
        else{

            printf("%c ",i+97);
        }
    }

}