/*
 John Fulgoni
 Fibonacci Sequence
 This code returns the fibonacci sequence to run 
 a certain number of times.
 */

#include <stdio.h>

int myFunction(int, int);

int main()
{
    int first = 0;
    int second = 1;
    
    int limit = 10; //define how many times to run
    
    printf("%d, %d, ", first, second); //print the first two here
    
    int times;//declare your variable here
    for(times = 0; times < limit; times++){
        //use the above for loop to run the code
        //a predefined number of times
        //in this case
        //this will run 10 times
    }
    
    //ignore everything above for now
    
    int number1 = 10;
    
    int y = multiply(number1, 5);
    
    printf("%f\n", y);

    
    return 0;
}



int multiply(int number1, int number2){
    
    int result = number1 * number2;
    
    return result;
}

float add(float a, float b){
    return a + b;
}

float power(float x, int y){
    int i;
    float result = 1;
    for(i = 0; i < y; i++){
        result = result * x;
    }
    return result;
}


