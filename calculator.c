#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Select the operation you want to perform\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Pyramid\n6:Reverse Pyramid\n::");
    int operation, number, i, n;
    float num1, num2, result, absolute;
    scanf("%d", &operation);
    switch(operation)
    {
    case 1:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        result = num1 + num2;
        printf("Result: %.f", result);
        break;
    case 2:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        absolute = num1 - num2;
        if(absolute < 0) absolute = (-1) * absolute;

        printf("Result: %.f", absolute);
        break;
    case 3:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        result = num1 * num2;
        printf("Result: %.f", result);
        break;
    case 4:
        printf("Enter dividend: ");
        scanf("%f", &num1);
        printf("Enter divisor: ");
        scanf("%f", &num2);
        result = num1 / num2;
        printf("Result: %.f", result);
        break;
    default:
        printf("Undefined operation.");
        break;
    case 5:
        printf("Enter number of rows: ");
        scanf("%d", &number);
        for(n = 1; n <= number; n++)
        {
            for (i = n; i > 0; i--)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
        break;
    case 6:
        printf("Enter number of rows: ");
        scanf("%d", &number);
        for(; number > 0; number--)
        {
            for (i = number; i > 0; i--)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    printf("\n\n");

    return 0;
}
