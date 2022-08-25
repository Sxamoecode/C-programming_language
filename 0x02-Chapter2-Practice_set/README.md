Instructions and Operators
A C program is a set of instructions just like a recepie, which contains instructions to prepare a particular dish.

Types of Instructions:
- Type declaration Instructions
- Arithmetic Instructions
- Control Instructions

Type declarations:
int a, float b;
Other variables: int i = 10, int j = i; int a = 2
                 int j = a + j - 1;

Note: float b = a+3; float a = i+1(These returns an error as we are trying to use a before defining it)

Mass definition
int a,b,c,d;
a = b = c = d = 0; Values of a,b,c,d will be 30 each

Arithmetic Instructions:
Operators can be defined int/float etc.
+, -, *, / are all examples of operators.

int b=2, c=3;
int z; z = b*c;(allowed)
int z; b*c = z(This is not allowed)

Modular division operator:
- It returns the remainder
- Cannot be applied on float
- Sign is the same as that of the numerator(5%2 =1, -5%2=-1)

Note:
	No operator is assumed to be present
		int i= ab(invalid)
		int i= a*b(valid)
	There is no operator to perform exponentiation in C. However, we can use pow(x,y) from <math.h>

Type Conversion
An arithmetic operation between:
	int and int = int (5/2 = 2)
	int and float = float (5.0/2 = 2.5)
	float and float = float (2.0/5.0 = 0.4)

Note:
	int a = 3.5 (3.5(float) will be demoted to 3(int) because a is not able to store floats)
	float b = 8 (a will store 8.0(promotion to float))
	int k = 3.0/9 (3.0/9 = 0.333, but since k is an int, it cannot store float values, 0.333 is demoted to 0)


Operator precedence In C
In C language, simple mathematical rules like BODMAS no longer applies.

Operator precedence: The following table list operator priority in C.
Priority     Operators
1st		*,/,%
2nd		+, -
3rd		=
	Operators of higher priority are calculated first in the absence of parenthesis.

Operator Associativity: When operators of equal priority are present in an expression, the tie is taken care of by associativity
	x * y / z = (x*y)/z
	x / y * z= (x/y)*2
*, / follows left to right associativity

Control Instructions: Determines the flow of control in a program. Four types of control instructions in C are:
- Sequence Control Instructons
- Decision Control Instructons
- Loop Control Instructons
- Case Control Instructons
