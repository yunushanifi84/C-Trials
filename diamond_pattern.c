#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, spaces, stars;
    /*printf("Enter number of rows: ");
    scanf("%d", &rows);*/
    rows = 15;
    stars = 1;
    spaces = rows - 1;
    
    // Print the upper half of the diamond
    for(int a = 1; a <= rows; a++)
    {
        for(int i = 1; i <= spaces; i++)
            printf(" ");
        for(int i = 1; i <= stars; i++)
            printf("*");
        spaces--;
        stars += 2;
        printf("\n");
    }
    
    // Adjust values for the lower half
    stars -= 4;
    spaces += 2;

    // Print the lower half of the diamond
    for(int a = 1; a <= rows; a++)
    {
        for(int i = 1; i <= spaces; i++)
            printf(" ");
        for(int i = 1; i <= stars; i++)
            printf("*");
        stars -= 2;
        spaces++;
        printf("\n");
    }
    return 0;
}
