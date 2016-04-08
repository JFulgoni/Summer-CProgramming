/*
 John Fulgoni
 24 July 2015
 Example Using Scanf to read in a char
*/
#include <stdio.h>

int main(){
    
    char myChar; //this is a variable that holds a character

    printf("Enter a character!\n");
    scanf(" %c", &myChar);
    printf("The letter you entered is: %c\n", myChar);
    //now the character is read in
    
    /*
    if(myChar == '$'){
        printf("You're making money!\n");
    }//end of the if statement
    else if(myChar == 'J' || myChar == 'j'){
        printf("Oh Hello, John\n");
    }
    else{
        printf("You're really cool\n");
    }//end of else statement
    */
    
    switch(myChar){
        case ('$'):
            printf("You're making money now!\n");
            break;
        case ('J'):
            printf("Oh hello, John\n");
            break;
        case ('j'):
            printf("Oh hello, John\n");
            break;
        case ('q'):
            printf("It's Friday! YEAH\n");
            break;
        default:
            printf("Please Enter a Valid Input\n");
            break;
    }
    
    return 0;

}