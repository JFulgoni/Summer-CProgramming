/*
 John Fulgoni
 Intro to C, Summer 2015
 File I/O Example
 
 This code reads in from a file, and finds the mean and variance of the floats in the file
 */

#include <stdio.h>
#include <math.h>

float mean(float[], int);
float variance(float[], int, float);

int main()
{
    
    FILE *myInputFile; //here is where I declare my file
    myInputFile = fopen("myData.txt", "r");//here I read in from "myData.txt"
    //and say that I'm going to read from this file!
    //I then set my FILE variable equal to the fopen() to initialize it!
    
    float myFloat[10]; //create an array of floats
    
    int i;
    //this for loop reads in one float at a time
    //and then stores in in the proper index at the array
    //we can do the math later
    for(i = 0; i < 10; i++){
        fscanf(myInputFile, "%f", &myFloat[i]);
        printf("float: %f\n", myFloat[i]);
    }
    printf("\n");
    //now, we can call a function to find the mean
    float meanie = mean(myFloat, 10);
    //this function takes in the array of floats, and the size of the array
    printf("Mean: %f\n", meanie);
    
    //we now call a function to find the variance
    float varies = variance(myFloat, 10, meanie);
    //this function takes in the array of floats, and the size of the array, and the mean calculated previously
    printf("Variance: %f\n", varies);
    
    //now that I'm done with my file, I will use fclose() to close the file
    fclose(myInputFile);
    //now we can end the program, knowing that the memory was not wasted!
    return (0);
}

/*
 This function takes in an array of floats, and the size of an array
 And returns the mean of all the numbers in the array
 */
float mean(float array[], int size){
    int i;
    float sum = 0;
    for (i = 0; i < size; i++){
        sum = sum + array[i];
        //above line goes through the array and adds to sum
    }
    return sum / size;
    //returns the sum over the total number of elements
}

/*
This function takes in an array of floats, and the size of the array
And returns the variance of all the numbers in the array
*/
float variance(float array[], int size, float meanie){
    int i;
    float mse = 0;
    for(i = 0; i < size; i++){
        //sum up the differences of each element with the mean 
        mse = mse + pow((array[i]-meanie), 2);
    }
    
    //take the square root of the sum of squares divided by the size
    float rmse = sqrt(mse / size);
    
    //return the final answer
    return rmse;
}