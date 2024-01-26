#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,r1,r2,d;
    printf("enter coefficient of x^2");
    scanf("%f",&a);
    printf("enter coefficient of x");
    scanf("%f",&b);
    printf("enter constant");
    scanf("%f",&c);
    d = b * b - 4 * a * c;
    if(d>0){
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("roots are %f and %f", r1,r2);
    }
    else if(d<0){
        printf("roots are imaginary");

    }
    else if(d=0){
        r1 = -b/2*a;
        r2 = -b/2*a;
         printf("roots are %f and %f", r1,r2);
    }
    else{
        printf("invalid input");
    }

}