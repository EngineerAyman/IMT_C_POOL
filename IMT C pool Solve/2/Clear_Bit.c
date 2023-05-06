/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to input any number from user and CLR Bit
*************************************************/
#include <stdio.h>
void main(void)
{

    int x, n, New_x;

    printf("Please Enter The Numbers\n");
    scanf("%d", &x);

    printf("Please Enter number of bit\n");
    scanf("%d", &n);

    New_x = x & (~(1 << n)) ;
   
        printf("The Number before Clear in decimal is: %d \n", x);
        //printf("The Number before shift in binary is : \n", );

        printf("The Number after Clear in decimal is : %d\n", New_x);

}
