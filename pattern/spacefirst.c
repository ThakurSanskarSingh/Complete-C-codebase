#include <stdio.h>
int main()
{
    int a, k = 1;
    a = 3;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf(" ");
        }
        a--;

        for (int j = 1; j <= i; j++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}