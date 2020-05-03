#include <stdio.h>
#define MAX_SIZE 100

int binSearch(int arr[],int key,int a,int b){
  int mid;
  if(a > b)
    return -1;

  else {
    mid = (a+b)/2;

    if (key < arr[mid])
      binSearch(arr,key,a,mid-1);

    else if (key > arr[mid])
      binSearch(arr,key,mid+1,b);


      else
        return mid;

    }
  }

int main() {
  int i, a, b, mid, n, key;
  printf("Enter size of array: \n");
  scanf("%d", &n);

  int arr[MAX_SIZE];
  printf("Enter array elements: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter number you want to search: \n");
  scanf("%d", &key);

  int value=binSearch(arr,key,0,n-1);

  if (value == -1) {
    printf("%d has no available position", key);
  }
  else {
    printf("The element %d found at position %d\n",key,value + 1);
  }
}
