#include <stdio.h>
int main()
{
    int sp = 20;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        sp--;
        printf("\n");
    }
}