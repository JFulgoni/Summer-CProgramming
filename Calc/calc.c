
/*This program is designed to function as a calculator. It is written using the nested if-else statements" */

#include<stdio.h>

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

if(choice == 1)
{
  output = in1 + in2;
}
if(choice == 2)
{
  output = in1 - in2;
}
if(choice == 3)
{
  output = in1 * in2;
}
if(choice == 4)
{
  output = in1 / in2;
}
if(choice > 4)
{
  printf ("Invalid Choice\n");
    break;
}

printf("\n The result of the operation is %d \n",output);
}
return 0;
}
