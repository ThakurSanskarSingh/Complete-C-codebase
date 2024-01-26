#include <stdio.h>
#include <math.h>
int main(){
    char ch ;
    printf("enter your alphabet : ");
    scanf("%c",&ch);
    if((ch == 'a') || (ch == 'e') ||  (ch == 'i') || (ch == 'o') || (ch == 'u') || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("vowel");
    }
    else{printf("consonant");
    }
    return 0;
}