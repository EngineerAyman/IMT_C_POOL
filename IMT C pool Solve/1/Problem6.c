/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C code that will ask the user to enter two values
(Floating Numbers) and print their Multiply.
*************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    float x,y,result=0;

    printf("Please Enter Two Numbers \n");
    scanf("%f%f", &x, &y);
    result=x*y;
    printf("Result = %f\n",result);
    
}