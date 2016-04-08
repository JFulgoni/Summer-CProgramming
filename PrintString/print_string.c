//JFULGONI
//Prints a string that comes from the command line

#include <stdio.h>
#include <string.h> //uses string.h commands here

int main()

{
    /*
     This code is to show you how to use the function strlen() to get the length of the string, fgets() to read the string from the command line
     */
    
    int MAX_LENGTH = 256;
    
    char myString[MAX_LENGTH]; //this is my string variable
    //we make it able to hold up to MAX_LENGTH
    //but we can always use less
    
    /*Lengths for my string*/
    int l1; //this will hold the length of the string before replacing the last char
    int l2; //this will hold the length of the string after replacing the last char
    
    //prompt the user
    printf("Please Enter a String: ");
    
    fgets(myString, MAX_LENGTH, stdin); //gets the string from the command line
    //this function takes three arguments
    //first is the string variable to store the read in string
    //second is the maximum allowed size of the string you want to read in
    //third is a constant, just type stdin
    
    //this variable holds the length of the string before we replace the final character
    l1 = strlen(myString); //gets the length of the string (string.h), doesn't have to be the full length of the myString Variable
    
    printf("Here's what you've entered, %s, with a length of %d\n", myString, l1); //prints the string and a length
    
    int indexString = strlen(myString) - 1;
    //strlen returns the total length of the string
    //to get the last index, since it starts at 0, we need one less than the full length
    
    myString[indexString] = '\0'; //makes the last value a '\0', which means end of string
    
    //this variable will hold the length of the string after we place the last character
    l2 = strlen(myString); //gets the length of the string, but now it should be 1 less
    
    printf("After replacing the new line, you entered, %s, with a length of %d\n", myString, l2); //prints the string and the length
    
    return 0;
    
}//end main