#include <stdio.h>
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c ", ch);
                ch += 1;
            }
            else
            {
                printf("%c ", ch + 32);
                ch += 1;
            }
        }
        printf("\n");
    }
}