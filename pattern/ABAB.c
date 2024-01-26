#include <stdio.h>
int main () {
    char ch = 'A' , ch1 = 'B';
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=i;j++){
            if(j%2==0){
                printf("%c ",ch1);
            } else {
                printf("%c ",ch);
            }

        }printf("\n");
    }




    return 0;
}