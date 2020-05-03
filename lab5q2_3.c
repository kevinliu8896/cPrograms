#include<stdio.h>

int min(int *x, int n) { // function to find min
   int temp = x[0], i;
   for (i = 1; i < n; i++) {
     if(x[i] < temp) { // if condition satisfied..
       temp = x[i]; // set temp to x[i]
   }
 }
  return temp; // reutn temp
}


int max(int *x, int n) { // function to find max
  int temp = x[0], i;
  for (i = 1; i < n; i++) {
   if(x[i] > temp) { // if condition satisfied..
       temp = x[i]; // set temp to x[i]
   }
 }
  return temp; // return temp
}

int sum(int *x, int n) { //function to calculate sum
  int temp = 0, i;
  for (i = 0; i< n; i++) {
    temp = temp + x[i];
  }
  return temp;
}

int avg(int *x, int n) { //function to calculate average
  int temp = 0, i, avg;
  for (i = 0; i< n; i++) {
    temp = temp + x[i];
  }
  avg= temp/n;
  return avg;
}
void arrayinfo();

int main(){

  arrayinfo();

}
void arrayinfo(){

  int n, arr[100];
  printf("Enter size of array: \n");
  scanf("%d", &n);
  printf("Enter elements of the array: \n");
  for(int i=0; i < n; i++){
    scanf("%d", &arr[i]);
}

  int *x = arr;

  printf("The min value is %d ", min(x, n));
  printf("The max value is %d ", max(x, n));
  printf("The average is %d ", avg(x, n));
  printf("The sum is %d ", sum(x, n));
}
