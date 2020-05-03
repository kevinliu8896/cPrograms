#include <stdio.h>
#include <string.h>


void PrintBookList(int rows, int columns, char bookList[][columns]){

    // This function print all the book titles (names) in the list

    for(int i=0; i < rows; i++){
        printf("%s\n", bookList[i]);
    }

}

int SearchBooKList(char bookName[], int rows, int columns, char bookList[][columns]){
  int key;
    // complete the missing code to return the index of the book in the list (array) if you found it
    for (int i = 0; i < rows; i++) {
      key = strcmp(bookName,bookList[i]);
      if (key == 0) {
        return i;
      }
    }
    // not found
    return -1;
}



void SortBooKList(int rows, int columns, char bookList[][columns]){

    char temp[50];

    for(int i=0; i<rows-1; i++){

        for(int j =i+1; j < rows; j++){

            if(strcmp(bookList[i], bookList[j]) > 0){
                // complete the missing code to sort the list of book by names in ascending order
            }
        }
    }

}


void PrintBookNameLenght(int rows, int columns, char bookList[][columns]){

    // complete the missing code to print the length (number of characters) of each book in the list
}

int main() {
    char  myBookList[10][50] = {
            "Security Information Visualization",
            "Beginning Software Engineering",
            "Cloud Computing",
            "Network Security",
            "Cryptography",
            "Serious Programming",
            "Computer Graphic",
            "Malware Analysis",
            "Compiler Design",
            "Applied AI",
    };


    printf("--- The Books List Unsorted ----\n\n");

    PrintBookList(10,50, myBookList);

    SortBooKList(10,50, myBookList);

    printf("\n---- The Books List after Sorting it -----\n\n");

    PrintBookList(10,50, myBookList);

    printf("\n------The length of each Book Title on the List --------\n\n");

    PrintBookNameLenght(10,50, myBookList);


    printf("\n--------Check if a given book title exist in the list or not --------\n\n");


    // Change the main to allow the user to enter the book name (title) using scanf() function,
    // instead of hard coding it as follows

    char bookName [50] = "Cloud Computing";

    int found;

    found = SearchBooKList(bookName, 10, 50, myBookList);

    if( found > -1){

        printf("%s found in the list at index: %d", bookName, found);
    }
    else{

        printf("%s  not exist in the book list", bookName);
    }

    return 0;
}
