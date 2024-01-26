#include <stdio.h>
int main() {
    int a[2][2]={1,2,3,4}, b[2][2]= {5,6,7,8} , c[2][2];
    for(int i= 0; i<2;i++){
        for(int j=0;j<2;j++){
        c[i][j]=0;
        for(int k=0;k<2;k++){
            c[i][j] = c[i][j] + a[i][k]*b[k][i];
        }
        }
    }
    for(int i=0;i<=2;i++){
        for(int k=0;k<=2;k++){
            printf("%d ",&c[i][k]);
        }
    }
    return 0;
}