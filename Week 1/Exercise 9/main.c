/*Exercise: 9
Description: Write a program that takes as input two integer numbers and perform a
swap operation such that:
-----------------
Input: a=5; b=6
Output: a=6; b=5
-----------------
Hint: use a third variable to do the swap.
Author: Daniel Geula
Date: 24/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter a value for a and b:\n");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("\nInput: a=%d; b=%d;\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Output: a=%d; b=%d;\n", a, b);

    return 0;
}
