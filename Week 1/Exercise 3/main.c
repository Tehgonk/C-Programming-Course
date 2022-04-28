/*Exercise: 3
Description: What will be output when you will execute the following c code?  Explain your answer.
Author: Daniel Geula
Date: 23/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    printf("%d\t", sizeof(6.5));
    printf("%d\t", sizeof(90000));
    printf("%d", sizeof('A'));

    return 0;
}
