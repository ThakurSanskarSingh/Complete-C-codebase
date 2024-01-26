#include <stdio.h>
int main (){
    int i , j ;
    char k = 'A' ;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%s",k++);
        }
        printf("\n");
    }
    
    return 0;
    }
