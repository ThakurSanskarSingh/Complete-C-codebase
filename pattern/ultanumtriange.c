#include <stdio.h>
int main(){
    int a,n;
    printf("Enter no. of row you want");
    scanf("%d",&n);
    a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
    return 0;
}