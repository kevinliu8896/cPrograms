/*
Kevin Liu
comp1400
*/
#include <stdio.h>

void lab_9 (int a);

int main() 


{
int x = 2;
printf("The value of x is: %d\n", x);

lab_9(x);
}

void lab_9(int x) 
{
int a = 2;
x = x*++a;
printf("the value of x is %d", x);
}
