#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, temp, gcd, lcm;
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    
    // Store original values
    int originalA = a;
    int originalB = b;
    
    // Calculate GCD using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;
    
    // Calculate LCM using formula: LCM = (a * b) / GCD
    lcm = (originalA * originalB) / gcd;
    
    printf("GCD (Greatest Common Divisor): %d\n", gcd);
    printf("LCM (Least Common Multiple): %d", lcm);

    return 0;
}
