#include <stdio.h>

int main(void) {

	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, sum, check;

	printf("Enter first 12 digits of ISBN-13\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12);

	sum=(num1*1)+(num2*3)+(num3*1)+(num4*3)+(num5*1)+(num6*3)+(num7*1)+(num8*3)+(num9*1)+(num10*3)+(num11*1)+(num12*3);
	num13 = sum%10;
	check = 10 - num13;
	printf("Check digit: %d\n", check);

}
