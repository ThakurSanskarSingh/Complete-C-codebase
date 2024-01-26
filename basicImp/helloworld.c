#include <stdio.h>
int main(){
int n ;
// scanf("%d",&n);
// for(int i =0;i<=n; i++){
// printf("Hello World \n");
// }

// print numbers from 1 to 100 
// for(int i =1;i<=100;i++){
//     printf("%d ",i);
// }
// for(int i =0;i<=100;i= i+2){
//     printf("%d ",i);
// }

// Print table of n where n is inputn from user  
scanf("%d",&n);

for(int i=n;i<=n*10;i=i+n){
    printf("%d",i);
}



    return 0;
}