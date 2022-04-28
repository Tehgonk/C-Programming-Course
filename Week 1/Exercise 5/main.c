/*Exercise: 5
Description: Write a program that asks the user to enter the value of temperature
in degrees Celsius and converts it to Fahrenheit.
Author: Daniel Geula
Date: 23/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    int celsius, fahrenheit;

    printf("Enter a value in Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\nThat's %d in Fahrenheit.\n", fahrenheit);

    return 0;
}
