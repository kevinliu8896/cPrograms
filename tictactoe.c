// Name: Kevin Liu
// Student ID: 105191861
// Assignment Name: tictactoe.c
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

void InitializeBoard(int m, int n , char board[][n]); // function prototype for Q1
void PrintBoard(int m, int n, char board[][n]); // function prototype for Q2
void CreateBoard(int m, int n, char board[][n]); // function prototype for Q3
int IsValidBoard(int m, int n, char board[][n]); // function prototype for Q4
void ListWinningCells(int m, int n, char board[][n]); // function prototype for Q5
char WhoIsTheWinner(int m, int n, char board[][n]); // function prototype for Q6

int main() {
    int m = 3, n = 3; // define the size  of m and n
    int run = 1;// create vartiable to control while loop
    char input; // char variable for user input
    char board[m][n]; // create char board[m][n]
    InitializeBoard(m,n,board); // initializes the board

    while(run) { // keeps loop running to keep asking for input until user enter e
        //this printf statement prints out the interactive game menu for Q7
        printf("press 'p' to print the tic-tac-toe board\npress 'c' to create a tic-tac-toe board with some X and O cells\npress 't' to test if a tic-tac-toe board is valid or invalid board\npress 'w' to predict winning cell for player X or O\npress 'z' to check winner\npress 'e' to Exit\n");
        scanf(" %c", &input); // prompts user ffor inut
        switch(input) { // switch statement that determines what happens based on users input
          case 'p': // case p prints board
          PrintBoard(m,n,board); // call function to print board
          break; // break

          case 'c': // case c creates board allows user to input x and o's
          CreateBoard(m,n,board); // callls function to create board
          break; // break

          case 't': // case t checks if board is valid
          (IsValidBoard(m,n,board)) == 1 ? printf("Board is valid\n") : printf("Board is not valid\n"); // checks if board is valid
          break; // break

          case 'w': // case w displays cells that could possible win
          ListWinningCells(m,n,board); // calls function to list the cells
          break;


          case 'z': // case z return X,O,or D to determine who the winner is
          WhoIsTheWinner(m,n,board); // calls function to return X, O, or D
          printf("The winner is: %c\n", WhoIsTheWinner(m,n,board));
          break;

          case 'e': // case e ends program
          run = 0; // set run to 0
          break; // break

          default: // default if none of the above input has been typed in prompts user for input over and over again unti; input is accepted
          printf("That is an invalid input enter something else please.: \n"); // display message
          break; // break
        } // end of switch
    } // end of while loop
} // end of main function

void InitializeBoard(int m, int n , char board[][n]){ // function 1
    int c =1; // counter variable
    for(int i =0; i<m; i++){ // for loop
        for(int j=0; j< n; j++){ // for loop
            board[i][j] = c+'0';
            c++; // increase count by increments of 1
        } //end for loop
    } // end for loop
} // end of InitializeBoard function

void PrintBoard(int m,int n,char board[][n]) { // function 2
    int i, j; // create variables for the for loops
    for ( i = 0; i < m; i++) { // for loop
      printf("     |     |\n"); // prints board
        for ( j = 0; j < n; j++) { // for loop
            if (j == 1) { // if statement
              printf("|  %c  |", board[i][j]);// prints board
            } // end if
            else {
              printf("  %c  ", board[i][j]);// prints board (the cell number)
            } // end of else
        } // end of for loop
        if (i != 2) // if statement
            printf("\n_____|_____|_____");// prints board
        printf("\n");// prints board new line
    } // end for loop
    printf("     |     |\n");// prints board
} //end of PrintBoard function

void CreateBoard(int m, int n, char board[][n]) { // function 3
  int num; // decalre num as integer variable
  char xo; // char variable for x's and o's
  while(1) { // while loop
    PrintBoard(m,n,board); // call PrintBoard function
    printf("Enter the number of the cell where you want to insert x or o or enter -1 to exit\n"); // display message
    scanf("%d", &num); // prompt user for input
    if ( num >= 1 && num <= 9) { // if statement
      printf("Type x or o\n"); // display message asking for x or o
      scanf(" %c", &xo); // prompt for input ofr char value
      for(int i =0; i<m; i++){ // for loop
          for(int j=0; j< n; j++){ // for loop
              if(board[i][j] == num+'0') { // if statement
               board[i][j] = xo; // set board[i][j] equal to xo

             }// end if
          } // end for
      } // end for
    } // end if
    if (num == -1) { // begin if
      break; // break
    } // end if

  } // end while loop

} // end CreateBoard function

