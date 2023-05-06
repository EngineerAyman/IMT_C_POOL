/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a c code that will ask the user to enter two values and print
their division and reminder
Note: this problem to know the difference between division and reminder
*************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{

    int x,y;

    printf("Please Enter Two Numbers \n");
    scanf("%d%d", &x,&y);
    
    int division = x/y;
    int reminder = x%y;
    printf("The Division = %d\n",division);
    printf("The reminder = %d\n",reminder);
}