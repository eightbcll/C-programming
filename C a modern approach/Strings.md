
A string literal is a sequence of characters enclosed in double quotes.
	"Hello"
	"Voldermort"
	"Messi"

C automatically adds a special character called  a null character (\ 0)
	At the end of every string literal 
		cat ==> C A T \0

# String Literals and pointers

char * p = "Hello"
printf(" %d" , p)

p stores address of the first character


```
char *p = "computer"
 %c p ==> address of first element 
	*p ==> c //value of first element
	
%c *(p + 3)
	value of address p + 3
	computer at 3 is  p
	
%s p + 3
	start reading from address
		puter
		
		
```

# Assigning values

We use strcpy()

```
int main (void){
char name[20];
strcpy(name , "Ace");
return 0
}
```


