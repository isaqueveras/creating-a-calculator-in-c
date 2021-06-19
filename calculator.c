# include <stdio.h>

// calculator - calculate two values ​​by passing the calculation method
int calculator(int num1, int num2, int method) {
	if (method == 1) {
		return num1 + num2; // method that adds two numbers
	} else if (method == 2) {
		return num1 / num2; // method that divides two numbers
	} else if (method == 3) {
		return num1 * num2; // method that multiplication two numbers
	} else if (method == 4) {
		return num1 - num2; // method that subtraction two numbers
	} else {
		printf("Enter a valid method");
	}
	
	return 0;
}

// function main
int main() {
	int num1, num2, method;
	printf("Enter the method to calculate\n1 - Sum\n2 - Divides\n3 - Multiplication\n4 - Subtraction\n");
	scanf("%d", &method);
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	int vals = calculator(num1, num2, method);
	printf("The result is: %d", vals);
	
	return 0;
}
