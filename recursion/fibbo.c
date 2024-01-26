#include <stdio.h>
int fibbo(int);
int main() {
    int n , k;
    printf("Enter no. of terms you want to print in fibbonaci series : \n");
    scanf("%d",&n);
   for(int i = 0 ; i<n;i++) {
    printf("%d ",fibbo(i));
   }
    return 0;
}
fibbo(i){
    
    if(i<=1){
        return i;
    } else {
        return (fibbo(i-2) + fibbo(i-1));
            }
}

