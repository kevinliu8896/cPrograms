/*THIS FILE CONTAINS Q2.3
Kevin Liu
105191861
Sec 52
*/
#include<stdio.h>

void PrintArray(int size, int array[]){ // function to print array elements
  for(int i=0; i<size; i++){
    printf("array[%d] = %d \n", i, array[i] );
  }
}

void ArrayInfo(int size, int array[], int *min, int *max, int * sum, float * avg){ //function ArrayInfo
	*min = array[0]; // set *min to element 0 in the array
	*max = array[size - 1]; //set *max to element size -1 in the array
	for(int i = 0; i < size; i++){
		*sum = *sum + array[i]; // calculates the sum of elements in an array
	}
	*avg = (float)*sum / (float)size; // calculates an average of elements in the array
} // end ArrayInfo function

int main(){
  int array[100];
	float avg;
  int size;
	int sum = 0;
  int min;
  int max; //Variables for ArrayInfo
  printf("Enter an array size: \n");
  scanf("%d", &size);
	printf("Enter array elements: \n");
  for(int i = 0; i<size; i++) {
    scanf("%d", &array[i]);
  }
	PrintArray(size,array);
	ArrayInfo(size,array,&min,&max,&sum,&avg);
	printf("\nThe min is %d\n", min);
  printf("The max is %d\n",max);
  printf("The sum is %d\n", sum);
  printf("The average is %.2f\n",avg); //rounds up to 2 decimal places
	return 0;
}
