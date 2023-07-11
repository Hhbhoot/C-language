#include <stdio.h>
int main()
{
    int n, nsp;

    printf("Enter value of N :");
    scanf("%d", &n);

    nsp = 2 * n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        nsp++;
        printf("\n");
    }
}