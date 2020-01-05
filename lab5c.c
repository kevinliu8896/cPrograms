#include <stdio.h>

int main (void) {
    int num;
    puts("Enter a number");
    scanf("%d", &num);
    for(int i = 1; i <= num; i ++){
    	for(int j = 1; j <= i; j ++){
    		printf("%c", '*');
    	}
    	printf("\n");

    }
}
