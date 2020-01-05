#include <stdio.h> // C Standard Library for input/output functions
#include <stdlib.h> // C Standard Library for some utility functions,
// such as rand()
#include <time.h> // C Standard Library for date and time functions

int main(void){
//Solution To Bonus Problem:
    srand(time(0)); // srand(time(0)) returns a different value of a pseudo random number
// Problem 2 a)
    int num1 = (rand() % 9) + 1;
    int num2 = (rand() % 9) + 1;
    int type, total;
    printf("The two random numbers are: %d and %d\n", num1, num2);
// Problem 2 b)
    type = (rand() % 3);
// Problem 2 c
    if(type == 0){
        total = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, total);
    }
    else if(type == 1){
        total = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, total);
    }
    else if(type == 2){
        total = num1 * num2;
        printf("%d x %d = %d\n", num1, num2, total);
    }

}
