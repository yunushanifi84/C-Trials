#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char gender;
    int times, male_eating, female_eating, total = 0, gender_code;
    printf("Enter the gender of the monkey (Male M/m, Female F/f): ");
    scanf("%c", &gender);
    printf("How many times did the monkey enter the cage: ");
    scanf("%d", &times);

    switch(gender) {
    case 'F':
    case 'f':
        gender_code = 1;
        break;
    case 'm':
    case 'M':
        gender_code = 2;
        break;
    default:
        goto WRONG;
        break;
    }

    for(int i = 1; i <= times; i++)
    {
        if(i >= 5) {
            total += (((total - i) / 2) + 1) * gender_code;
        }
        else {
            total += (gender_code * i);
        }
        printf("After the %d. entry, the monkey has eaten a total of %d bananas.\n", i, total);
    }
    
    return 0;
    
    WRONG:
    printf("Wrong gender input. Please try again.");
    return 0;
}
