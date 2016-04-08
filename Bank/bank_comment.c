/*
 John Fulgoni
 Summer Session 2015, Structures
 This code mimics the actions of a bank
 and lets users perform various actions
 for their bank account
 */

#include <stdio.h>

enum account_type {CHECKING, SAVINGS, CREDIT};
//this is an example of enum
//if I want three types of accounts, then I can program it as such
//I can then use this in my code instead of typing out constants, or having the user memorize different input values

struct account{
    //put whatever may go into an account right here
    //think about what a typical bank account might have
    //as part of their process
    enum account_type atype;
    
};//<-- note the semicolon right here
typedef struct account bank_account;
//I then use typedef to rename the structure
//to something easier to type

int main(){
    
    printf("Welcome to the John National Bank!\n");
    printf("How may we help you today?\n");
    
    //start with one bank account
    struct account john1;
    //can also be represented as:
    bank_account john2;
    
    john2.atype = CHECKING;
    
    //ultimately have an array of bank accounts
    //and let the user choose their own to use
    
    //once an account is chosen (or there's just one), let the user choose what they want to do

	return 0;
}//end main


/*
 have different functions for view balance, withdraw, deposit, etc.
 you can be as creative as you want to be!
*/