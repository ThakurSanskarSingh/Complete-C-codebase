#include <stdio.h>
int main () {
    // for(int i = 1; i<=5;i++){
    //     for( int j=1;j<=1;j++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j<=i*2;j++){
    //         printf("%d",j);
    //     }
    //     for(int j= 2*i-2;j>=i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");


    // }
    // int rows = 5; // Number of rows in the pattern

    // for (int i = 1; i <= rows; i++) {
    //     // Print leading spaces
    //     for (int j = 1; j <= rows - i; j++) {
    //         printf("  ");
    //     }

    //     // Print increasing numbers
    //     for (int j = i; j < i * 2; j++) {
    //         printf("%d", j);
    //     }

    //     // Print decreasing numbers
    //     for (int j = i * 2 - 2; j >= i; j--) {
    //         printf("%d", j);
    //     }

    //     // Move to the next line after each row
    //     printf("\n");
    // }
int i, space, rows, k = 0, count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }





    return 0;
}