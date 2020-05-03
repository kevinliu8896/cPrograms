#include <stdio.h>

int main() {

  float b = 3.7f;
  float * bPtr;
// This statement will print "stat 01: value of b = 3.700000"
  printf("stat 01: value of b = %f \n", b);
// This statement will print "stat 02: 4194432"
  printf("stat 02: %u \n", bPtr);
// let bPtr point to the address of variable b in memory
  bPtr = &b;
//  var1 = 6422296 the printf below will also printf "stat 03: 6422296"
  printf("stat 03: %u \n", bPtr);
// this statement will print "stat 04: 6422296"
  printf("stat 04: %u \n", &b);
  printf("stat 05: currently bPtr store the address of variable b which is %u in unsigned int format or %p in hexadecimal format \n", bPtr, bPtr);
// this statement will print size of b(4) this specifically prints "stat 01: the size of b in memory is 4"
  printf("stat 06: the size of b in memory is: %d \n", sizeof(b));
// this statement is going to increment the vale of bptr by 4
  bPtr++;
// Write down the value you will get from this print statement, call it var2
// var2= 6422300 specifically prints "stat 07: 6422300"
  printf("stat 07: %u \n", bPtr);
  printf("The difference between var1 and var 2 is 4. Var 1 is incremented by the size of b"); // this answers the difference between var2 and var1
  return 0;

}

// Q3 the difference bwtween var2 and var 1 is 4
