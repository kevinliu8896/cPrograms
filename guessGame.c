/********************************
* Kevin Liu			*
* October 29			*
* Comp1400			*
********************************/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0)); //returns different value of a pseudo number
    // create required variables
    int goal = rand() %50 +1; //this will be the random number the player will try to guess.
    int guess; // create integer called guess
    int guessCount = 0; // create counter with value 0 to keep track of users amount of guesses

    // begin loop to see if too high or too low
    while (guessCount < 10){ // this loop allows the player to try to guess the number in 10 attempts or less
            printf("Enter a guess number: \n"); // Asks user to guess a number
            scanf("%d", &guess); // grabs users input and stores it in variable "guess"

            if (guess == goal) { // if statement when the users guess is equal to the random number
                printf("Correct, the number was %d\n", goal); // display message telling user they guessed correct number
                break; // break the if statement
            } // end of if
            else if (guess < goal) { // else if statement when the users guess is less than the random number
                printf("Too low...\n"); // display message telling user their guess was to low
                guessCount++; // increase value of counter in increments of 1
            } // end of else if
            else if (guess > goal) { // else if statement when the users guess is greater than the random number
                printf("Too high...\n"); // display message telling user their guess was too high
                guessCount++; // increase value of counter in increments of 1
            } // end of else if
            if(guessCount == 10) { // if the counter reaches 10, it means maximum attempts has been reached, and provides user with the randomly generated number
                printf("Sorry the number was: %d\n", goal); // display message to user saying the correct random number
            } // end if

    } // end while

} // end of main method


