#include <stdio.h>

int main(void) {

	int num1;
	int num2;
	int rem;

	printf("Enter first integer\n");
	scanf("%d", &num1);
	printf("Enter second integer\n");
	scanf("%d", &num2);

	rem = num1 % num2;
	printf("The remainder of num1 / num2 is %d\n", rem);
	return 0;
}
