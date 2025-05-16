#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum = 0, digitCount = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    do {
        sum += (number % 10);
        digitCount++;
        number = number / 10;
    } while(number > 0);
    printf("Sum of digits: %d | Number of digits: %d", sum, digitCount);

    return 0;
}
