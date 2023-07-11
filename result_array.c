#include<stdio.h>
int main(){
    int m[3],s[3],e[3],total[3];
    float pr[3];

    for(int i=0;i<3;i++){

        printf("Enter marks of m[%d] s[%d] e[%d]",i,i,i);
        scanf("%d%d%d",&m[i],&s[i],&e[i]);
    }
    for(int i=0;i<3;i++){
        total[i]=m[i]+s[i]+e[i];
        pr[i]=total[i]/3 ;      
    }
    printf("\n");
    printf("Maths\tscience\tEnglish\ttotal\tpercentage\n");

    for(int i=0;i<3;i++){
        printf("%d\t%d\t%d\t%d\t%f\n",m[i],s[i],e[i],total[i],pr[i]);
    }
}
