#include <stdio.h>
#include <stdlib.h>

// C Programming Example of Adding Numbers Between Two Numbers

int main()
{
    int number1, number2, min, max, sum = 0;
    printf("Number One: ");
    scanf("%d", &number1);
    printf("Number Two: ");
    scanf("%d", &number2);
    if (number1 >= number2)
    {
        min = number2;
        max = number1;
    }
    else
    {
        min = number1;
        max = number2;
    }
    for (int j = (min+1); j < max; j++) {
        sum += j;
    }
    printf("The sum of numbers between the two numbers: %d", sum);
    return 0;
}