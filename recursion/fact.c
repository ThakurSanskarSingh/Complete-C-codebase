#include <stdio.h>
int fact(int);
int main () {
    int n , i,k;
    printf("Enter no. whose factorial is required");
    scanf("%d",&n);
    k = fact(n);
    printf("Factorial of %d is : %d",n,k);
    return 0;
}
int fact (int n){
    if(n==0||n==1){
        return 1;
    } else {
        return n*fact(n-1);
    }
}