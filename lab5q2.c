/*THIS FILE CONTAINS ALL OF Q2
Kevin Liu
105191861
Sec 52
*/
#include <stdio.h>

void PrintArray(int size, int array []){ // print array function
  for(int i=0; i<size; i++){
    printf("array[%d] = %d the address is: %p \n", i, array[i], &array[i] ); // prints elemnt of array and the address of that specific element
  }
} // end of function

void swap(int * var1, int * var2){ // swapping function for selection sort
// provide the implementation
int temp; // create temp variable to store elements in temporarily
temp = *var1;
*var1 = *var2;
*var2 = temp;
} // end of function

void SelectionSort(int size, int array[]){ // sorting function
// provide the implementation
int minIndex;
for (int i = 0; i < size-1; i++)
{
    minIndex = i;
    for (int j = i+1; j < size; j++)
      if (array[j] < array[minIndex])
        minIndex = j;
    swap(&array[minIndex], &array[i]);
  }
}
void ArrayInfo(int size, int array[], int *sum, float *avg, int *min, int *max) {
  int i = 0;
  *min = array[0];
  *max = array[size - 1];
  for (i = 0; i < size; i++) {
    *sum = *sum + array[i];
  }
  *avg = (float)*sum / (float)size;

}
void ReverseArray(int size, int *ptr2Array){ // This reverse array function will print the array out in descending order.
  int temp;
	int *lo = ptr2Array;
	int *hi = ptr2Array + size - 1;
	while(lo < hi){
		temp = *lo;
		*lo = *hi;
		*hi = temp;
		lo++;
		hi--;
	}
}

int main() {
  int data [] = {2, 7, 8, -8, 1, 9, 3, 5};
	float avg;
	int sum = 0, min, max; //Variables for ArrayInfo
	SelectionSort(sizeof(data)/sizeof(int), data);
	printf("Array in ascending order:\n");
	PrintArray(sizeof(data)/sizeof(int), data);
	ArrayInfo(sizeof(data)/sizeof(int), data, &sum, &avg, &min, &max);
	printf("\nTHE SUM IS: %d\n", sum); // the next few print statements print values called from ArrayInfo function
  printf("THE AVERAGE IS %.2f\n", avg);
  printf("THE MINIMUM IS: %d\n", min);
  printf("THE MAXIMUM IS: %d\n", max);
	ReverseArray(sizeof(data)/sizeof(int), data);
	printf("\nArray in descending order:\n");
	PrintArray(sizeof(data)/sizeof(int), data);
	return 0;
}
