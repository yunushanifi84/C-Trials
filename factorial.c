#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "English");
    int n, fact = 1;
    printf("Enter the number to calculate factorial: ");
    scanf("%d", &n);

    while(n != 0) {
        fact = fact * n;
        n--;
    }
    printf("Factorial: %d", fact);

    return 0;
}
