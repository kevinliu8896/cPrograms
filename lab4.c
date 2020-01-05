#include <stdio.h>

int main(void) {

	int integer1;
	int integer2;
	int answer;

	printf("Enter first integer\n");
	scanf("%d", &integer1);
	printf("Enter second integer\n");
	scanf("%d", &integer2);

	answer = integer1 % integer2;
	printf("The remainder of%d", integer1, "divided by %d", integer2, "is%d\n", answer);
	return 0;
}
