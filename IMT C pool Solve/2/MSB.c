/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to input any number from user and check
whether Most significant Bit (MSB) of the given number is set (1)
or not (0)
*************************************************/
#include <stdio.h>
#define   BITS     sizeof(int)*8   // After replacement 32 bits 
void main(void)
{

    int x,Shift_Msb;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);
    
    Shift_Msb= x>>(BITS-1);
    if (Shift_Msb & 1)
    {
        printf("The MSB of %d is set 1 \n", x);
    }
    else
    {
        printf("The MSB of %d is unset 0 \n", x);
    }
}
