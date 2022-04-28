/*Exercise: 4
Description: Write a program that asks the user to enter a two digit number and returns
as output the number with its digits reversed. Number to reverse: 54.
Author: Daniel Geula
Date: 23/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    int n, remainder, reverse = 0;

    printf("/****************************************************************/\n");
    printf("Please enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("\nNumber reversed is: %d\n", reverse);
    printf("/**************************************************************/\n");

    return 0;
}
