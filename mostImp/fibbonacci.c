#include <stdio.h>

int main()
{
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", terms);

    for (int i = 0; i < terms; ++i)
    {

        printf("%d ", first);

        next = first + second;

        first = second;
        second = next;
    }

    return 0;
}
