/*
 * Lab 7
 * Kevin Liu
 * 11/6/2019
 * Comp 1400
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// array
void printArray(int arr[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("]\n");
}

// bubble sort
void BubbleSort(int arr[], int size){
    int temp;
    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size - i - 1; j ++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }

}
// PART A
void Question1(){
    clock_t start, end; // set up timer
    double elapsed; // keep track of time using a double value called elapsed

    srand(time(NULL)); // set time to 0
    int n, size; // create integer values n and size
    puts("Enter in a number"); // prompt user for input
    scanf("%d", &n); // store user input in variable in n
    int num[n]; //create integer variable num[n]
    size = sizeof(num)/ sizeof(num[0]); // set new value of size

    for(int i = 0; i < n; i ++){ // for loop
        num[i] = rand() % 50; // num[i] generates a random balue between 0 and 50
    }
    printArray(num, n); // print array
    start = clock();// start timer
    BubbleSort(num, size); // bubble sort
    end = clock(); // end the timer
    elapsed = ((double)end - start) / CLOCKS_PER_SEC; // time elapsed

    puts("Sorted Array"); // print message
    printArray(num,n); // print array
    printf("Elapsed time: %f seconds", elapsed); // display time passed
}

// PART B
void Question2(){
    srand(time(NULL)); // set time to 0
    int num[30], input, freq = 0; // set values to 0

    for(int i = 0; i < 30; i ++){ // begin for
        num[i] = rand()% 20; // generate random number between 0-20
    } // end for
    puts("Enter in a number (0 - 20) "); // prompt for input
    scanf("%d", &input); // store value user entered in input

    for(int j = 0; j < 30; j ++){ // begin for 
        if(input == num[j]){ // if statement
            freq += 1; // increment freq by 1
        } // end if
    } // end for

    printArray(num, 30); // print array
    printf("The frequency of the number %d in the array is %d", input, freq); // display message


}

int main(void) {
  // Question1();
    Question2();


}
