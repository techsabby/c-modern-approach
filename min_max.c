#include <stdio.h>

// section 11.4
// this program finds the smallest and largest elements in an array 

void min_max(int a[], int n, int *min, int *max);

int main(void) {

    int numbers[10];
    int min, max;
    int *pMin, *pMax;
    pMin = &min;
    pMax = &max;

    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++) {
        scanf("%i", &numbers[i]);
    }

    min_max(numbers, 10, pMin, pMax);

    printf("Largest: %d\nSmallest: %d\n", max, min);
    return 0;
}

void min_max(int a[], int n, int *min, int *max) {

    *min = *max = a[0];

    for(int i = 0; i <= 8; i++) {

        if(a[i + 1] < *min) {
            *min = a[i + 1];
        }

        if(a[i + 1] > *max) {
            *max = a[i + 1];
        }
    }
}