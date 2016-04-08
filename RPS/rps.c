/*
 John Fulgoni
 24 July 2015
 Rock Paper Scissors
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    char player;
    printf("Please Enter a Value for Player\n");
    scanf(" %c", &player);
    
    srand(time(NULL));
    int computerNum = rand() % 3 + 1;
    //rand % 3 gives back a value from 0 to 2
    //so the possible values are 0, 1, and 2
    //we add 1 to any of these values, so
    //what it can return is 1, 2, or 3
    
    char computer;
    switch(computerNum){
        case 1:
            computer = 'r';
            break;
        case 2:
            computer = 'p';
            break;
        case 3:
            computer = 's';
            break;
        default:
            computer = 'x';
            break;
    }
    printf("Computer: %c\n", computer);
    
    switch(player){
            case 'r':
            switch(computer){
                    case 'r':
                    printf("Draw!\n");
                    break;
                    case 'p':
                    printf("Computer Wins!\n");
                    break;
                    case 's':
                    printf("Player Wins!\n");
                    break;
                default:
                    printf("Computer Has entered the wrong value\n");
            }
            break;
            case 'p':
            switch(computer){
                case 'r':
                    printf("Player Wins!\n");
                    break;
                case 'p':
                    printf("Draw!\n");
                    break;
                case 's':
                    printf("Computer Wins!\n");
                    break;
                default:
                    printf("Computer Has entered the wrong value\n");
            }
            break;
            case 's':
            switch(computer){
                case 'r':
                    printf("Computer Wins!\n");
                    break;
                case 'p':
                    printf("Player Wins!\n");
                    break;
                case 's':
                    printf("Draw!\n");
                    break;
                default:
                    printf("Computer Has entered the wrong value\n");
            }
            break;
        default:
            printf("Player has entered the wrong value\n");
    }
    
    return 0;

}
