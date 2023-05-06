/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C code that will ask the user to enter two values
and swap (Without using third Variable) then print it.
*************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    int x, y;

    printf("Please Enter Two Numbers \n");
    scanf("%d%d", &x, &y);

    printf("The value before Swapping is : %d,%d \n", x, y);
    x = x + y; // x=val(x+y) suppose x=4 y=5  ------ x=9;
    y = x - y; // val(x+y)-y  ----- y = val x ------ y=4;
    x = x - y; // x= val y ----------    x = 5;
    printf("The value after Swapping is :  %d,%d \n", x, y);
}