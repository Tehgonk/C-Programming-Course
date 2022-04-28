/*Exercise: 11
Description: Write a program that takes as input the student id, names and marks
of 3 students and computes the percentage for each student based on the
total of the marks entered. Display all the information on the standard output.
Author: Daniel Geula
Date: 25/04/2022
Version: 1.0
Log:
1.0: Initial release.
*/

#include <stdio.h>

int main() {

    char names[2][3][20];
    int id[3], marks[3], total;

    for (int i = 0; i < 3; ++i) {

        printf("\nEnter Student ID %d: ", i + 1);
        scanf("%d", &id[i]);

        printf("\nEnter Name %d: ", i + 1);
        scanf("%s %s", names[0][i], names[1][i]);

        printf("\nEnter Mark %d: ", i + 1);
        scanf("%d", &marks[i]);

        total = total + marks[i];
    }

    for (int i = 0; i < 3; i++) {

        printf("\nDetails of students: %d\n", i + 1);
        printf("*******************************************\n");
        printf("Student ID: %d\n", id[i]);
        printf("Name: %s %s\n", names[0][i], names[1][i]);
        printf("Mark: %d\n", marks[i]);
        printf("Percentage of total marks: %.2f\n", (marks[i] * 100.0) / total);
        printf("*******************************************\n");
    }

    return 0;
}
