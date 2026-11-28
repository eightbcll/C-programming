
The printf()
	This displays contents of the string
	When it is  called it must be supplied with a formatted string e.g
		%d ==> int
		%f ==> float
		%c ==> char

Conversion
	It gives you control over how much output will show 
		%m.px
			%4d ==> 123(space here)
			
		%-m.pxa
			%-4d ==> (space here) 123

Escape sequences:
	Enable strings to contain characters with a special meaning
		Backspace ==> \b
		Newline ==> \n
		Alert \a

Expressions
	These are formulas that allow us to computer a value
		Arithmetic (+ - / *)
		Logical (AND ,NOT , OR)
		Assignment ( = )
		Conditional ( > < )
		
# 1.2 Basic Types

C supports two kinds of numetic 
	Whole numbers
	Float numbers

Types of intergers are
	short int
	unsigned int 
	int 
	long int

16 and 32 bit ranges
	Short int                  ==> -32 768 ==> 32767
	unsigned short int ==> 0 ==> 65535
	int ==> -32768 ==> 32768
	unsigned int 0 ==> 65535

# Octal and Hexademal Numbers

Octal
	Its a number written with only digits 0 - 7 
	Each numbers represents to the power of 8
237 =
	2* 8^2
	3*  8^1
	7* 8^0
	128 + 24 + 7 = Octal(159)

To reverse :
	Octal / 8  and remainder from last value to first is decimal.

Hexadecimal 
	Contain digits 0 - 9 and letters A - F
	hexadecimals always begin with 0x
	Same methodology as octal but base 16 

# Reading and Writinng Intergers

%u base 10 //decimal
%x base 16 // hexadecimal
% o base 8 //octal

% hd  ==> short int
% ld ==> long int
% lld ==> long long int

FLoating types: 
	% Lf ==> long double
	%lf ==> double
	%f ==> float

Character types:
	'a' = lowercase
	" " = space
	'A' = uppercase

In Ascii :
	'a' = 97
	'A' =65
	 ' ' = 32