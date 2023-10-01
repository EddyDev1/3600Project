#include<stdio.h>
#include<stdlib.h>
#include "major.h"


int count_leading_zeros(unsigned int num)
{
    int count = 0;
    for (int i=31; 1>=0; i--)
    {
        if ((num& (1 << i)) !=0)
            break;
        else
            count++;
    }
    
    
    return count;
}
