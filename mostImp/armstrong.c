#include <stdio.h>

int main () {
    int n , t ,rem , arm =0;
    printf("Enter any number");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        rem = n% 10;
        arm = (rem*rem*rem) + arm;
        n = n/10;

    }
    if (t == arm )
    {
        printf("%d is ArmStrong",t);

    } else {
        printf("%d is not armstrong",t);
    }
    
    



    return 0;
}