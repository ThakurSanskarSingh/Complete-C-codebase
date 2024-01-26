#include <stdio.h>
 int main () {
    int a[2][2] = {2,3,4,5};
    int b[2][2] = {2,3,4,5};
    int c[2][2];
    for(int i = 0;i<2;i++){
        for(int j=0;j<=2;j++){
            c[i][j] == 0;
            for(int k=0;k<2;k++){
                c[i][j] = c[i][j] + a[j][k] * b[k][j];
            }

        }
    }
    for(int i = 0 ; i<2;i++){
        for(int j = 0; j<2;j++){
            printf("%d ",c[i][j]);
        } printf("\n");
    }




    return 0;
 }
