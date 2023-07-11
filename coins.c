#include<stdio.h>
int coin(){

    int n ;
    printf("Enetre value of n "); 
    scanf("%d",&n);

    int arr[5]={20,10,5,2,1};
    printf("The coins are :");
    int i=1;
    while(n>=arr[0]){

       printf("%d ",arr[0]);
         n=n-20;
           i++;

                }   
    int j=1;
    while(n>=arr[1]){

       printf("%d ",arr[1]);
         n=n-10;
          j++;

                } 
      int k=1;
    while(n>=arr[2]){

       printf("%d ",arr[2]);
         n=n-5;
         k++;

                }        
  int l=1;
    while(n>=arr[3]){

       printf("%d ",arr[3]);
         n=n-2;
         l++;
                }   
                 
int m=1;
    while(n>=arr[4]){

       printf("%d ",arr[4]);
         n=n-1;
         m++; 

                }   
 
}
int main(){
 
    coin();  
      }