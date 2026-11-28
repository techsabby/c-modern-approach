#include <stdio.h>

#define N 10

// this program modifies reverse excerise from chapter 8.1 to use array name as pointer principal 

void print_array(int []);

int main(void) {

    int numbers[N];

    printf("Enter %i numbers: ", N);

    for (int *i = numbers; i < numbers + N; i++)
        scanf("%i", i);

    print_array(numbers);
    return 0;
}

void print_array(int numbers[]) {
    for (int *i = numbers + (N - 1); i >= numbers; i--)
        printf("[%i]", *i);

    printf("\n");
}