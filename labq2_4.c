/*THIS FILE CONTAINS Q2.4
Kevin Liu
105191861
Sec 52
*/
#include <stdio.h>

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
  #include <stdio.h>

  void PrintArray(int size, int array []){
    for(int i=0; i<size; i++){
      printf("array[%d] = %d \n", i, array[i] );
    }
  }

  void swap(int * var1, int * var2){
  // provide the implementation
  int temp;
  temp = *var1;
  *var1 = *var2;
  *var2 = temp;
  }

  void SelectionSort(int size, int array[]){
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

  int main() {
    int data [] = {2, 7, 8, -8, 1, 9, 3, 5};
    SelectionSort(sizeof(data)/sizeof(int), data);
    printf("Array in ascending order: \n");
    PrintArray(sizeof(data)/sizeof(int), data);
    ReverseArray(sizeof(data)/sizeof(int), data);
    printf("Array in descending order:\n");
	  PrintArray(sizeof(data)/sizeof(int), data);
    return 0;
  }
