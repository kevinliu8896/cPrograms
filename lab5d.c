#include <stdio.h>

int main (void) {
	int num, product = 0;
    puts("Enter in a number");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i ++){
        product = num * i;
        printf("%d X %d = %d\n", num, i, product);
    }

}

