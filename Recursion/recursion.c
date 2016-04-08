/*
 John Fulgoni
 Recursion Example
 Here, we want to practice our knowledge of recursive functions
 
 */

#include <stdio.h>

int recurse(int);


int main()
{
    
    int result = recurse(5);
    //this is the original call to recurse
    
    printf("The sum of numbers is: %d\n", result);
    return 0;
}

int recurse(int i){
    
    printf("int i equals = %d\n", i);
    //above prints the value of i
    
    if(i == 0){
        return 0;
    }
    else{
        return i + recurse(i - 1);
    }

}

/*
 i + (i-1) + (i-2) + ... + 0
 is what we're ultimately trying to produce here
 once the code reaches 0, we tell it to stop making calls to recurse()
 */


