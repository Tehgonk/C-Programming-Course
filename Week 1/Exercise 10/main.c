/*Exercise: 10
Description: Write a program that takes two floating point numbers and perform a
swap operation. In this exercise perform the swap without a third variable.
Author: Daniel Geula
Date: 24/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    float a, b;

    printf("Enter a value for A and B: ");
    scanf("%f %f", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swapping : A = %.2f, B = %.2f\n", a, b);

    return 0;
}
