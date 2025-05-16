#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, spaces, stars;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    spaces = 1;
    stars = rows - 1;
    
    // Print the upper half of the butterfly pattern
    for(int a = 1; a <= rows; a++)
    {
        for(int i = 1; i <= spaces; i++)
            printf("*");
        for(int i = 1; i <= stars; i++)
            printf(" ");
        stars--;
        spaces += 2;
        printf("\n");
    }
    
    // Adjust values for the lower half
    spaces -= 4;
    stars += 2;

    // Print the lower half of the butterfly pattern
    for(int a = 1; a <= rows; a++)
    {
        for(int i = 1; i <= spaces; i++)
            printf("*");
        for(int i = 1; i <= stars; i++)
            printf(" ");
        spaces -= 2;
        stars++;
        printf("\n");
    }
    return 0;
}
