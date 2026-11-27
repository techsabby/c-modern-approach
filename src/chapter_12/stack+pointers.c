#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 3

int contents[STACK_SIZE];
int *top_pointer = &contents[0];

// check functions
bool is_empty(void);
bool is_full(void);

// action functions
void push(int);
int pop(void);
void empty(void);

// print functions
void print_stack(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {

    push(1);
    push(2);
    push(3);
    print_stack();
    printf("\n");
    push(4);
    empty();
    printf("is empty?: %i\n", is_empty());
    push(4);
    print_stack();
  
    return 0;
}

// check functions 
bool is_empty(void) {
    return top_pointer == &contents[0];
}

bool is_full(void) {
    return top_pointer == &contents[STACK_SIZE];
}

// action functions
void push(int num) {
    if (is_full())
        stack_overflow();
    else
        *top_pointer++ = num;
}

int pop() {
    if (is_empty())
        stack_underflow();
    else
        return *top_pointer--;
}

void empty() {
    top_pointer = &contents[0];
}

// print functions
void print_stack(void) {
    int *print_pointer = top_pointer;
    print_pointer--;

    while(print_pointer >= &contents[0])
        printf("[%i]\n", *print_pointer--);
}

void stack_overflow() {
    printf("stack is full, unable to push\n");
}

void stack_underflow() {
    printf("stack is empty, unable to pop\n");
}