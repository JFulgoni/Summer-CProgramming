/*
 John Fulgoni
 Test Code
 Use for whatever purpose
 */
#include <stdio.h>
#include <string.h>

enum level {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

//here is where I define my structure
struct student{
    int height;
    float gpa;
    long int phone;
    char firstName[30];
    char lastName[30];
    long int uni;
    enum level myLevel;
}; //note the semicolon next to the brace
typedef struct student aStudent;

//remember to declare your function at the top
void printStudent(struct student);

int main(){
    
    struct student myStudent; //declared my student
    strcpy(myStudent.firstName, "Arul");
    strcpy(myStudent.lastName, "Kapoor");
    myStudent.phone = 5559110291;
    myStudent.gpa = 4.1;
    myStudent.height = 65;
    myStudent.uni = 1239832;
    myStudent.myLevel = FRESHMAN;
    
    struct student john;
    strcpy(john.firstName, "Jonah");
    strcpy(john.lastName, "Hill");
    john.phone = 12381237129;
    john.uni = 3493283;
    john.height = 70;
    john.gpa = 2.92;
    
    printStudent(myStudent);
    printStudent(john);
    
    aStudent jessica;
    jessica.gpa = 3.4;
    
    return 0;
} //end main

void printStudent(struct student myStudent){
    printf("Student ID: %ld\n", myStudent.uni);
    printf("Name: %s, %s\n",myStudent.lastName, myStudent.firstName);
    printf("Phone Number: %ld\n", myStudent.phone);
    printf("GPA: %.2f\n", myStudent.gpa);
    printf("Height: %d\n", myStudent.height);
    
    switch(myStudent.myLevel){
        case FRESHMAN:
            printf("Grade: Freshman\n");
            break;
        case SOPHOMORE:
            printf("Grade: Sophomore\n");
            break;
        case JUNIOR:
            printf("Grade: Junior\n");
            break;
        case SENIOR:
            printf("Grade: Senior\n");
            break;
        default:
            printf("Grade: Unknown\n");
            break;
    }
    
        printf("\n");
}//end method









