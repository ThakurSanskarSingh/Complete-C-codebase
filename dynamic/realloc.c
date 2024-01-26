#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n , i;

    n = 5;

    printf("Entered no. of elements : %d \n",n);

    ptr = (int*)malloc(n* sizeof(int));
    if(ptr==NULL){
        printf("Memory not alloated \n");

    }else {
        printf("Memory has been succesfully allocated \n");

    }
for(i = 0; i<n;i++){
    ptr[i] = i+1;
}

printf("The elemeents of array are ");
for(i=0;i<n;i++){
    printf("%d ",ptr[i]);
}

n = 10;

printf("New size of array : %d \n");

ptr = realloc(ptr , n* sizeof(int));

for(i = 5;i<=n;i++){
    ptr[i] = i+1;
}

printf("The elements are : ");
for(i = 0;i<n;i++){
    printf("%d",ptr[i]);
}

    return 0;
}