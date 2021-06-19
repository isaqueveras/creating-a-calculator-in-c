# include <stdio.h>

// sum - sum two values
int sum(int num1, int num2) {
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	return num1 + num2;
}

// division - division two values
int division(int num1, int num2) {
	printf("%d ÷ %d = %d\n", num1, num2, num1 / num2);
	return num1 / num2;
}

// multiplication - multiplication two values
int multiplication(int num1, int num2) {
	printf("%d x %d = %d\n", num1, num2, num1 * num2);
	return num1 * num2;
}

// subtraction - subtraction two values
int subtraction(int num1, int num2) {
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	return num1 - num2;
}

int main() {
	sum(1,2); // function that adds two numbers	
	division(10,2); // function that divides two numbers
	multiplication(5, 5); // function that multiplication two number
	subtraction(10, 5); // function that subtraction two number
	
	return 0;
}
