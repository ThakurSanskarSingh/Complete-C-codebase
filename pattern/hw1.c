#include <stdio.h>
int main()
{
    int n,k=65;
    printf("Enter no. of row you want");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { /*no. of rows*/
        for (int j = 1; j <= i; j++)
        {
       if(i%2!=0){
        printf("%d",j);
       }else {printf("%c",k);
       k++;
       }
      
  
        }
        printf("\n");
        k=65;
    }

    return 0;
}