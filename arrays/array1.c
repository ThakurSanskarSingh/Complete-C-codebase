// to input 5 integers in array and print sum of all 
#include <stdio.h>
int main()  {
int arr[5] , sum = 0;
for(int i = 1 ; i<=5; i++){
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
    printf("%d",sum);
}


    return 0;
}