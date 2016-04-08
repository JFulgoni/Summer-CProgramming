/*
Bert Huang
Quick implementation of recursive Towers of Hanoi for COMS 1003
*/

#include <stdio.h>

/* Move stack of N discs from peg A to peg B using extra peg C */
void hanoi(int N, int A, int B, int C)
{
  if (N==1)
    printf("Move disc from peg %d to peg %d\n", A, B);
  else {
    hanoi(N-1, A, C, B);
    printf("Move disc from peg %d to peg %d\n", A, B);
    hanoi(N-1, C, B, A);
  }
}


int main (int argc, char *argv[])
{
  int N;

  /* read command line number of pegs */
    if(argc == 2){
        sscanf(argv[1],"%d",&N); //scans in an int
  
        /* compute solution */
        hanoi(N,1,3,2);
    }
    else{
        printf("Incorrect Number of Arguemnts\n");
    }

  return 0;
}
