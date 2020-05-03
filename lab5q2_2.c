#include <stdio.h>

void PrintArray(int size, int array []){
  for(int i=0; i<size; i++){
    printf("array[%d] = %d the address is: %p \n", i, array[i], &array[i] );
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
  PrintArray(sizeof(data)/sizeof(int), data);
  return 0;
}
