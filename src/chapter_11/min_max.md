In my approach I defined pointers and set them to the address of min and max: 

```C
int min, max;
int *pMin, *pMax;
pMin = &min;
pMax = &max;
```

This works but I learned that I also could have just used the address-of operator in the function call directly: 

```C
int min, max;

min_max(numbers, 10, &min, &max);
```

This works because the function doesn't care how it gets the address it just needs to do work on it: 

```C
*min = *max = a[0]; // this still works 
```

---

Another change I could make is to define a constant N and use that in my function to make the program work for multiple array lengths: 

```C
#define N 10

min_max(numbers, N, &min, &max); // pass N instead of hardcoded 10

for (int i = 1; i < n; i++) // N is used instead of hardcoded 10
```

---

I also realized while it is standard convention to start with `i = 0` in a for loop, because the program needs to compare with the next element in the array it makes sense to set `i = 1` for simplicity:

```C
for (i = 1; i < n; i++) {
	if (a[i] < *min)
		*min = a[i];
}
```

