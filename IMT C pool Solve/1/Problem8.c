/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C code that will ask the user to enter number and
check this number positive or negative.
*************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{

  int x;

  printf("Please Enter The Numbers\n");
  scanf("%d", &x);
  if (x >= 0)
  {
    printf("The Number is Positive \n");
  }
  else
  {
    printf("The Number is Negative \n");
  }
}
