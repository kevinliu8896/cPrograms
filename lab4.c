// Name: Kevin Liu
// ID: 105191861
// Section #52

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 100 // define size for arrays

void EnterArrayData(int size, int data[]) { // question 4 enter array data

  printf("\nPlease Enter %d elements of an Array \n", size); // display message
    for (int i = 0; i < size; i++){ // for loop to prompt user for array elements
      printf("Element [%d] : \n", i);
       scanf("%d", &data[i]);
     }
   } // end of function


void PrintArrayData(int size, int data[]) { // question 4 print array data

    printf("This is your array: \n"); // display message


    printf("[");
    for (int i=0; i<size; i++) { // for loop that prints array elements

        printf(" %d ", data[i]);
    } // end for

    puts("]");
} // end function


int BinarySearch(int K, int n, int A[]) { // question 1

    int low = 0; // integer var for low
    int high = n-1;//integer var for high
    int mid; // int var for mid

    while (low <= high) { // while low <= high....
        mid = (low + high)/2; // calclate midpoint

        if (K < A[mid]) {
            high = mid - 1;//find new midpoint
        }
        else if (K > A[mid]) {
            low = mid + 1;  // find new mid point
        }
        else {
            return mid; // reutnr mid
        }
    } // end while
    return -1;  //return -1 if no existing number in the array
} // end binary search function
int search(int arr[], int l, int h, int k){ // same function as binaray search except recursively
	if (h >= l){
		int mid = l + (h - l) / 2;

		if (arr[mid] == k){
			return mid;
		}

		if (arr[mid] > k){
			return search(arr, l, mid - 1, k);
		}

		else{
			return search(arr, mid + 1, h, k);
		}

	}
	return -1;
}

void SelectionSort(float n, float A[]) {// question 2
    int i, j, smallestIndex; // declare var

    for (i = 0; i < n-1; i++) { // for loop

        smallestIndex = i;

        for (j = i+1; j < n; j++) { // for loop

            if (A[j] < A[smallestIndex])
            smallestIndex = j;

        }
        //Swaps A[smallestIndex] and A[i]
        int tempswap = A[smallestIndex];
        A[smallestIndex] = A[i];
        A[i] = tempswap;
    }
}

void SelectionSortInteger(int n, int A[]) {// sort used for q3 for recursion set as integer values instead of float
    int i, j, smallestIndex;

    for (i = 0; i < n-1; i++) {

        smallestIndex = i;

        for (j = i+1; j < n; j++) {

            if (A[j] < A[smallestIndex])
            smallestIndex = j;

        }
        //Swaps A[smallestIndex] and A[i]
        int tempswap = A[smallestIndex];
        A[smallestIndex] = A[i];
        A[i] = tempswap;
    }
}
int IsPartiallySorted(int h,int m ,int data[],int data_copy[],int l,int p){ // partial sort function Q3
  if(l<=h){ //if l <= h....
    int index=search(data_copy,p,h,data[l]); // set index to search function above^
    if(abs(index-l)<=m){ // calculate absolute value
      return IsPartiallySorted(h,m,data,data_copy,l+1,p);// recursive calling function
    }
    else{
      return 0; // return 0
    }
  }
  return 1;//reutnr 1

} // end partial sort function



int main() {
    int run = 1;// create variable to control while loop
    int size,key,m,input,n,low,high;
    int data[MAX_SIZE];
    int data_copy[MAX_SIZE];


    while(run) { // keeps loop running to keep asking for input until user enter e
        //this printf statement prints out the interactive game menu for Q7
        printf("Enter which function you would like to test.(1 for binary search, 2 for partial sort, 3 for selection sort or -1 to exit the program)\n");
        scanf("%d", &input); // prompts user for inut
        switch(input) { // switch statement that determines what happens based on users input

          case 1: // case 1 asks user for array input and does binary search
          printf("Enter size\n");
          scanf("%d", &size);
          EnterArrayData(size,data);
          PrintArrayData(size,data);
          printf("Enter an element to search for (BINARY SEARCH)\n");
          scanf("%d", &key);
          printf("%d has been located at element %d\n",key,BinarySearch(key,size,data));
          break; // break

          case 2:// case 2 asks user for array input and does selection sort
          printf("Enter size\n");
          scanf("%d", &size);
          printf("Enter an array to sort in ascending order using selection sort: \n");
          EnterArrayData(size,data);
          float fA[MAX_SIZE];
          for (int i = 0; i < MAX_SIZE; i++) {
            fA[i] = (float)data[i];
          }
          SelectionSort(size,fA);
          printf("This is the array in asscending order: \n");
          for (int i = 0; i < size; i++) {
            printf("%f ", fA[i]);
          }
          printf("\n");
          break; // break

          case 3: // case 3 asks for array inputs and checks if array is partially partially sorted
          printf("Enter a size: \n");
          scanf("%d", &size);
          printf("Enter an array:\n");
          EnterArrayData(size,data);
          PrintArrayData(size,data);
          printf("Enter a degree for m:\n");
          scanf("%d", &m);
          for (int  i = 0; i < size; i++) {
            data_copy[i] = data[i];
          }
          SelectionSortInteger(size,data);
          if (IsPartiallySorted(size - 1, m, data,data_copy,0,0)==0) {
            printf("This is partially sorted with degree m\n");

          }
          if (IsPartiallySorted(size - 1, m, data,data_copy,0,0)==1) {
            printf("This is not partially sorted\n");
          }
          break; // break


          case -1: // exit case
          run = 0; // set run to 0 to end while loop
          break; // break


          default: // default if none of the above input has been typed in prompts user for input over and over again until input is accepted
          printf("That is an invalid input enter something else please. : \n"); // display message
          break; // break
        } // end of switch
    } // end of while loop
} // end of main function
