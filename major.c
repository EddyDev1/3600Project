#include <stdio.h>
#include <stdlib.h>
#include "major.h"

int main(){
    unsigned int input;
    unsigned int int_to_swap;
    unsigned int clz_num;
    int rotation_value;
    int key;

    printf("Enter the menu option for the operation to perform:\n");
    printf("(1) Count Leading Zeroes\n");
    printf("(2) Endian Swap\n");
    printf("(3) Rotate-right\n");
    printf("(4) Parity\n");
    printf("(5) EXIT\n");
    scanf("%d",&key);

    while (key!=5){
        switch (key)
        {
        case 1:
            printf("--> %d\n",key);
            printf("Enter a 32-bit number (>=1 and <=4294967295): ");
            scanf("%u", &clz_num);
            int zeros = count_leading_zeros(clz_num);
            printf("The number of leading zeros in %u is : %d\n", clz_num,zeros);
            break;
        case 2:
            printf("--> %d\n",key);
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):");
            scanf("%u", &int_to_swap);
            unsigned int swapped_int = endian(int_to_swap);
            printf("Endian swap of %u gives %u\n", int_to_swap, swapped_int);
            break;
        case 3:
            printf("--> %d\n",key);
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):");
            scanf("%u",&input);

            printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
            scanf("%d",&rotation_value); 
           
            unsigned int rotated_output = rotate_right(input,rotation_value);
            printf("%d rotated by %d position gives: %u\n", input,rotation_value,rotated_output);
            break;
        case 4:
            printf("--> %d\n",key);
            unsigned int p;
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):");
            scanf("%u", &p);
            printf("Parity of %u is: %lu\n", p, parity(p));
            break;
        case 5:
            printf("--> %d\n",key);
            printf("Program terminating. Goodbye...");
            exit(1); 
        default:
            printf("--> %d\n",key);
            printf("Error: Invalid option. Please try again.");
            break;
        }

    printf("Enter the menu option for the operation to perform:\n");
    printf("(1) Count Leading Zeroes\n");
    printf("(2) Endian Swap\n");
    printf("(3) Rotate-right\n");
    printf("(4) Parity\n");
    printf("(5) EXIT\n");
    scanf("%d",&key);
   }
     
   

    
}