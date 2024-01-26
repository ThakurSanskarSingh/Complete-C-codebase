#include <stdio.h>
int main(){
    int k=65;
    for(int i=1;i<=4;i++){
        for(int i = 1;i<=4;i++){
            char ch = (char)k;
            printf("%c ",ch);
            k++;
        }
        printf("\n");
         k=65;
    }

   
}