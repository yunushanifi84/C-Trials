#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"English");
    int midterm, final, grade1, grade2;
    float avg;

    printf("Enter midterm grade: ");
    scanf("%d", &midterm);
    printf("Enter final grade: ");
    scanf("%d", &final);
    avg = (midterm + final) / 2.0;

    if(avg <= 100 && avg >= 0)
    {
        if(avg >= 90)
        {
            grade1 = 65;
            grade2 = 65;
        }
        else if (avg >= 85)
        {
            grade1 = 66;
            grade2 = 65;
        }
        else if (avg >= 80)
        {
            grade1 = 66;
            grade2 = 66;
        }
        else if (avg >= 75)
        {
            grade1 = 67;
            grade2 = 66;
        }
        else if (avg >= 65)
        {
            grade1 = 67;
            grade2 = 67;
        }
        else if (avg >= 58)
        {
            grade1 = 68;
            grade2 = 67;
        }
        else if (avg >= 50)
        {
            grade1 = 68;
            grade2 = 68;
        }
        else if (avg >= 40)
        {
            grade1 = 70;
            grade2 = 68;
        }
        else
        {
            grade1 = 70;
            grade2 = 70;
        }
        printf("\n------------------------------------------------------------------------------------\n");
        if(avg >= 90)
        {
            printf("Your average: %.f\nYour grade: %c%c\nCourse status: Excellent!", avg, grade1, grade2);
        }
        else if (avg >= 85)
        {
            printf("Your average: %.f\nYour grade: %c%c\nCourse status: Very Good", avg, grade1, grade2);
        }
        else if (avg >= 80)
        {
            printf("Your average: %.f\nYour grade: %c%c\nCourse status: Good", avg, grade1, grade2);
        }
        else if (avg >= 75)
        {
            printf("Your average: %.f\nYour grade: %c%c\nCourse status: Successful", avg, grade1, grade2);
        }
        else if (avg >= 65)
        {
            printf("Your average: %.f\nYour grade: %c%c\nCourse status: Sufficient", avg, grade1, grade2);
        }
        else
        {
            printf("Your average: %.f\nYour grade: %c%c\nCourse status: Failed!!!", avg, grade1, grade2);
        }
    }
    else
        printf("Invalid input");
    return 0;
}
