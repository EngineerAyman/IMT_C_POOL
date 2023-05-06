/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a c code that will ask the user to enter a character
then print it and find ASCII value of this character then print it
Note: A character variable holds ASCII value (an integer number between 0 and 127)
rather than that character itself in C programming. That value is known as ASCII value.
*************************************************/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    char x;

    printf("Please Enter Char  \n");
    scanf("%c", &x);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("The ASCII code of %c = %d  \n", x, x);
}