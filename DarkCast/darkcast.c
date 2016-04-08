//JFULGONI
//The Dark Side of Casting
//See what happens when you don't say the type properly
#include <stdio.h>

int main()

{

 float a, b, c; //make three variables to be tested
 int x = 2, y = 3; //define two integers, x and y
 
 a = x / y; //for a, neither x or y is cast to a float, and should be truncated
 b = (float) x / y; //for b, the fraction is cast to a float, which works out fine
 c = (float) x / (float) y; //for c, both x and y are cast to floats prior, which also works out fine
 
 printf("a = %f,\nb = %f,\nc = %f\n", a, b, c); //prints all three results


 return (0);

}