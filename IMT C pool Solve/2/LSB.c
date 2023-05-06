/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to input any number from user and check
whether Least significant Bit (LSB) of the given number is set (1)
or not (0)
*************************************************/
#include <stdio.h>
void main(void)
{

    int x;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);

    if (x & 1)
    {
        printf("The LSB of %d is set 1 \n", x);
    }
    else
    {
        printf("The LSB of %d is unset 0 \n", x);
    }
}
