#include <stdio.h>
#include <math.h>
int main(){
    float principal , rate , time , simple , coumpound ;
    printf("enter principal value");
    scanf("%f",&principal);
    printf("enter time");
    scanf("%f",&time);
    printf("enter rate");
    scanf("%f",&rate);
simple = (principal*rate*time)/100 ;
printf("simple interest = %f",simple);
coumpound = principal * (pow((1+rate/100),time)-1) ;
printf("compound interest = %f",coumpound);


}