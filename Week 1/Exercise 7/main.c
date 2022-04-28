/*Exercise: 7
Description: Consider the equation f(x) = 2*sin(pi*x) + 3*cos(pi*x)
Write a program that computes the values of f(x) for the following values of x: 0.25, 0.5, 1,2.
Your program should allow the user to enter the value from the standard input and the
results will be displayed as follows:
------------------------------
*Value of x     Value of f(x)
*0.25           3.5355
*0.5
*1
*2
------------------------------
Author: Daniel Geula
Date: 24/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>
#include <math.h>

int main() {

  float x[4], fx[4];

  printf("Enter 4 values for x:\n");

  for(int i = 0; i < 4; ++i) {
    scanf("%f", &x[i]);
    fx[i] = 2 * sin(M_PI * x[i]) + 3 * cos(M_PI * x[i]);
  }

  printf("\nValue of x \t Value of f(x)\n");

  for(int i = 0; i < 4; ++i) {
     printf("%.2f \t\t %.4f \n", x[i], fx[i]);
  }

  return(0);
}
