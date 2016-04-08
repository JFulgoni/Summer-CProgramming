/*
 John Fulgoni
 Prime Numbers
 This code has a function that determines if a number is prime, then prints all of the prime numbers from 1 to 100
 */
#include <stdio.h>

int main(){ //start main
    
    int i;
    int result;
    for(i = 2; i<101; i++){
        result = isPrime(i);
        
    }
    
    return 0;
} //end main

int isPrime(int myNum){ //start isPrime
    int count;
    for(count = 2; count < myNum; count++){//start for
        if(myNum % count == 0){
            return 0;
        }
    }//end for
    //if it makes it through to this point
    //return 1 to say it is prime
    return 1;
} //end isPrime









