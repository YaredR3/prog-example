#include <stdio.h>
#include<math.h>

/* Excercise "Calculator
	Declare 2 variables.
		Sum, substraction, multiplication, divide */

int num1 = 10;
int num2 = 5;

int main (){
	int sum = num1 + num2;
	int subs = num1 - num2;
	int mult = num1 * num2;
	int div = num1 / num2;
	printf("Operations performed:\n\t+Sum: %d\n\t-Subtract: %d\n\t*Product: %d\n\t/Quotient: %d", sum, subs, mult, div);
	
	return 0;
}
