/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a c code that will ask the user to enter two values
and swap then print it.
*************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    int x, y, temp;

    printf("Please Enter Two Numbers \n");
    scanf("%d%d", &x, &y);
    printf("The value before Swapping is : %d,%d \n", x, y);
    temp = x;
    x = y;
    y = temp;

    printf("The value after Swapping is :  %d,%d \n", x , y);
}