#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0, contents[STACK_SIZE]; // external variables have file scope 

// check functions 
bool is_empty(void);
bool is_full(void);

// action functions 
void push(int);
int pop(void);
void make_empty(void);

// print functions 
void stack_overflow(void);
void stack_underflow(void);
void print_stack(void);

// *** start of program ***
int main(void) {

    print_stack();

    return 0;
}

// check functions 
bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

// action functions 
void push(int i) {
    if (is_full())
        stack_overflow();
    else 
        contents[top++] = i; // add item to the stack
}

int pop() {
    if (is_empty())
        stack_underflow();
    else
        return contents[top--]; // remove item from the stack 
}

void make_empty(void) {
    top = 0;
}

// print functions
void stack_overflow() {
    printf("stack is full, unable to push\n");
}

void stack_underflow() {
    printf("stack is empty, unable to pop\n");
}

void print_stack(void) {
     if(top == 0)
        printf("stack is empty, nothing to print\n");
    else
        for(int i = top - 1; i >= 0; i--)
            printf("[%d]\n", contents[i]);
}
