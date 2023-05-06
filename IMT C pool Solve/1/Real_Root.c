/*********************************************
 * Author:          AYMAN HARRAZ
 * Version:         v1.0
 * Compiler:        GNU GCC
 ********************************************/
/**********************************************
Write C code to compute the real roots of the equation:
ax2+bx+c=0.
The program will prompt the user to input the values of a, b, and c.
It then computes the real roots of the equation based on the
following rules:
-if a and b are zero=> no solution
-if a is zero=>one root (-c/b)
-if b2-4ac is negative=>no roots
-Otherwise=> two roots
The roots can be computed using the following formula:
 x1=-b+(b2-4ac)1/2/2a
 x2=-b-(b2-4ac)1/2/2a
Used library < math.h>
*************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{

  double a, b, c;
  double root1, root2;
  printf("Please Enter The 3 Numbers\n");
  scanf("%d%d%d", &a, &b, &c);

  if (a == 0 && b == 0)
  {
    printf("No solution \n");
  }
  else if (a == 0)
  {
    root1 = (-1 * c) / (b);
    printf("X=%d\n", root1);
  }
  else if (((b * b) - (4 * a * c)) < 0)
  {
    printf("No roots\n");
  }

  else
  {
     double Z1 = (b * b) - (4 * a * c);
   
    root1 = ((-b)/(2 * a)) + sqrt(Z1) / (2 * a);
    root2 = ((-b)/(2 * a)) - sqrt(Z1)/ (2 * a);
    printf("X1= %f\n,X2= %f\n", root1, root2);
  }
}
