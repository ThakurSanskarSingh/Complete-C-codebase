#include <stdio.h>
int main() {
    int *ptr , a=5 , **ptr1;
    ptr1 = &ptr;
    ptr = &a;
    printf("Value of variable accessed by  pointer : %d \n",*ptr);
    printf("address of variable accessed by  pointer : %u \n",ptr);
    printf("Value of variable accesed using chain pointer : %d \n",**ptr1);
    printf("address of pointer accesed using chain pointer : %d\n",ptr1);
    printf("address of varibale accesed using chain pointer : %d\n",*ptr1);
    printf("address of chain pointer accesed using chain pointer : %d",&ptr1);

 return 0 ;
}