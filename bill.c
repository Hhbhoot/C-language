#include<stdio.h>
struct bill{

       int meterno;
       char name[50];
       int unit;
       int charges ;
       float total;
         
          };
int main(){

      struct bill a[5];
      int i ;
for(i=0;i<5;i++){

  printf("Enter meter no :");
  scanf("%d",&a[i].meterno);
 
  printf("Enter name :");
  scanf("%s",&a[i].name);

  printf("Enter consumed unit :");
  scanf("%d",&a[i].unit);
   
                }
printf("meterno\tname\tunit\ttotal\n");

for(int i=0 ;i<5;i++){

  if(a[i].unit<=100){
                      a[i].total= (float)a[i].unit * 0.6;
                     }
   else if (a[i].unit >100 && a[i].unit <=300){

                     a[i].total =(float) ((a[i].unit-100) *0.8 ) + 60;
                    }
   else if (a[i].unit >300){
                    
                   a[i].total = (float)((a[i].unit -300))* 0.9  + 60 + 160;

                          }
    }
 if(a[i].total >300){
 
                    a[i].total = a[i].total + 0.15 * a[i].total;

                  }
if(a[i].total < 50){
 
                    a[i].total = 50 ;
                 }
for(int i=0;i<5;i++){

 printf("%d\t%s\t%d\t%.2f\n",a[i].meterno,a[i].name,a[i].unit,a[i].total);
 
                      }
}
 









      