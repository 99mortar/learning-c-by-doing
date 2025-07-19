/*

Assignment 5
    Prompt the user for a number of seconds. Take the user's input and convert the number of seconds into its duration in Hours, Minutes, and remaining Seconds.
    Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.

*/

#include <stdio.h>

#define SECONDS_PER_HOUR   3600
#define SECONDS_PER_MINUTE 60

int main()
{
    int getUserSeconds = 0;

    printf("Enter the amount of seconds.\n");
    scanf("%d", &getUserSeconds);

    int secondStorage = 0;
    int minuteStorage = 0;
    int hourStorage = 0;

    int restMinutes = 0;

    hourStorage = getUserSeconds / SECONDS_PER_HOUR;
    restMinutes = getUserSeconds % SECONDS_PER_HOUR;

    minuteStorage = restMinutes / SECONDS_PER_MINUTE;
    secondStorage = restMinutes % SECONDS_PER_MINUTE;

    printf("%d equals to: %d Hour(s) - %d Minute(s) - %d Second(s)\n",
           getUserSeconds, hourStorage, minuteStorage, secondStorage);

    return 0;
}
