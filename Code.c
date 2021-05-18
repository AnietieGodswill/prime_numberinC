#include<stdio.h>
main() {
    int n, i, count=0;
    printf("Enter Number");
    scanf("%d",&n);
   
    for ( i = 1; i<= n; i++) {
        if (n % i == 1) {
            count++;
        }
    }
    if( count == 2) {
        printf("Prime Number");
    }
    else {
        printf("Not A  Prime Number");
    }
}
