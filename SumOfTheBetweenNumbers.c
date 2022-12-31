#include <stdio.h>
#include <stdlib.h>

// C Programming Example of Adding Numbers Between Two Numbers

int main()
{
    int number1, number2, min, max,collect=0;
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
    for (int j = (min+1); j <max;j++){
        collect+=j;
    }
        printf("The collection of between the numbers : %d",collect);
        return 0;
}