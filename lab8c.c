/*
 * Kevin Liu
 * Lab 8
 * Comp 1400
 */
#include <stdio.h>
#include <math.h>

void printArray(int arr[], int size) //function used to print the array
{
    printf("Your number in binary is: ");
    for (int i = size; i >= 0; i--)
        printf("%d", arr[i]);
    printf("\n");
} // end function

void Binary(int n){ // function used to turn decimal to binary

    int binary[32], i = 0;
    while(n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printArray(binary,i - 1);
} // end function

int main(void) { // main method
    int n;
    puts("Enter in a number"); // prompt user for inout
    scanf("%d", &n); // store value of inout in variable n
    Binary(n);



} // end main methjod
 
