/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C program to take any number from user and convert it to
binary number using bitwise operator.
*************************************************/
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8
void main(void)
{

    int x,binary;

    printf("Please Enter The Number\n");
    scanf("%d",&x);

    for(int i =0;i<INT_SIZE;i++)
    {
       binary =(x>>i );
        printf("The Number in binary is:",binary); 
    
        
    }
       

}
