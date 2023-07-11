#include<stdio.h>
int function(){
   
  int x ,y;

  printf("Enter value of x :");
  scanf("%d",&x);
 
  printf("Enter value of Y :");
  scanf("%d",&y);

  if(x<2000 || x>3000) printf("%d\n",x); 
  if(y>100 && y<500)  printf("%d",y);
            }
void main()
{
    function();
}