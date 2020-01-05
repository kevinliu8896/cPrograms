/*
Kevin Liu
comp1400
11/13/2019
*/
#include <stdio.h>

int factorial(int n); // function of factorial

int main(void) { // main method
  int n; // integer value called n
  puts("Enter a positive integer: "); // prompt user for input
  scanf("%d", &n); // store value in variable n
  factorial(n); // factorial function
} // end main method

int factorial(int n) { // factorial function
  int fact =1; // set fact to 1
  if (n==0) { // if n is equal to 0 do this code
    printf("The factorial of %d is : %d",n,fact);
 } // end if
 else { // else
   for (int i = n; i > 0; i--) { // for loop
     fact*=i; // fact * i

   } // end for
   printf("The factorial of %d is : %d",n,fact); // print factorial value
 } // end else

} // end of function

