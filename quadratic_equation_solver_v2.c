#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "English");
    int a, b, c;
    float x, x1, x2, delta, rootDelta;
    printf("Enter the coefficients a, b, c of the equation:\n");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b - 4*a*c;
    if(delta > 0) {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("The equation has two real roots:\nx1: %.1f\nx2: %.1f", x1, x2);
    }
    else if (delta == 0) {
        x1 = (-b) / (2*a);
        printf("The equation has two identical roots: x1 = x2 = %.1f", x1);
    }
    else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-delta) / (2*a);
        printf("Complex roots:\n");
        printf("x1 = %.1f + %.1fi\n", realPart, imaginaryPart);
        printf("x2 = %.1f - %.1fi", realPart, imaginaryPart);
    }

    return 0;
}
