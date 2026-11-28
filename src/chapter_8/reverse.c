#include <stdio.h>

#define N 10

// this program prints 10 numbers in reverse order they were entered
void print_array(int []);

int main(void) {

    int numbers[N];

    printf("Enter %i numbers: ", N);
    for (int i = 0; i < N; i++)
        scanf("%i", &numbers[i]);

    print_array(numbers);
    return 0;
}

void print_array(int numbers[]) {
    for (int i = N - 1; i >= 0; i--)
        printf("[%i]", numbers[i]);

    printf("\n");
}