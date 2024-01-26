#include <stdio.h>

int main () {
    int  number,originalNum, reversedNum = 0, remainder;
    printf("Enter any number");
    scanf("%d",&number);
    originalNum=number;
    while (number != 0) {
        remainder = number % 10;
        reversedNum = reversedNum * 10 + remainder;
        number /= 10;
    }
    if (reversedNum == originalNum )
    {
        printf("%d is pallindrome",originalNum);

    } else {
        printf("%d is not pallindrome",originalNum);
    }
    
    



    return 0;
}