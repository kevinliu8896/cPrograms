#include <stdio.h>

int main(void) {

int year;

	printf("Enter a year\n");
	scanf("%d", &year);

	if(year%400==0)
	printf("Leap year\n");
	else if(year%4==0)
	printf("Leap year\n");
	else printf("No leap year\n");
	return 0; 


}
