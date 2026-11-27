#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_pointer = &contents[0];

// check functions
bool is_empty(void);

// action functions
void push(int);

// print functions
void print_stack(void);

int main(void) {

    push(5);
    printf("%i\n", is_empty());
    return 0;
}

// check functions 
bool is_empty(void) {
    return top_pointer == &contents[0];
}

// action functions
void push(int num) {
    *++top_pointer = num;
}

// print functions
void print_stack(void) {
    while(top_pointer != &contents[0])
        printf("[%i]", *top_pointer--);
}