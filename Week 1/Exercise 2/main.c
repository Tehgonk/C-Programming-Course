/*Exercise: 2
Description: Write a C program to declare two integer and one float variables then
initialise them to 10, 15, and 12.6. It then prints these values on the screen.
Author: Daniel Geula
Date: 18/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    int a = 10, b = 15;
    float c = 12.6;

    printf("a = %d\nb = %d\nc = %.2f\n", a,b,c);

    return 0;
}
