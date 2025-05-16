#include <stdio.h>
#include <stdlib.h>

int main()
{
    int midterm1, midterm2, final;
    float avg;

    printf("Please enter the required grades\n");

    printf("Midterm 1: ");
    scanf("%d", &midterm1);

    printf("Midterm 2: ");
    scanf("%d", &midterm2);

    printf("Final: ");
    scanf("%d", &final);

    if (midterm1 > 100 || midterm2 > 100 || final > 100) {
        printf("Invalid grades. Grades must be between 0 and 100.");
    }
    else {
        avg = (midterm1 + midterm2 + final) / 3.0;

        printf("Average: %.3f\n", avg);

        if(avg >= 60) {
            printf("You passed the course");
        }
        else {
            printf("You failed the course");
        }
    }

    return 0;
}
