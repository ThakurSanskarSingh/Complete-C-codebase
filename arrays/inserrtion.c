#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6};  
    int n1, n2;

    printf("Enter position where you want to enter number: ");
    scanf("%d", &n1);

    if (n1 < 0 || n1 > 5) {
        printf("Invalid position\n");
        return 1;  
    }

    printf("Enter number you want to enter: ");
    scanf("%d", &n2);

    for (int i = 5; i >= n1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[n1] = n2;

    for (int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;  
    }
