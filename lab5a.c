#include <stdio.h>

int main (void) {

    int input, count = 0, sum = 0;
    float average;
    while(count < 10){
        puts("Enter in a value: ");
        scanf("%d", &input);
        sum += input;
        count ++;
    }
    average = ((float)sum/(float)10);
    printf("The sum is: %d, and the average is: %f", sum, average);

}

