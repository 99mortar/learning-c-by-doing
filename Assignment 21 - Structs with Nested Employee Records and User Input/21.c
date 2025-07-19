/*
    Assignment 21:
    - Design a struct which will have members that describe an employee's:
        - first name.
        - last name.
        - employee ID number.
        - last 4 digits of their SSN
        - title
    - Design a second struct which will store two employees as members. 
    - The employees will be structures of the type of your first struct. 
    - Inside of main(), prompt the user to enter each employee's credentials and store them. 
    - Finally, print the employee's credentials to the terminal.


*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char firstName[20];
    char lastName[20];
    int idNum;
    int lastSSNDigits;
    char title[20];
} userData;

typedef struct
{
    userData firstEmployee;
    userData secondEmployee;
} employees;

void readEmployee(userData *__emp) 
{
    while(0x1) 
    {
        printf("Enter the employee's first name: ");
        scanf("%s", __emp->firstName);

        printf("Enter the employee's last name: ");
        scanf("%s", __emp->lastName);

        printf("Enter the employee's ID number: ");
        scanf("%d", &__emp->idNum);

        printf("Enter the last four digits of the employee's SSN: ");
        scanf("%d", &__emp->lastSSNDigits);

        if (__emp->lastSSNDigits < 0 || __emp->lastSSNDigits > 9999) 
        {
            puts("Invalid SSN. Let's start over again.");
            continue;
        }

        printf("Enter the employee's job title (don't include the word 'Engineer'): ");
        scanf("%s", __emp->title);

        if (strcmp(__emp->title, "Engineer") == 0 ||
            strcmp(__emp->title, "engineer") == 0) 
        {
            puts("Invalid title. Let's start over again.");
            continue;
        }

        break;
    }
}

void printEmployee(const userData *_emp)
{
        printf("\nEmployee information for %s %s",
                _emp->firstName, 
                _emp->lastName);
        printf("\nID: %d",
                _emp->idNum);
        printf("\nSSN: %d", 
                _emp->lastSSNDigits);
        printf("\nTitle: %s Engineer\n", 
                _emp->title);
}

int main()
{
    employees getInformations;

    readEmployee(&getInformations.firstEmployee); // Registering employee 1.
    readEmployee(&getInformations.secondEmployee); // Registering employee 2.

    printEmployee(&getInformations.firstEmployee); // Printing their informations. (Employee 1)
    printEmployee(&getInformations.secondEmployee); // Printing their informations. (Employee 2)

    return 0;
}