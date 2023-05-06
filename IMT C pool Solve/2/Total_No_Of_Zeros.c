/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and count the
total number of zeros (0s) and ones (1s)
*************************************************/
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8
void main(void)
{

    int x, Count = 0, TotalNoOfOnes = 0, TotalNoOfZeros = 0;
    printf("Please Enter The Numbers\n");
    scanf("%d", &x);
    for (int i = 0; i < INT_SIZE; i++)
    {
        if ((x >> i) & 1)
            Count++;
    }
    TotalNoOfOnes = Count;
    TotalNoOfZeros = INT_SIZE - TotalNoOfOnes;

    printf("The Total No Of Ones  in %d Equal %d \n", x, TotalNoOfOnes);

    printf("The Total No Of Zeros  in %d Equal %d \n", x, TotalNoOfZeros);
}
