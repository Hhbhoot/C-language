#include<stdio.h>
int function(){
  
  int n;  
  printf("Enter value of Feet :");
  scanf("%d",&n);

  int inch = 12 * n;
  return inch;   
               } 
void main()
{
 
 printf("Convert feet into inch =>\n");
 int x=function();
 printf("Your converted Feet into inch : %d",x);

}