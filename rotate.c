#include "major.h"
#include <stdio.h>

unsigned int rotate_right(unsigned int input_number, int rotation_value) {
    while (rotation_value <0 || rotation_value > 31){
        printf("INVALID INPUT: You entered an invalid input for the rotation value");
        printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
        scanf("%d",&rotation_value);
    }
    input_number = (input_number >> rotation_value) | (input_number << (32 - rotation_value));
    return (unsigned int)input_number;
}
