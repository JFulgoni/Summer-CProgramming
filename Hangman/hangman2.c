/* John Fulgoni
 Hangman.c
 This code runs a game of hangman with a manually coded-in word
 */

#include <stdio.h>
#include <string.h>

//function prototypes
int game(char [], char []);

int main()
{
    //Manually set the word to be guessed
    char word[20] = {'d','u','c','k'};
    char guessed[20] = {'_', '_', '_', '_'};
    
    int done;
    int turn;
    
    printf("Welcome to Hangman!\n");
    
    int guesses = 6; //set the number of guesses to be had
    
    for(int k = 0; k < guesses; k++){ //give 6 guesses
    
    	turn = game(word,guessed); //call to the function game
        
        if(turn == 1){
            if(k > 0){
                k--;
            }
        }
        
        printf("You have %d moves left!\n\n", guesses - k);

        if(strcmp(guessed, word) == 0){
            done = 1;
            break;
        }
    
	}
	
	if(done == 1){
		printf("You got it right!\n");
	}
	else{
		printf("Sorry! Better luck next time!\n");
	}
	
    return 0;   
}//end main

int game(char word[], char guessed[]){

	char letter;
    int good = 0;
	
	scanf(" %c", &letter); //get a new letter from the command line
    //letter = getchar();
	
	for(int x = 0; x < strlen(word); x++){
        //for int x = 0, 0 is the start of the array
        //while x is less than the length of the word
        //x = x + 1
	
		if(word[x] == letter){ //if the letter at that position is the same letter that was entered
			printf("Found %c!\n", letter);
			guessed[x] = letter; //replaces the underscore with the corresponding letter
            good = 1;
		}
		
	}
    if(good == 0){
        printf("There is no %c\n", letter);
    }
	printf("Word: %s\n", guessed); //prints the word up to that point

    return good;

}