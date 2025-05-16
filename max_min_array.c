#include <stdio.h>
#include <stdlib.h>

int findMax(int A[], int size) {
    int maxValue, i;
    maxValue = A[0];
    for(i = 0; i < size; i++) {
        if(A[i] > maxValue) {
            maxValue = A[i];
        }
    }
    return maxValue;
}

int findMin(int B[], int size) {
    int minValue, i;
    minValue = B[0];
    for(i = 0; i < size; i++) {
        if(B[i] < minValue) {
            minValue = B[i];
        }
    }
    return minValue;
}

void printArray(int array[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d      ", array[i]);
    }
}

int main() {
    int array[5];
    printf("Input array elements(5): ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    printf("Array's elements: ");
    printArray(array, 5);
    printf("\nMax value of array: %d", findMax(array, 5));
    printf("\nMin value of array: %d", findMin(array, 5));
    
    return 0;
}
}