#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) /*arguments!!!*/
{

int a, b, c;

sscanf(argv[1], "%d", &a); //assign the first variable to a
sscanf(argv[2], "%d", &b); //assign the second variable to b
 
 c = a * b;
 printf("%d times %d is %d\n", a, b, c);
    printf("Argc is : %d\n", argc);
    
    char myString[256];
    strcpy(myString, "456.697");
    float myNumber;
    sscanf(myString, "%f", &myNumber);
    printf("My number is : %.3f\n", myNumber);

 return (0);

}