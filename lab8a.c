/*
Kevin Liu
comp1400
11/13/2019
*/
#include <stdio.h>
#include <math.h>

double area(double radius); // area function

int main(void){ // main method
int r; // integer called r

printf("What is the radius?\n"); // prompt for input
scanf("%d",&r); // get user input and store it in variable r

printf("The area of the circle is %.2f", area((double) r)); // print area of circle

} // end  main method

double area(double radius) { // function for area
double pi=3.14159; // value of pi
double area = 0;// set initial value of area to 0
area = pi* (radius*radius); // calculate area

return area;
} // end area function
