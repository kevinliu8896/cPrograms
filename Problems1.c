// Problem 1 Assignment 3: Kevin Liu
#include <stdio.h>
#include <math.h>
int main(void) { // main method

  int column; // create integer value called col (represents columns)
  int row; // create integer value called row (represetns rows)
  int value; // create integer value called value
  int arr[9]; // create integer array with 9 elements

  printf("Enter the row(1-3), column(1-3) and value(1-9)\n"); // prompt user for input
  scanf("%d %d %d", &row, &column, &value); // stores user input in variables row, column, and value

  arr[3*(row-1)+column] = value; // stores element in 1d array

  printf("The value %d will be stored in this spot: %d in the 1d array.", arr[3*(row-1)+column], 3*(row-1)+column);
}
