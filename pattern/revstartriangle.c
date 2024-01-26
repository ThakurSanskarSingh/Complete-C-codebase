#include <stdio.h>
int main() {
 int a;
//  printf("Enter no. of rows you want to print");
//  scanf("%d",&n);
 a=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=a;j++){
            printf("* ");
            
        }
        a--;
        printf("\n");
        
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         printf("* ");
            
    //     }
    //     printf("\n");
        
    // }
return 0;
   
}