int IsValidBoard(int m, int n, char board[][n]) { // function 4
  int xc = 0, oc = 0; // integers xc and oc will help check validity of board

  for(int i =0; i<m; i++){ // for loop
        for(int j=0; j< n; j++){ //for loop
          if (board[i][j] == 'x' || board[i][j] == 'X') { // if statement
          xc += 1; // increase xc by increments of 1
        } // end if
          if (board[i][j] == 'o' || board[i][j] == 'O') { // if statement
            oc += 1; // increase oc by 1
          } // end if
        } // end for

    } // end for

    if (abs(xc-oc) == 1 || abs(xc-oc) == 0) { // if statement for absolute value calculations
      return 1; // return value 1
    } // end if
    else { // begin else
      return 0; // return value 0
    } // end else

} // end of IsValidBoard function


void ListWinningCells(int m, int n, char board[][n]) { // this function displays all possible winning cell #'s and displays invalid board has no winning cells.'
if (IsValidBoard(m, n, board)) { // check boolean statment of IsValidBoard to succesfully execute all possible cell # combinations and succesfully output invalid board has no winning cells

  if (board[1][0] == 'O') {
      if (board[2][0] == 'O') {
          if (board[0][0] == 'X') {
          }
          else {
              printf("Cell #1 is a winning cell for player O\n");
          }
      }
  }
  if (board[1][1] == 'O') {
      if (board[2][1] == 'O') {
          if (board[0][1] == 'X') {
          }
          else {
              printf("Cell #2 is a winning cell for player O\n");
          }
      }
  }
  if (board[1][2] == 'O') {
      if (board[2][2] == 'O') {
          if (board[0][2] == 'X') {
          }
          else {
              printf("Cell #3 is a winning cell for player O\n");
          }
      }
  }
  if (board[1][2] == 'O') {
      if (board[2][2] == 'O') {
          if (board[0][2] == 'X') {
          }
          else {
              printf("Cell #3 is a winning cell for player O\n");
          }
      }
  }
  if (board[0][0] == 'O') {
      if (board[2][0] == 'O') {
          if (board[1][0] == 'X') {
          }
          else {
              printf("Cell #4 is a winning cell for player O\n");
          }
      }
  }
  if (board[0][1] == 'O') {
      if (board[2][1] == 'O') {
          if (board[1][1] == 'X') {
          }
          else {
              printf("Cell #5 is a winning cell for player O\n");
          }
      }
  }
  if (board[0][2] == 'O') {
      if (board[2][2] == 'O') {
          if (board[1][2] == 'X') {
          }
          else {
              printf("Cell #6 is a winning cell for player O\n");
          }
      }
  }
    if (board[0][0] == 'O') {
        if (board[1][0] == 'O') {
            if (board[2][0] == 'X') {
            }
            else {
                printf("Cell #7 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][1] == 'O') {
        if (board[1][1] == 'O') {
            if (board[2][1] == 'X') {
            }
            else {
                printf("Cell #8 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][2] == 'O') {
        if (board[1][2] == 'O') {
            if (board[2][2] == 'X') {
            }
            else {
                printf("Cell #9 is a winning cell for player O\n");
            }
        }
    }
    if (board[1][0] == 'X') {
        if (board[2][0] == 'X') {
            if (board[0][0] == 'O') {
            }
            else {
                printf("Cell #1 is a winning cell for player X\n");
            }
        }
    }
    if (board[1][1] == 'X') {
        if (board[2][1] == 'X') {
            if (board[0][1] == 'O') {
            }
            else {
                printf("Cell #2 is a winning cell for player X\n");
            }
        }
    }
    if (board[1][2] == 'X') {
        if (board[2][2] == 'X') {
            if (board[0][2] == 'O') {
            }
            else {
                printf("Cell #3 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][0] == 'X') {
        if (board[2][0] == 'X') {
            if (board[1][0] == 'O') {
            }
            else {
                printf("Cell #4 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][1] == 'X') {
        if (board[2][1] == 'X') {
            if (board[1][1] == 'O') {
            }
            else {
                printf("Cell #5 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][2] == 'X') {
        if (board[2][2] == 'X') {
            if (board[1][2] == 'O') {
            }
            else {
                printf("Cell #6 is a winning cell for player X\n");
            }
        }
    }

    if (board[0][0] == 'X') {
        if (board[1][0] == 'X') {
            if (board[2][0] == 'O') {
            }
            else {
                printf("Cell #7 is a winning cell for player X\n");
            }
        }
    }

    if (board[0][1] == 'X') {
        if (board[1][1] == 'X') {
            if (board[2][1] == 'O') {
            }
            else {
                printf("Cell #8 is a winning cell for player X\n");
            }
        }
    }


    if (board[0][2] == 'X') {
        if (board[1][2] == 'X') {
            if (board[2][2] == 'O') {
            }
            else {
                printf("Cell #9 is a winning cell for player X\n");
            }
        }
    }

    if (board[0][0] == 'O') {
        if (board[0][1] == 'O') {
            if (board[0][2] == 'X') {
            }
            else {
                printf("Cell #3 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][1] == 'O') {
        if (board[0][2] == 'O') {
            if (board[0][0] == 'X') {
            }
            else {
                printf("Cell #1 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][0] == 'O') {
        if (board[0][2] == 'O') {
            if (board[0][1] == 'X') {
            }
            else {
                printf("Cell #2 is a winning cell for player O\n");
            }
        }
    }

    if (board[0][0] == 'X') {
        if (board[0][1] == 'X') {
            if (board[0][2] == 'O') {
            }
            else {
                printf("Cell #3 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][1] == 'X') {
        if (board[0][2] == 'X') {
            if (board[0][0] == 'O') {
            }
            else {
                printf("Cell #1 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][0] == 'X') {
        if (board[0][2] == 'X') {
            if (board[0][1] == 'O') {
            }
            else {
                printf("Cell #2 is a winning cell for player X\n");
            }
        }
    }
    if (board[1][0] == 'O') {
        if (board[1][1] == 'O') {
            if (board[1][2] == 'X') {
            }
            else {
                printf("Cell #6 is a winning cell for player O\n");
            }
        }
    }
    if (board[1][1] == 'O') {
        if (board[1][2] == 'O') {
            if (board[1][0] == 'X') {
            }
            else {
                printf("Cell #4 is a winning cell for player O\n");
            }
        }
    }
    if (board[1][0] == 'O') {
        if (board[1][2] == 'O') {
            if (board[1][1] == 'X') {
            }
            else {
                printf("Cell #5 is a winning cell for player O\n");
            }
        }
    }
    if (board[1][0] == 'X') {
        if (board[1][1] == 'X') {
            if (board[1][2] == 'O') {
            }
            else {
                printf("Cell #6 is a winning cell for player X\n");
            }
        }
    }
    if (board[1][1] == 'X') {
        if (board[1][2] == 'X') {
            if (board[1][0] == 'O') {
            }
            else {
                printf("Cell #4 is a winning cell for player X\n");
            }
        }
    }
    if (board[1][0] == 'X') {
        if (board[1][2] == 'X') {
            if (board[1][1] == 'O') {
            }
            else {
                printf("Cell #5 is a winning cell for player X\n");
            }
        }
    }
    if (board[2][0] == 'O') {
        if (board[2][1] == 'O') {
            if (board[2][2] == 'X') {
            }
            else {
                printf("Cell #9 is a winning cell for player O\n");
            }
        }
    }
    if (board[2][1] == 'O') {
        if (board[2][2] == 'O') {
            if (board[2][0] == 'X') {
            }
            else {
                printf("Cell #7 is a winning cell for player O\n");
            }
        }
    }
    if (board[2][0] == 'O') {
        if (board[2][2] == 'O') {
            if (board[2][1] == 'X') {
            }
            else {
                printf("Cell #8 is a winning cell for player O\n");
            }
        }
    }
    if (board[2][0] == 'X') {
        if (board[2][1] == 'X') {
            if (board[2][2] == 'O') {
            }
            else {
                printf("Cell #9 is a winning cell for player X\n");
            }
        }
    }
    if (board[2][1] == 'X') {
        if (board[2][2] == 'X') {
            if (board[2][0] == 'O') {
            }
            else {
                printf("Cell #7 is a winning cell for player X\n");
            }
        }
    }
    if (board[2][0] == 'X') {
        if (board[2][2] == 'X') {
            if (board[2][1] == 'O') {
            }
            else {
                printf("Cell #8 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][0] == 'O') {
        if (board[1][1] == 'O') {
            if (board[2][2] == 'X') {
            }
            else {
                printf("Cell #9 is a winning cell for player O\n");
            }
        }
    }
    if (board[1][1] == 'O') {
        if (board[2][2] == 'O') {
            if (board[0][0] == 'X') {
            }
            else {
                printf("Cell #1 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][0] == 'O') {
        if (board[2][2] == 'O') {
            if (board[1][1] == 'X') {
            }
            else {
                printf("Cell #5 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][0] == 'X') {
        if (board[1][1] == 'X') {
            if (board[2][2] == 'O') {
            }
            else {
                printf("Cell #9 is a winning cell for player X\n");
            }
        }
    }
    if (board[1][1] == 'X') {
        if (board[2][2] == 'X') {
            if (board[0][0] == 'O') {
            }
            else {
                printf("Cell #1 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][0] == 'X') {
        if (board[2][2] == 'X') {
            if (board[1][1] == 'O') {
            }
            else {
                printf("Cell #5 is a winning cell for player X\n");
            }
        }
    }
    if (board[0][2] == 'O') {
        if (board[1][1] == 'O') {
            if (board[2][0] == 'X') {
            }
            else {
                printf("Cell #7 is a winning cell for player O\n");
            }
        }
    }
    if (board[2][0] == 'X') {
        if (board[1][1] == 'X') {
            if (board[0][2] == 'O') {
            }
            else {
                printf("Cell #3 is a winning cell for player X\n");
            }
        }
    }
    if (board[2][0] == 'O') {
        if (board[1][1] == 'O') {
            if (board[0][2] == 'X') {
            }
            else {
                printf("Cell #3 is a winning cell for player O\n");
            }
        }
    }
    if (board[2][0] == 'O') {
        if (board[0][2] == 'O') {
            if (board[1][1] == 'X') {
            }
            else {
                printf("Cell #5 is a winning cell for player O\n");
            }
        }
    }
    if (board[0][2] == 'X') {
        if (board[1][1] == 'X') {
            if (board[2][0] == 'O') {
            }
            else {
                printf("Cell #7 is a winning cell for player X\n");
            }
        }
    }
    if (board[2][0] == 'X') {
        if (board[0][2] == 'X') {
            if (board[1][1] == 'O') {
            }
            else {
                printf("Cell #5 is a winning cell for player X\n");
            }
        }
    }
  } // end if statement for IsValidBoard
  else { // else statement for invalid boards
    printf("Board is invalid. No winning cells available.\n"); // display message saying no winning cells because board is invalid
  } // end else
} // end ListWinningCells function


char WhoIsTheWinner(int m, int n, char board[][n]){ // function 6 that declares winner

	if(m - 0 >= 0 && n - 0 >= 0){ // if statement
		if ((board[m][0] != '\0') && (board[m][0] == board[m][1]) && (board[m][0] == board[m][2])){ // begin if statment
			return board[m][0]; // returns board[m][0]
    } //end if

		else if ((board[0][m] != '\0') && (board[0][m] == board[1][m]) && (board[0][m] == board[2][m])){ // begin else if
			return board[0][m]; // return board[0][m]
    } // end else if

		else if ((board[0][0] != '\0') && (board[0][0] == board[1][1]) && (board[0][0] == board[2][2])){// begin else if
			return board[0][0]; //return board[0][0]
    }// end else if

		else if ((board[2][0] != '\0') && (board[2][0] == board[1][1]) && (board[2][0] == board[0][2])){// begin else if
			return board[2][0];//return board[2][0]
    }// end else if
		else // begin else
			return WhoIsTheWinner(m - 1, n - 0, board);// call WhoIsTheWinner function to allow recursion to happen
	}//end else

	else { // begin else
		return 'D'; // returns D meaning nobody has won the game
  } // end else
} // end WhoIsTheWinner function
