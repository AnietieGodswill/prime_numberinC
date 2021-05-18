# Emoji In URL

The Project Is About How We Can Find That The Number Entered By User Is A Prime Number Or Not A Prime Number.

## Installation

Copy The Code Below.


```c
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
```

## Contributing
Pull requests are welcome.
