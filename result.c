#include<stdio.h>
int setdata(int m[3],int s[3],int e[3]){
         for(int i=0;i<3;i++){
         printf("Enter marks of m[%d] s[%d] e[%d]",i,i,i);
         scanf("%d %d %d",&m[i],&s[i],&e[i]);
                                       }    
 
}
int calc(int m[3],int s[3],int e[3],int t[3],float pr[3]){
       
       for(int i=0;i<3;i++){
 
       t[i]=m[i]+s[i]+e[i]; 
       pr[i]=t[i] /3;
                      }       
}
int display (int m[3],int s[3],int e[3],int t[3],float pr[3]){
          
         printf("\nmaths\tscience\tenglish\ttotal\tpercentage\n");
         for(int i=0;i<3;i++){

         printf("%d\t%d\t%d\t%d\t%0.2f\n",m[i],s[i],e[i],t[i],pr[i]);
                       }
}
int main(){
           int m[3],s[3],e[3],t[3];
           float pr[3];
         
      setdata(m,s,e);
      calc(m,s,e,t,pr);
      display(m,s,e,t,pr);                  
            }