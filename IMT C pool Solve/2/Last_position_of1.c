/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and find the position
of the last one ‘1’ Hint:
Number =10  00001010
the position of the last one is bit number ‘3’
*************************************************/
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8
void main(void)
{

    int x, Position = -1;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);
    for (int i = 0; i < INT_SIZE; i++)
    {
        if ((x >> i) & 1)
            Position = i;
    }
    if (Position != -1)
    {
        printf("The Last Position of one in %d at  bit no %d \n", x, Position);
    }
    else
    {
        printf("This Number not have one \n");
    }
}
