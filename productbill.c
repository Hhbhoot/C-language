#include<stdio.h>
struct product{
                int no ;
                char name[50] ;
                int rate ;
                int quantity ;
                int amount ;
                int discount;
                int bill;
                int gst;
                int total;

};

 int main(){

          struct product a[5];
  for(int i=0;i<5;i++){

  printf("enter number :");
  scanf("%d",&a[i].no);

  printf("enter  product name:");
  scanf("%s",&a[i].name);

  printf("enter rate :");
  scanf("%d",&a[i].rate);

  printf("enter quantity : ");
  scanf("%d",&a[i].quantity);
                       }
 
 

  for(int i=0;i<5;i++){
  
    a[i].amount = (a[i].rate) * (a[i].quantity);
    a[i].discount=  0.05* a[i].amount;
    a[i].bill = (a[i].amount) - (a[i].discount);
    a[i].gst =  0.18 * a[i].bill;
    a[i].total= (a[i].bill) + (a[i].gst); 
                     }
  printf("number\tp name\trate\tquantity\tamount\tdiscount\tbill\tgst\ttotal");
   printf("\n");
  for(int i=0;i<5;i++){
    
     
    printf("%d\t%s\t%d\t%d\t\t%d\t%d\t\t%d\t%d\t%d\n",a[i].no,a[i].name,a[i].rate,a[i].quantity,a[i].amount,a[i].discount,a[i].bill,a[i].gst,a[i].total);

 }

}



 
