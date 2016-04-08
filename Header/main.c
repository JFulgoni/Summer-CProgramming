#include <stdio.h>
#include <string.h>
#include "count.h"
#include "main.h"

int main()
{
    runCounter(10);
    printf("Counter is %d\n", counter);
    
    business chipotle;
    strcpy(chipotle.name, "Columbia Chipotle");
    printf("%s\n", chipotle.name);
    return (0);
}

void runCounter(int i){
    for (i=0; i<10; i++){
        inc_counter();
    }
}
