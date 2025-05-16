#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main() {
    int height, diameter;
    float volume, radius, area;
    printf("Enter the height (cm): ");
    scanf("%d", &height);
    printf("Enter the diameter (cm): ");
    scanf("%d", &diameter);
    radius = diameter / 2.0;
    area = PI * radius * radius;
    volume = (1.0/3.0) * height * area;
    printf("Input values: height %d and diameter %d\n", height, diameter);
    printf("Volume of the circular cone: %.2f cubic cm", volume);

    return 0;
}
