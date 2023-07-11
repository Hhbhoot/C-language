#include <stdio.h>
int main()
{

    int i, j, k = 5;

    for (i = 1; i <= 5; i++)
    {
        k = 5;
        for (j = 1; j <= i; j++)
        {

            printf("%d", k);
            k = k - 1;
        }
        printf("\n");
    }
}