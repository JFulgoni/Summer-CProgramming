/*
 John Fulgoni
 Summer Session - Intro to C, Linked Lists
 July 2015
 This code demonstrates using malloc to create a linked list that have additional operations performed on it
 This code only uses pointers, and never created a structure object directly, only through malloc.
 */

#include <stdio.h>
#include <stdlib.h>

//here I define the structure for my node
//each node has an integer data value
//as well as a pointer to another node
struct linked_node{
    int data; //here is the value it will store
    struct linked_node *next; //here is the pointer to the next node in the list
};
typedef struct linked_node node;//rename it to 'node'

//function prototypes
void printList(node*);
int findValue(node*, int);

int main()
{
    //here I define an array that we can use to populate the linked list
    int dataList[5] = {10, -8, 5, 77, 28};
    
    //we then create a pointer with malloc that points to a node in memory
    node *start = malloc(sizeof(node));
    start -> data = dataList[0]; //we then initialize the data at the head with the first item in the array
    
    //now we set a new pointer to look at the same piece of memory as start.
    //this is very simple, just set the new pointer equal to start
    //we do this so we can have a pointer that moves down the line
    //and we always want start to point to the start
    node *current = start;
    
    /*
     In this for loop, we do several things in order to "move the chains"
     1. Create a new node in memory, and have that malloc be set to current -> next
     2. Set current equal to current -> next, which makes the pointer look at the next value in the chain.
     3. Set the data for the current place in memory using the array
     4. Set the current -> next pointer to NULL.
        4a. If the node in question is the end of the line, then we want this value to be NULL
        4b. If the node in question is not the end of the line, then it simply gets overwritten by Step 1 in the next iteration.
     5. Return to Step 1 until there are no more numbers to put in.
     */
    int i;
    for(i = 1; i < 5; i++){ //we already used 0 previously to initialize the starting node
        current -> next = malloc(sizeof(node)); //make space for the new node
        current = current -> next; //shift down the line
        current -> data = dataList[i]; //set the value
        current -> next = NULL; //end of the line
    }
    
    //Now we call the function printList, giving it the pointer start, so we can print from the beginning.
    printList(start);
    
    //We then call the function findValue, and print the result based on the output
    int indexOf = findValue(start, 77);
    if(indexOf == -1){
        printf("Value not found\n");
    }
    else{
        printf("Value found at index: %d\n", indexOf);
    }
    
    return 0;
}

/*
 This function takes in a pointer to a node structure
 And prints out all of the nodes that are behind it (next) in the list
 Ideally, one would pass as an argument the start of of the list, but any node in the list can be passed, and it will print the nodes after it.
 */
void printList(node *current){
    if(current != NULL){ //if the node being looked at is not null
        printf("%d\n", current->data); //print the data field
        printList(current->next); //call the function again, but with the pointer to the next node in the chain.
    }
}


/*
 This code seeks if there is a certain number in the linked list and returns the index of the number.
 This function takes as parameters the node in question and the number to be found
 This function returns either the count, or a -1 if the result is not found.
 */
int findValue(node *current, int key){
    int count = 0;
    while(current != NULL){ //as long as the pointer isn't null
        if(current -> data == key){ //if the data matches the key
            return count; //give the index where you found it
        }
        
        current = current -> next; //move on to the next node
        count++; //increment the index in order to return the right value
    }
    return -1; //if it's never found, return a -1
}



