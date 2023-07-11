#include<stdio.h>
int main(){

    int i=1 ;
    Text :
    if(i<=5){
      

      int j=1 ;
      Loop :
      if(j<=i){
        printf(" * ");
        j++;
        goto Loop ;
      }
       
       printf("\n");
       i++;
       goto Text ;

        
    }
}
