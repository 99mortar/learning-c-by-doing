/*

Assignment 11
    Ask the user for test scores and then keep asking the user if they would like to continue or end the program. Store all test score values and calculate an average score that prints to the terminal when the user ends the program. You can initialize your array size as 10 and let's use a max test score count of 8 for this.
    Print the average of the test scores to the second decimal place.
    Hint: Look up while and for loops. Look up the strcmp() function.

    Output:
    tokyo:~/LearningC/ # ./assignment11                                 
    Enter a test score: 97
    Would you like to continue? Y/N Y
    Enter a test score: 86
    Would you like to continue? Y/N Y
    Enter a test score: 82
    Would you like to continue? Y/N Y
    Enter a test score: 91
    Would you like to continue? Y/N Y
    Enter a test score: 66
    Would you like to continue? Y/N Y
    Enter a test score: 99
    Would you like to continue? Y/N N
    86.83 is the average.

*/

#include <stdio.h>

int main()
{
    int 
        storageScore[10] = {0}, 
        finalSum = 0,
        countTimes = 0
    ;
    char getUserAnswer = {0};

    do
    {
        printf("Enter a test score: ");
        scanf("%d", &storageScore[countTimes]);

        finalSum += storageScore[countTimes];
        countTimes++;

        if(countTimes >= 8)
            break;
        
        printf("Would you like to continue? Y/N : ");
        scanf(" %c", &getUserAnswer);

        if (getUserAnswer == 'N' || getUserAnswer == 'n')
            break;

    }
    while(1);

    float avg = (float)finalSum / countTimes;
    printf("Your average is: %.2f", avg);
    return 0;
}