#include "major.h"
#include <stdio.h>
unsigned long int parity(unsigned long int x){
    while (x < 0 || x > 4294967295)
    {
        printf("INVALID INPUT: You entered an invalid input for the parity value\n");
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%ld", &x);
    }
    
    int c = 0;
    for(int i = 7, j = 0; i >= 0; i--, j++)
    {
        unsigned long int hold = x >> i;
        c = hold & 1 ? ++c : c;
    }

    return c % 2 ? 0 : 1;
}
