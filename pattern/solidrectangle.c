#include<stdio.h>
int main() {
   int n ;
   printf("Enter no. of * you want");
   scanf("%d",&n);
   for(int i=1;i<=4;i++){ /*no. of rows*/
    for(int i=1;i<=n;i++){ 
        printf("*");
    }
    printf("\n");
   }



    return 0;
}