#include <stdio.h>
int main()  {
int arr[10] = { 3 , 5, 6,  18, 19, 110 ,6 , 8 , 9 , 10} , max = arr[0];
for(int i =0 ; i<=10 ; i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
printf("%d" ,max);

    return 0;
}