#include <stdio.h>
 int main () {
    float x, sum=1 , no_row=1;
    int i , n ;
    printf("Entern no. of term : ");
    scanf("%d",&n);
    printf("Enter vlaue of x  :" );
    scanf("%d",x);
    for( i = 0;i<=n;i++){
        no_row = no_row * x / (float)i;
        sum = sum + no_row;

    }
     printf("\nThe sum is : %f\n", sum);
    return 0;
 }