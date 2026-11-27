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
    - if pointer points to the element at memory `contents[STACKS_SIZE]` 
        - this means that stack is full 
    - if pointer points to the element at `&contents[0] - 1` 
        - this means that stack is empty 

# Lessons 

When popping the stack, I made a mistake:

```C
return *top_pointer--;
```

This doens't work as intented because the function should return the last value that was entered which doesn't exist at `*top_pointer`
    - instead it makes more sense to do `*--top_pointer`
    - this works because the top_pointer gets decrimented BEFORE we get the value from the memory address it is pointing too 
    - this highlights the importance of the order of operations in C 