
A function is a block of code.


syntax:

```
return type function_name (parameters)
{
	declaration;
	statements
}
```
The return type is the value the function returns.

Functions calls consist of :
	Function names followed by arguments
	e.g
		average(x , y)
```
#include <stdio.h>

int add( int , int);

int main (void){
  int a =10 ;
  int b =20;
  int c = add(a,b);
  printf("Addition is %d", c);
  return 0;
}

int add( int x , int y){
  int addition = x + y;
  return addition;
}

╰─❯ ./a.out 
Addition is 30%   
```

# Arguments 

Arguments appear in function calls 
Parameters appear in function declaration

Argument Conversion
	This is what happens when you pass arguments to a function
	e.g
```
#include <stdio.h>

float square (float);

int main (void){
  
  double a = 4;
  printf("Square of the number is : %.2f", square(a));
  return 0;
}

float square(float x){
  return x * x;
}

╰─❯ ./a.out 
Square of the number is : 16.00% 

```


```#include <stdio.h>
#define LEN 5

int sum_array( int [] , int );

int main (void){
  int a[LEN] = {1,2,3,4,5};
  printf("Sum of array is : %d\n",sum_array(a , LEN));
  
  return 0;
}

int sum_array(int b[] , int n){
  int Total = 0;

  for(int i = 0 ; i < n ; i++ ){
      Total = Total + b[i];
  }
  return Total;
}

╰─❯ ./a.out 
Sum of array is : 15
```



| Return                     | Exit                          |
| -------------------------- | ----------------------------- |
|                            |                               |
| End the current function   | End The entire program        |
| Found in all the functions | Terminates from any function  |
| Used to send values back   | Stops execution Immediately   |
|                            |                               |
| return -1 or return 0      | exit(0) or exit(EXIT FAILURE) |

