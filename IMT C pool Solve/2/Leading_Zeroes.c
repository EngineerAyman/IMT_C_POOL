/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and find the
Total number of leading zeros in the given value
*************************************************/
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8
void main(void)
{

    int x, Position = -1;
    int No_of_Leading;
    printf("Please Enter The Numbers\n");
    scanf("%d", &x);
    for (int i = 0; i < INT_SIZE; i++)
    {
        if ((x >> i) & 1)
            Position = i;
    }

    No_of_Leading = (INT_SIZE - 1) - Position;
    if (Position != -1)
    {
        printf("The Leading Zeroes in %d is : %d \n", x, No_of_Leading);
    }
    else
    {
        printf("This Number not have one \n");
    }
}
