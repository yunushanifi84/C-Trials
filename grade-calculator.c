#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"English");
    int choice, main_form = 1;
    float midterm, final, attendance, participation;
    float math_avg, physics_avg, ceng_avg, programming_avg, physics_lab_avg, programming_lab_avg;
    float s1, s2, s3, s4, s5, s6, s7, s8;
    printf("Select a course\n-------------------------------------------------------------\n");
    printf("Mathematics:1\nPhysics:2\nIntroduction to Computer Engineering:3\nComputer Programming:4\nProgramming Lab:5\nPhysics Lab:6\nExtra options:7");
    printf("\n:=");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("Enter midterm grade: ");
        scanf("%f", &midterm);
        printf("Enter final grade: ");
        scanf("%f", &final);
        math_avg = (midterm * 0.34) + (final * 0.66);
        printf("Your Mathematics average is %.f ", math_avg);
        break;
    case 2:
        printf("Enter midterm grade: ");
        scanf("%f", &midterm);
        printf("Enter final grade: ");
        scanf("%f", &final);
        physics_avg = (midterm * 0.38) + (final * 0.62);
        printf("Your Physics average is %.f ", physics_avg);
        break;
    case 6:
        printf("How many Physics lab sessions did you attend: ");
        scanf("%f", &attendance);
        if(attendance > 8)
        {
            printf("Haha nice try :))");
            main_form = 0;
            break;
            return 0;
        }
        else
        {
            participation = (attendance * 12.5);
            printf("What is your exam score: ");
            scanf("%f", &final);
            physics_lab_avg = (participation * 0.30) + (final * 0.70);
            printf("Your Physics Laboratory average is %.f ", physics_lab_avg);
            break;
        }
    case 3:
        printf("Enter midterm grade: ");
        scanf("%f", &midterm);
        printf("Enter final grade: ");
        scanf("%f", &final);
        ceng_avg = (midterm * 0.32) + (final * 0.68);
        printf("Your Introduction to Computer Engineering average is %.f ", ceng_avg);
        break;
    case 4:
        printf("Enter midterm grade: ");
        scanf("%f", &midterm);
        printf("Enter final grade: ");
        scanf("%f", &final);
        programming_avg = (midterm * 0.30) + (final * 0.70);
        printf("Your Computer Programming average is %.f ", programming_avg);
        break;
    case 5:
        printf("Enter your 8 test scores in order: ");
        scanf("%d %d %d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
        programming_lab_avg = (s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8);
        printf("Your Computer Programming Lab average is %.f ", programming_lab_avg);
        break;
    }

    return 0;
}
