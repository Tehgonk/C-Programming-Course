/*Exercise: 6
Description: Write a program that computes the perimeter and area of a circle.
Program prompts the user to enter the radius of a circle.
Author: Daniel Geula
Date: 24/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>
#include <math.h>

int main() {

    float radius, perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * M_PI * radius;
    area = M_PI * radius*radius;

    printf("The perimeter of the circle is %.2f, and the area is %.2f.\n", perimeter, area);

    return 0;
}
