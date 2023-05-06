/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and find the position
of the first one ‘1’
Hint
Number =10  00001010
the position of the first one is bit number ‘1’
*************************************************/
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

void main(void)
{

    int x, i;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);
    for (i = 0; i < INT_SIZE; i++)
    {
        if ((x >> i) & 1)
            break;
    }

    printf("The First Position of one in %d at  bit no %d \n", x, i);
}
