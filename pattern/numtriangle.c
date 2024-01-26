#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of row you want");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { /*no. of rows*/
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}