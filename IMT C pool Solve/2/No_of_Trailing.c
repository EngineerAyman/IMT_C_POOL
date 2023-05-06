/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and find the
biggest number of trailing zeros in the given value
Hint
Number =10  10001010
the biggest number of zeros in 10 number is ‘4’
*************************************************/
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8
void main(void)
{

    int x, Count = 0;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);
    for (int i = 0; i < INT_SIZE; i++)
    {
        if ((x >> i) & 1)
        {
        }
        else
        {
            Count++;
        }
    }

    printf("The Number of trailing Zeroes in %d is : %d \n", x, Count);
}
