#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 1, second = 1, i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d\n%d\n", first, second);
    for (i = 0; i < n; i++) {
        int temp = first;
        first += second;
        second = temp;
        printf("%d\n", first);
    }

    return 0;
}
