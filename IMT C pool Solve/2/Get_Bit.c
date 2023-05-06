/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to input any number from user and check
whether nth bit of the given number is set (1) or not (0)
*************************************************/
#include <stdio.h>
void main(void)
{

    int x, n, Shift_Bit;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);

    printf("Please Enter number of bit\n");
    scanf("%d", &n);

    Shift_Bit = (x >> n);
    if (Shift_Bit & 1)
    {
        printf("The bit No. %d of %d is set 1 \n", n, x);
    }
    else
    {
        printf("The bit No. %d of %d is set 0 \n", n, x);
    }
}
