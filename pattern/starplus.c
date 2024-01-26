#include<stdio.h>
int main() {
   int n ;
   printf("Enter no. of row you want");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){ /*no. of rows*/
    for(int j=1;j<=n;j++){ 
        int a= n/2+1;
        if(j==a || i==a){
            printf("* ");
        }else {
            printf(" ");
        }
    }
    printf("\n");
   }



    return 0;
}