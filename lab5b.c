#include <stdio.h>

int main (void) {
	   int num, boolean = 0;
    puts("Enter in a number");
    scanf("%d", &num);
    for(int i = 2; i <= num/2; ++i){
        if(num % i == 0){
            boolean = 1;
            break;
        }
    }
    if(num == 0 || num ==1){
        puts("Not a prime number");
    }

    else if(boolean == 0){
        puts("Is a prime number");
    }
    else{
        puts("Not a prime number");
    }

}

