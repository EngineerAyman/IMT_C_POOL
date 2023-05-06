/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a c code that will ask the user to enter four values a,b,c and d 
then evaluates the ratio of (a + b) to (c-d) and prints the result,
if (c-d) is not equal zero 
*************************************************/
#include <stdio.h>


void main(void)
{

    int a, b, c, d;
    float ratio;
    printf("Please Enter 4 value  \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    float add = a + b;
    float sub = c - d;

    ratio = (add)/(sub);
      printf("Ratio = %f\n",ratio);
}