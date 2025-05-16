#include <stdio.h>
#include <stdlib.h>

int main()
{
    float midterm, final, avg;

    printf("Midterm: ");
    scanf("%f", &midterm);
    printf("Final: ");
    scanf("%f", &final);
    avg = (midterm * 0.3) + (final * 0.7);
    
    if (avg >= 90) {
        printf("Your grade is AA, you passed the course with %.1f", avg);
    }
    else if (avg >= 85) {
        printf("Your grade is BA, you passed the course with %.1f", avg);
    }
    else if (avg >= 80) {
        printf("Your grade is BB, you passed the course with %.1f", avg);
    }
    else if (avg >= 75) {
        printf("Your grade is CB, you passed the course with %.1f", avg);
    }
    else if (avg >= 70) {
        printf("Your grade is CC, you passed the course with %.1f", avg);
    }
    else if (avg >= 65) {
        printf("Your grade is DC, you passed the course with %.1f", avg);
    }
    else if (avg >= 60) {
        printf("Your grade is DD, you passed the course with %.1f", avg);
    }
    else {
        printf("Your grade is FF, you failed the course with %.1f", avg);
    }

    return 0;
}
