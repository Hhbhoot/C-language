#include<stdio.h>
void main()
{

char str[50];
printf("Enter a string : ");
scanf("%[^\n]s",&str);

int i = 0;
while(str[i]!='\0'){

i++;
       }


printf("length is :%d\n",i);



for(int j=0;j<i/2;j++){
            
     
        printf("%c%c",str[j],str[i-j-1]);
 
   
                    }
 
if(i%2!=0){
            printf("%c",str[(i/2)]);
       }
        

    }                  
              
             
             
             
             
             
            
 
             
      
                  
      

