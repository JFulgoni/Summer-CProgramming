/*This program is designed to function as a calculator. It is written using the switch statement" */
#include<stdio.h>
#include<stdlib.h>
// Usage of stdlib in order to get the exit(0) function working

int main()
{
int in1,in2,choice, output;
while(1)
{
printf ("Enter the first input\n");
scanf("%d",&in1);
printf ("Enter the second input\n");
scanf("%d",&in2);
printf ("Enter the Choice\n 1- Add \n 2- Subtract \n 3 - Multiply \n 4 - Divide \n");
scanf("%d",&choice);

//Use of switch statement to route the choice of operation to the actual operation

switch(choice)
{
case 1: output = in1 + in2;
        printf("\n The result of the operation is %d \n",output);        
        break;
case 2: output = in1 - in2;
        printf("\n The result of the operation is %d \n",output);
        break;
case 3: output = in1 * in2;
        printf("\n The result of the operation is %d \n",output);
        break;
case 4: output = in1 / in2;
        printf("\n The result of the operation is %d \n",output);
        break;
default: printf ("Invalid Entry\n");
        exit(0);
}
}
return 0;
}

