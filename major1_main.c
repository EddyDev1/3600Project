#include <stdio.h>
#include "major1_main.h"
//old version

int main(int argc, char *argv[]) {
  int p = 0;
  do{
    int pick = 0;

    do{
      if(pick != 0){printf("Error: invalid option. Please try again.\n");}
    printf("Enter the menu option for the operation to perform: \n");
    printf("(1) Count Leading Zeroes\n(2) Endian Swap\n(3) Rotate-right\n(4) Parity\n(5) Exit\n");
    scanf("%d", &pick);
    } while (pick < 1 || pick > 5);

    switch (pick) {
      case 1:
      {
        long int p1 = 0;
        do{
          printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
          scanf("%ld", &p1);
        }while (p1 < 1 || p1 > 4294967295);
        //printf("The number of leading zeroes in %d is %ld\n", p1, countLeadingZeroes(p1));
        p = 1;
      }
        break;
      case 2:
      {
        long int p2 = 0;
        do{
          printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
          scanf("%ld", &p2);
        }while (p2 < 1 || p2 > 4294967295);
        //printf("Endian swap of %d gives %ld\n", p2, endianSwap(p2));
        p = 1;
      }
        break;
      case 3:
      {
        long int p3 = 0;
          printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
          scanf("%ld", &p3);
          int pn3 = 0;
          printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
          scanf("%d", &pn3);
        //printf("%ld rotate by %d position gives: %ld\n", p3, pn3, rotateRight(p3, pn3));
        p = 1;
      }
        break;
      case 4:
      {
        //testing my function with Bernice style main
        long int p4 = 0;
          printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
          scanf("%ld", &p4);
        printf("Parity of %ld is %ld\n", p4, parity(p4));
        p = 1;
      }
        break;
      case 5:
        printf("Exiting...\n");
        p = 5;
        break;
    }
  } while (p != 5);
  return 0;
}