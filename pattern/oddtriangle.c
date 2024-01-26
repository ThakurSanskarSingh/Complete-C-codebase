#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter no. of row you want");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { /*no. of rows*/
        for (int j = 1; j <= i; j++)
        {
            a = 2*j-1;
            printf("%d ", a);
        }
        printf("\n");
    }

    return 0;
}