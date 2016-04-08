//JFULGONI
//GUESS THE NUMBER

#include <stdio.h>

int main(){
    
    printf("Let's play Guess the Number!\n");
    printf("What's your first guess?\n");
    
    int answer = 5; // define what the answer should be!
    
    int guess = -1; //initializes guess to -1
    
    scanf(" %d",&guess); //reads in the first guess from the user as an int, puts it in guess
    
    while(guess != answer){ //while the guessed number is not equal to the answer
        
        if(guess > answer){ //if the guess is bigger than the answer
            printf("Guess Lower!\n"); //tell the user to guess lower
        }
        else{ //if the guess is lower than the answer
            printf("Guess Higher!\n"); //tell the user to guess higher
        }
        
        scanf(" %d",&guess); //read in the next guess
    }
    
    printf("You Got It!\n"); //once the loop is exited, that means the user has input the right answer!

	return 0;
}//end main