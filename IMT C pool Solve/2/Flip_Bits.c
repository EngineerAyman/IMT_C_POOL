/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and Flip all bits
of the given number (in binary representation ) using bitwise
operators
*************************************************/
#include <stdio.h>
void main(void)
{

    int x, n, New_x;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);

   
    New_x =~x;
   
        printf("The Number before Flip operation in decimal is: %d \n", x);
        //printf("The Number before shift in binary is : \n", );

        printf("The Number after Flip operation in decimal is : %d\n", New_x);

}