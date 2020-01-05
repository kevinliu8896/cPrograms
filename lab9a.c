/*
kevin liu
comp1400
*/
#include <stdio.h>

int main(void) {
int x = 1, y = 2, z = 3;
printf("x = %d, y = %d, z = %d \n", x , y ,z);

{
float y;
x = 10, y = 15, z = 3;
printf("x = %d, y = %.6f, z = %d \n", x, y ,z);
{
z = 50;
printf("x = %d, y = %f, z = %d \n",x,y,z);
}
}
}
