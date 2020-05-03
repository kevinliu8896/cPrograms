// Name: Kevin Liu
// ID: 105191861
// Section #52

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 100

void EnterArrayData(int size, int data[]) {

  printf("\nPlease Enter %d elements of an Array \n", size);
    for (int i = 0; i < size; i++){
      printf("Element [%d] : \n", i);
       scanf("%d", &data[i]);
     }
   }


void PrintArrayData(int size, int data[]) {

    printf("This is your array: \n");


    printf("[");
    for (int i=0; i<size; i++) {

        printf(" %d ", data[i]);
    }

    puts("]");
}


int BinarySearch(int K, int n, int A[]) { // question 1

    int low = 0;
    int high = n-1;
    int mid;

    while (low <= high) {
        mid = (low + high)/2;

        if (K < A[mid]) {
            high = mid - 1;
        }
        else if (K > A[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;  //return -1 if no existing number in the array
}

void SelectionSort(float n, float A[]) {// question 2
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

int IsPartiallySorted(int high,int m ,int a[],int arr[],int low,int pointerlow){ // question 3
	if(low<=high){
		int index=BinarySearch(arr,high,a[low]);
		if(abs(index-low)<=m){
			return IsPartiallySorted(high,m,a,arr,low+1,pointerlow);
		}
		else{
			return 0;
		}
	}
	return 1;
}


int main() {
    int run = 1;// create variable to control while loop
    int size,key,m;
    int data[MAX_SIZE];
    int input;
    int n;


    while(run) { // keeps loop running to keep asking for input until user enter e
        //this printf statement prints out the interactive game menu for Q7
        printf("Enter which function you would like to test.(1 for binary search, 2 for partial sort, 3 for selection sort or -1 to exit the program)\n");
        scanf("%d", &input); // prompts user for inut
        switch(input) { // switch statement that determines what happens based on users input

          case 1:
          printf("Enter size\n");
          scanf("%d", &size);
          EnterArrayData(size,data);
          PrintArrayData(size,data);
          printf("Enter an element to search for (BINARY SEARCH)\n");
          scanf("%d", &key);
          printf("%d has been located at element %d\n",key,BinarySearch(key,size,data));
          break;

          case 2:
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
          break;

          case 3:
          printf("Enter a size: \n");
          scanf("%d", &n);
        	printf("Enter the degree of array in m\n");
        	scanf("%d",&m);

        	SelectionSort((float)n,(float)data);
        	printf(" testing question number 3\n");
        	int check =IsPartiallySorted(n-1,m,a,arr,0,0); //method to check partially sorted via recursion
        	if(check){
        		printf("yes array is partially sorted with degree m\n");
        	}
        	else{
        		printf("no array is partially sorted with degree m\n");
        	}

          case -1:
          run = 0;
          break;


          default: // default if none of the above input has been typed in prompts user for input over and over again until input is accepted
          printf("That is an invalid input enter something else please. : \n"); // display message
          break; // break
        } // end of switch
    } // end of while loop
} // end of main function
























printf("Please enter the degree of m: ");
            scanf("%d",&m);
            selectionSort(arr2,size);
            check = IsPartiallySorted(m ,arr,arr2,0,size-1,0);
            if(check == 1){
              printf("Given array is an imperfect sorted array of degree less than or equal m");
            }if(check == 0){
              printf("Given array has a imperfect degree greater than m");
            }
