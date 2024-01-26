#include <stdio.h>
// #include <conio.h>
int main(){
    int a , b ,c ;
    printf("enter three numbers");
    scanf("%d%d%d", &a,&b,&c);
    if((a>b)&&(a>c)){
        printf("a is greatest");

    }
    else if((b>c)&&(b>a)){
        printf("b is greatest");

        }
        else if((c>a)&&(c>b)){
printf("c is greatest");
        }
    return 0;
}
