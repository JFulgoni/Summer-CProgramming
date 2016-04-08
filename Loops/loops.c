/*
 John Fulgoni
 27 July 2015
 Examples of Using Loops
*/
#include <stdio.h>

int main(){
    
    
    //Below is an example of a while loop
    int x;
    while(x < 50){
        //write your code here that you want to repeat
        
        x = x + 1; //the same as x++
    }
    
    //Below is an example of a for loop
    int i;
    for(i = 0; i < 100; i = i + 1){
        //write your code here that you want to repeat
        
    }
    
    
    int x = 10;
    if(x > 5){
        printf("%d is greater than 5\n", x);
    }
    else{
        printf("%d is less than 5\n", x);
    }
    
    return 0;

}