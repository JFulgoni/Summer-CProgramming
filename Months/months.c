/*
 John Fulgoni
 Month Function Code
 29 July 2015
 */
#include <stdio.h>

//declare your function at the top
//very similar to the first line of making the function
//except you don't use variable names in the parentheses, just the types
void printMonth(int);


int main(){ //start main
    
    //this is what we call "calling a function"
    //we use the function name, and input the proper 
    printMonth(1); //this should print January
    int billy;
    billy = 3;
    printMonth(billy);
    
    return 0;
} //end main

//here is where we write out our function
//note that it has its own set of braces
//and is outside the braces of main
void printMonth(int num){ //start of printMonth
    switch(num){//start switch
        case 1:     //after case is a colon
            printf("January\n");
            break; //every other line gets semi-colons
        case 7:
            printf("July\n");
            break;
        default:
            printf("Invalid Month\n");
            break;
    }//end switch
}//end of printMonth