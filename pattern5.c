#include <stdio.h>
int main()
{

    char ch = 'a';
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c ", ch - 32);
                ch += 1;
            }
            else
            {
                printf("%c ", ch);
                ch += 1;
            }
        }
        printf("\n");
    }
}