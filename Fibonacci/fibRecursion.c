/*
 John Fulgoni
 Fibonacci Sequence Recursion
 This code returns the fibonacci sequence using recursive methods
 */

#include <stdio.h>

void fibonacci(int, int, int);

int main()
{
    int first = 0;
    int second = 1;
    
    int number_of_terms = 5;
    
    printf("%d, %d", first, second);
    
    //this is my original call to the fibonacci
    //method, where I pass the first two given values, as well as the number of terms
    fibonacci(first, second, number_of_terms);
    
    //now we're done
    //print a \n to make it clean
    printf("\n");
    
    return 0;
}

void fibonacci(int first, int second, int i){
    //i is the number of terms left to print
    if(i > 0){
        //rule of fibonacci sequence
        //this is the same as the loop version!
        int third = first + second;
        
        //we then shift the variables down one position in our heads
        //first = second;
        //second = third;
        
        //print the third term here
        printf(", %d", third);
        
        //call fibonacci again, with different arguments
        //we then pass our new variables into the next call of the function
        //first is now equal to second, and second now equals first + second
        //we decrement i so we know how many terms we have left to print
        fibonacci(second, third, i - 1);
    }
    //else{
        //this is when i = 0
        //and we no longer wish to print terms
        //you don't actually need this else at all!
    //}
    
    //you don't need to return anything
    //since the function is void
}



