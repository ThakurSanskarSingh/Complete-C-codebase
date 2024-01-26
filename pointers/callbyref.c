#include <stdio.h>
void swap (int * , int *);
int main() {
    int a = 10, b=20;
    printf("value before call\n");
    printf("%d%d\n",a,b);
    printf("Value during call of function\n");
    swap(&a,&b);
    printf("value after function call\n");
    printf("%d %d",a,b);
    




    return 0;
}
void swap(int *x , int *y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
    printf("%d %d \n",*x,*y);


}