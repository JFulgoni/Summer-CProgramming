//JFULGONI
//C PREPROCESSOR EXAMPLE

#include <stdio.h>

//Here is where we would define MESSAGE
//#define MESSAGE "The answer is C"

#ifndef MESSAGE //if MESSAGE is not defined
#define MESSAGE "You Wish!" //define message as "You Wish!"
#endif //end if

//Paramerized Macros

#define SQR(x) (x * x) //here we define the function, and how it operates

int main(){
    
    printf("Here is the message: %s\n", MESSAGE); //prints what is defined in MESSAGE
    
    //float b = 2.5;
    //int b = 8;
    
    char b = 67;
    char bsquared = SQR(b);
    
   // int bsquared = SQR(b); //use the defined function
    
    printf("This is b squared: %c\n", bsquared); //prints what bsquared ends up being

	return 0;
}//end main