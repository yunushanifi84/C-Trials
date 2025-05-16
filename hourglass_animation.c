#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(int wait_time)
{
    clock_t start_time = clock();
    while (clock() < start_time + wait_time)
        ;
}

void hourglass(int size, char character)
{
    int spaces, stars, i, j;
    spaces = 0;
    stars = (2 * size) - 1;
    for (i = 1; i <= size; i++)
    {
        for (j = 0; j < spaces; j++)
            printf(" ");
        for (j = 0; j < stars; j++)
            printf("%c", character);
        spaces++;
        stars -= 2;
        printf("\n");
    }
    stars += 2;
    spaces--;
    for (i = 1; i < size; i++)
    {
        stars += 2;
        spaces--;
        for (j = 0; j < spaces; j++)
            printf(" ");
        for (j = 0; j < stars; j++)
            printf("%c", character);
        printf("\n");
    }
}

void sideways_hourglass(int size, char character)
{
    int spaces, stars, i, j;
    spaces = 0;
    stars = (2 * size) - 1;
    for (i = 1; i <= size; i++)
    {
        for (j = 0; j < spaces; j++)
            printf("%c", character);
        for (j = 0; j < stars; j++)
            printf(" ");
        for (j = 0; j < spaces; j++)
            printf("%c", character);
        spaces++;
        stars -= 2;
        printf("\n");
    }
    stars += 2;
    spaces--;
    for (i = 1; i < size; i++)
    {
        stars += 2;
        spaces--;
        for (j = 0; j < spaces; j++)
            printf("%c", character);
        for (j = 0; j < stars; j++)
            printf(" ");
        for (j = 0; j < spaces; j++)
            printf("%c", character);
        printf("\n");
    }
}

int main()
{
    int size;
    char character;
    printf("Enter the character to use: ");
    scanf("%c", &character);
    printf("Enter the size: ");
    scanf("%d", &size);

    while (1)
    {
        hourglass(size, character);
        wait(50);
        sideways_hourglass(size, character);
        wait(70);
    }
    return 0;
}
