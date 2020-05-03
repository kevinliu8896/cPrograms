#include<stdio.h>
#define MAX_SIZE 100
void ReverseArray();

int main() {
  int size, arr[MAX_SIZE];
 printf("Enter size of array: ");
 scanf("%d", &size);
 printf("Enter elements for an array of size %d: \n",size);
 for(int i=0; i< size; i++) {
   scanf("%d", &arr[i]);
 }
   int *ptrArr = arr;
   ReverseArray(size, ptrArr);
   printf("Array in decending order: \n");
   for ( int i = 0; i < size; i++) {
    printf("%d ", ptrArr[i]);
  }

}

void ReverseArray(int size, int *ptrArr) {
  int temp,i,j;
  for (i = 0; i < size; i++) {
    for (j = i+1;j < size; j++) {
      if (ptrArr[i] < ptrArr[j]) {
         temp = ptrArr[i];
         ptrArr[i] = ptrArr[j];
         ptrArr[j] = temp;
      }
    }
  }
}
