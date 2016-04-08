/*
 John Fulgoni
 */

#include <stdio.h>

//this is the new include
#include <stdlib.h>

int main()
{

    char space1 = '.';
    char space2 = '.';
    char space3 = '.';
    char space4 = '.';
    char space5 = '.';
    char space6 = '.';
    char space7 = '.';
    char space8 = '.';
    char space9 = '.';
    
    int turns = 1;
    
    int selection;
    
    while(turns < 10){ //only 9 turns max
        printf("Make your move\n");
        scanf("%d", &selection); //ask for position
        switch(selection){ //switch based on selection
            //selection should be 1 through 9
            //but that is handled within the switch statement
                
            case 1:
                if(space1=='.') {
                    if(turns % 2 == 1){
                        space1 = 'X';
                    }
                    else{
                        space1 = 'O';
                    }
                    turns++;
                }
                break;
                //note that if the space is taken
                //turns doesn't get incremented
                //so its the same player's turn
            case 2:
                if(space2=='.') {
                    if(turns % 2 == 1){
                        space2 = 'X';
                    }
                    else{
                        space2 = 'O';
                    }
                    turns++;
                }
                break;
            default:
                printf("Not Sure\n");
                break;
                
        }
        
        printf("%c | %c | %c\n", space1, space2, space3);
        printf("____________\n");
        printf("%c | %c | %c\n", space4, space5, space6);
        printf("____________\n");
        printf("%c | %c | %c\n", space7, space8, space9);
    }
    
    return 0;
}
