/*Exercise: 8
Description: Write a program that prints a random number between 1 and N inclusive.
The program needs to prompt the user to enter the value of N.
Author: Daniel Geula
Date: 24/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main() {

     int n;

     //Initialize random number generator
     srand(time(NULL));

     printf("Enter the value of N: ");
     scanf("%d", &n);

     printf("%d\n", rand() % n + 1);

     return 0;
}
