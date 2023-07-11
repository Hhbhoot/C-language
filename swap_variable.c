#include <stdio.h>
int main()
{

    int a, b;
    int *p, *q;
     
    p = &a;
    q = &b;

    printf("Enmter value of A :");
    scanf("%d", &a);

    printf("Enter value of B :");
    scanf("%d", &b);

    printf("\n");

    printf("\nAddress of A :%u", p);
    printf("\nAddress of B :%u", q);

    printf("\n");
     
    int swap;
    swap = *p;
    *p = *q ;
    *q = swap ;
     

   //*p = *p + *q;
   //*q = *p - *q;
   //*p = *p - *q;

    printf("\nValue of A : %d", *p);
    printf("\nValue of B : %u", *q);

    printf("\n");

    printf("\n Address of A : %u", p);
    printf("\n Address of B : %u", q);
}