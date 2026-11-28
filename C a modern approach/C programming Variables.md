A c program is a set of instructions written by the computer.
Program.
```
Basic c program
#include <stdio.h> ==> DIRECTIVES

int main (void){ ==>STATEMENTS
  printf("Hello world");
  return 0; ==> INDICATES SUCCESS
}
```

# 1.1How code becomes a real Program
---

C is not understood by the computer it goes through 3 stages 

###### 1.) Preprocess
	Handles lines beginning with #
		#include <stdio.h>
		#include <stdlib.g>
		#include <string.h>
		#include <unistd.h>

		#define MACRO 100
		#define BUFFER 50
		
###### 2.)Compiling
	Converts c code into object code 
		```gcc one.c -o one```

###### 3.) Linking and running
		╰─❯ ./a.out 


# 1.2 Variables and assignment in C
---

###### Variables exist :
	to store data temporarily
	reuse values for calculation
	track changin information

###### Types of variables are
	Float
	int 
	char

###### Identifier
	- An identifier is a name you give things in your program
	- Identifiers are used for :
		- variables 
		- functions 
		- MACROS
		- Arrays

```#include <stdio.h>

int main (void){
  int a;
  char b;
  float c;

  printf("sizeof int: %d\n" ,sizeof(a));
  printf("sizeof char: %d\n" ,sizeof(b));
  printf("sizeof float: %d\n" ,sizeof(c));
  return 0;
}

sizeof int: 4
sizeof char: 1
sizeof float: 4

```

