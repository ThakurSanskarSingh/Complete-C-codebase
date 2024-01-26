#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n , i;

    printf("Enter no. of elements \n");
    scanf("%d",&n);

    printf("Entered no. of elements : %d \n",n);

    // ptr = (int*)malloc(n* sizeof(int));
    ptr = (int*)calloc(n,sizeof(int));
    
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

    return 0;
}