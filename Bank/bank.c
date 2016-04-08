/*
 John Fulgoni
 Summer Session 2015, Structures
 This code mimics the actions of a bank
 and lets users perform various actions
 for their bank account
 */


#include <stdio.h>
#include <string.h>
#define NAME_SIZE 20
//I define NAME_SIZE to be 20, so that later when I make my structures, I can set a limit on how big a name should be

enum account_type {CHECKING, SAVINGS, CREDIT};
//this is an example of enum
//if I want three types of accounts, then I can program it as such
//I can then use this in my code instead of typing out constants, or having the user memorize different input values

struct bank_account{
    //put whatever may go into an account right here
    //think about what a typical bank account might have
    //as part of their process
    
    /*
     In my code, I put:
     accountID - which is a long int
     firstName - string representing first name
     lastName - string representing last name
     balance - float representing the balance
     atype - represents the account type in enum
     */
    long int accountID;
    char firstName[NAME_SIZE];
    char lastName[NAME_SIZE];
    float balance;
    enum account_type atype; //remember that you have to put 'enum' in front of account type;
    
};//<-- note the semicolon right here
typedef struct bank_account account;
//I then use typedef to rename the structure
//to something easier to type

//function prototypes
void printAccount(account);
void printAccountType(account);
int findUserAccount(account[], long int, int);

int main(){
    
    printf("Welcome to the John National Bank!\n");
    printf("How may we help you today?\n");
    
    //start with one bank account
    struct bank_account john1;
    //can also be represented as:
    account john2;//these are two different variables
    
    //here is where I'm going to initialize accounts in my set
    account bob;
    //now that bob is declared, I'm going to initialize all of the fields that belong to bob.
    bob.accountID = 193829;
    strcpy(bob.firstName, "Robert");
    strcpy(bob.lastName, "Griffin");
    bob.balance = 1000.50;
    bob.atype = CHECKING;
    
    //here is where I print out the account for bob
    //this function prints out all of the information for an account
    //printAccount(bob);
    
    //ultimately have an array of bank accounts
    //and let the user choose their own to use
    
    //here I declare my array of accounts
    account accountList[10];
    //this array holds up to 10 accounts
    
    //now I create my first account in the array
    accountList[0].accountID = 928928;
    strcpy(accountList[0].firstName, "Sophia");
    strcpy(accountList[0].lastName, "Mueller");
    accountList[0].balance = 59000.50;
    accountList[0].atype = SAVINGS;
    
    //we can also do this
    accountList[1] = bob;
    //which sets the account information at index 1 equal to all of the values of bob
    
    //here I create the third account in my array
    accountList[2].accountID = 521525;
    strcpy(accountList[2].firstName, "Nathan");
    strcpy(accountList[2].lastName, "Goldstone");
    accountList[2].balance = 3569.49;
    accountList[2].atype = CREDIT;
    
    //now here is where we choose which account we want to read
    printf("Please enter your account number.\n");
    long int userAccount;
    scanf(" %ld", &userAccount);
    //we pass in the accountList, the account number entered
    //and the count, because if we pass an array, we can't do
    //the size since it's just a pointer being passed
    int chosen = findUserAccount(accountList, userAccount, sizeof(accountList)/sizeof(account));
    
    //once an account is chosen (or there's just one), let the user choose what they want to do
    //printf("%d\n", chosen);
    if(chosen == -1){
        printf("Account Number Not Found\n");
    }
    else{
        printAccount(accountList[chosen]);
    }
    
    //now we let the user choose what we want them to do
    char withdraw;
    //if the account is not a credit card account, give them 2 options
    if(accountList[chosen].atype != CREDIT){
        printf("Press '1' to make a withdrawal.\nPress '2' to make a deposit.\nPress any other key to quit.\n");
    }
    //if the account is a credit card, then only give them 1 option
    else{
        printf("Press 1 to pay amount on your CREDIT CARD.\nPress any other key to quit.\n");
    }
    //now we read in the choice that the user types in
    scanf(" %c", &withdraw);
    
    /*
     Here is where we act on the user's decision
     If the choice is to deposit (2), and the account isn't a credit card
     Then we can deposit money (add) into the account
     If the choice is to withdraw, then we take away funds from the account
     Anything else, we print, please try again
     */
    if(withdraw == '2' && accountList[chosen].atype != CREDIT){
        //here we want to deposit money
        printf("How much do you want to deposit?\n");
        float amount;
        //ask the user how much
        scanf("%f", &amount);
        //set the account balance equal to the current balance plus the desired amount
        accountList[chosen].balance = accountList[chosen].balance + amount;
        printf("Your new account balance is $%.2f\n", accountList[chosen].balance);
    }
    else if(withdraw == '1'){
        //here we want to withdraw money
        if(accountList[chosen].atype != CREDIT){
            //if it's not a credit card, print this
            printf("How much do you want to withdraw?\n");
        }
        else{
            //if it is a credit card, print this instead
            printf("How much do you want to pay off?\n");
        }
        float amount;
        //ask the user how much
        scanf("%f", &amount);
        //set the account balance equal to the current balance minus the desired amount
        accountList[chosen].balance = accountList[chosen].balance - amount;
        printf("Your new account balance is $%.2f\n", accountList[chosen].balance);
    }
    
    printf("Thank You for banking with John National Bank. Have a good day!\n");
    
    return 0;
}//end main

/*
 This function prints out all of the information
 associated with the account
 This includes the account number, call to account type,
 first name, last name, and balance
 */

void printAccount(account acc){
    printf("Account Number: %ld\n", acc.accountID);
    printAccountType(acc); //call to printAccountType function
    printf("%s, %s is $%.2f\n", acc.lastName, acc.firstName, acc.balance);
}

/*
 The function below prints the account type based on
 the enum value of the account
 This is used in conjunction with the printAccount method
 */
void printAccountType(account acc){
    switch(acc.atype){
        case (CHECKING):
            printf("The Checking Account balance for ");
            break;
        case (SAVINGS):
            printf("The Savings Account balance for ");
            break;
        case (CREDIT):
            printf("The Credit Card balance for ");
            break;
        default:
            printf("Unknown Account Type balance for ");
            break;
    }
}//end accountToString

/*
 This function takes in the array of structs as an input
 and returns the integer index of where the struct holding that
 particular accountID takes place.
 If it doesn't find one, then it returns -1
 */
int findUserAccount(account acc[], long int accountNumber, int count){
    //note that acc[] is a pointer to the array
    //not the pointer itself
    
    //printf("count = %d\n", count);
    
    int index = -1; //the index to be returned
    
    int i;
    //for each account in the list of accounts
    //check if the accountID matches what the user entered
    //if so, return the index at that position (i)
    for(i = 0; i < count; i++){
        //if accountID for the account at position i
        //matches the accountNumber given
        if(acc[i].accountID == accountNumber){
            index = i;
        }
    }
    
    return index;
}//end find user account
