# Stack with pointers implementation 

This excerise updates the code from the stack created in Chapter 10 to use pointers instead. 

Chapter 10

```C
int top = 0; // keep track of array subscript
```

Chatper 12

```C
int *top_pointer = &contents[0]; // use pointer to point to top of stack 
```
# Implementation in C

- pointer points to the top of the stack 
    - if pointer points to the element at memory contents[STACKS_SIZE] 
        - this means that stack is full 
    - if pointer points to the element at &contents[0] - 1 
        - this means that stack is empty 
