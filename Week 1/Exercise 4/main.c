/* Exercise 4 - Reversing two-digit numbers
 * Author: Daniel Geula
 * Date: 30/04/2022
 * Version: 1.0
*/

#include <stdio.h>

int main() {

    int num;

    printf("\nEnter a two digit number:");
    scanf("%d", &num);

    printf("\n%d reversed is %d%d\n", num, num%10, num/10);

    return 0;
}