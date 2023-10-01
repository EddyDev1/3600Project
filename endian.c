
/*
    Each 2 character in hex = 1 byte
    Ex. 000000FF is 00000000 00000000 00000000 11111111
        0000FF00 is 00000000 00000000 11111111 00000000

    We first bitshift the int left 8, compare it to the hex value 0xFF00FF00 with &, which
    makes byte 1 into byte 0 and byte 3 into byte 2, then bitshift it right 8 and compare
    it to the hex value 0x00FF00FF with &. Doing it this way, we make two "negative copies"
    of the number with 0's where the other copy has its values and then use the bitwise |
    to compare the copies and end up with the values going from big endian to little endian
    or little endian to big endian.
*/

#include <stdio.h>
#include <stdlib.h>
#include "major.h"

unsigned int endian(unsigned int input)
{
    while (input < 0 || input > 4294967295)
    {
        printf("\nERROR: Invalid input. Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%u", &input);
    }

    input = ((input << 8) & 0xFF00FF00 ) | ((input >> 8) & 0x00FF00FF );
    input = (input << 16) | (input >> 16);

    return input;

}
