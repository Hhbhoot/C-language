#include<stdio.h>
void main()
{

 char str[50];

 printf("Enter a string :");
 scanf("%[^\n]s",&str);

 int i=0;
 int len=0;

while(str[i]!= '\0'){

  i++;
  len++;
               }
 printf("Length is : %d\n",len);

 for(i=0;i<len/2;i++){

   char swap;
   swap = str[i];
   str[i] = str[len -i -1];
   str[len -i -1]=swap;
 }

  printf("Reversed string is : %s",str);

   
}