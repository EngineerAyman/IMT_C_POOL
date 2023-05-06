/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write a C code that will ask the user to enter number and
check this number Even or Odd.
*************************************************/
void main(void)
{

  int x;

  printf("Please Enter The Numbers\n");
  scanf("%d", &x);
  if (x % 2 == 0)
  {
    printf("The Number is Even \n");
  }
  else
  {
    printf("The Number is Odd \n");
  }
}
