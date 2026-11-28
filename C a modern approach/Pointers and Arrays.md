Relationship between pointers and arrays
	In most cases name of an array decays into a pointer to its first element
e.g

```
int numbers [] = { 10, 20, 30, 40 }
int *p = numbers

is same as

int *p = &numbers[0];

```

# Pointer Arithmetic

```
*(p + 1) ==> 20
*(p + 2) ==> 30

another wat

numbers [2] is also 

*(numbers + 2)
```


# Pointer Address Vs Value Assignments

Assigning an address tell a pointer where to point 
	int numbers[ ] = 10;
	int *p =  &numbers;

Array and pointer relationship
	An array name usually represents the address of its first element
```
int a [5] = {10,20,30,40,50}
int *p ;
p = a;

p = a ===> address of the first element
p =&a[0] ==> address of first element
p = &a ==> address of whole array

```


# Pointers as multi - Dimensional arrays

A 2d array is basically an array of arrays

```
HOW POINTERS WORK WITH 2D ARRAYS

int (*p)[3] = arr;

read as 
	p is a pointer to an array of 3 intergers
```
WHy [3] 
	Because each row contain 3 integers

Accessing elements
	p + 1 ==> move one row
	* (p + 0) ==> Access row 1 
	* (p+1) + 2 ==> Address of value at row 2 col 2
	* ( * (p + 1) + 2 ==> Give value 

