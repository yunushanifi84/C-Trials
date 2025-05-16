#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, x, temp_product = 1, temp_sum = 1;
    int m, i;
    printf("Enter n value: ");
    scanf("%f", &n);
    printf("Enter x value: ");
    scanf("%f", &x);
    
    for (i = (int)n; i > 0; i--) {
        for(m = i; m > 0; m--) {
            temp_product = x * temp_product;
        }
        
        if(((int)i % 2) == 0) {
            temp_sum = (temp_product / i) + temp_sum;
        }
        else {
            temp_sum = temp_sum - (temp_product / i);
        }
        
        temp_product = 1;
    }
    
    printf("Result: %.2f", temp_sum);
    return 0;
}
