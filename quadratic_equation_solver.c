#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"English");
    int a, b, c;
    float x1, x2, delta;
    printf("Enter the coefficient a: ");
    scanf("%d", &a);
    printf("Enter the coefficient b: ");
    scanf("%d", &b);
    printf("Enter the coefficient c: ");
    scanf("%d", &c);

    delta = (b*b) - 4*a*c;
    if (delta > 0)
    {
        printf("The equation has 2 real roots:\n");
        x1 = (-b + (sqrt(delta))) / (2*a);
        x2 = (-b - (sqrt(delta))) / (2*a);
        printf("First root: %.2f\nSecond root: %.2f", x1, x2);

    }
    else if (delta == 0)
    {
        printf("The equation has 2 equal roots:\n");
        x1 = (-b + (sqrt(delta))) / (2*a);
        printf("First root: %.2f\nSecond root: %.2f", x1, x1);
    }
    else {
        printf("The equation has no real roots");
    }

    return 0;
}
