#include<stdio.h>
int result(){
 
    int a ,b ,c,total,pr;
    printf("Enter marks of A B C ");
    scanf("%d %d %d",&a , &b,&c);
    total=a+b+c;
    pr = (total*100)/300;
  
    if (pr<33) printf("student is fail");
    if (pr>33) return pr;  
      }

void main(){

  int x=result();
  if(x>33) printf("student is pass ");

  }
      