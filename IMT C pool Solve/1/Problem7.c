/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C code To check whether a character is
Vowel or Consonant
Hint: The vowel number is (a,e,o,l,u)
*************************************************/
#include <stdio.h>
#include <stdlib.h>


void main(void)
{

    char x;
    printf("Please Enter Char  \n");
    scanf("%c", &x);

    if ((x == 'A') | (x == 'I') | (x == 'E') | (x == 'O') | (x == 'U') |
        (x == 'a') | (x == 'i') | (x == 'e') | (x == 'o') | (x == 'u'))
    {
        printf(" %c is a Vowel Char\n", x);
    }
    else
    {
        printf(" %c is a Constant Char\n", x);
    }
}
