#include <stdio.h>
int main(){
    int year ;
    printf("Enter your year :");
    scanf("%d",&year);
    if(year % 4 == 0){
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
}