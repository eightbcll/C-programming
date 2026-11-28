Pointer Variables
	To understand pointers we visualise what they represent at machine level

Main memory
	Its divided into bytes 
		1 byte = 8 bits

Memory Addresses
	Every byte has a unique address

Addresses are usually 0 to (total number of bytes  - 1)

Address 0 ==> 1001 0100(content)

# Variables in a pointer

Every variable occupies one or more byes in memory
	Addresses of variable is address of first byte
		e.g int is 4 bytes hence var takes address of first byte and occupies 4 blocks

A pointer is a variable that stores memory address of other variables
	e.g
		instead of storing 10
			pointer can store its address like 2004

# Why do we need Pointers

Memory addresses may not fit into ordinary integer variables
	C pointers are designed to store addresses

```
int i  =10;
int *p = &i;
```

i contains 10 //value of i
p contain 2004 //address of i


# Indirection Operator

The * operator allows us to access the value stores in object

```
int i = 10;
int  *p = &i
printf(" %d\n" ,*p);

output: 10
```

Relationship between & and *
	& gives address of i
	* gives value of i
	* & gives address value store in i

# Pointer as an Assignment 

Pointer as an assignment means :
	Copying the address stored in one pointer to another pointer

Both pointers are to be of the same type
```
int i , j ;
int *p , *q ;

p = &i ;
q = p;
```

# Pointers as Arguments

Pointers are useful because they allow functions to modify variables 
	e.g
```
#include <stdio.h>

int *change_num(int *);

int main (void){
  int *p;
  int a =10;
  printf("Value of a unchanged is : %d\n", a);
  p = &a;
  change_num(p);
  printf("Value of new a is %d", a);
  return 0;
}

int *change_num(int *a){
  *a = 20;
  return a;
}

╰─❯ ./a.out 
Value of a unchanged is : 10
Value of new a is 20% 

```

# Using const to protect an argument 

When a pointer is passed to a function
	It means it may be modified
In this case we 
	Use const key word

```
void function_name(const *p)
```

