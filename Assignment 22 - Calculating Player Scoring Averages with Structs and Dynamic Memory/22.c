/*
    Assignment 22:
    The goal here is to create a program that takes input for five player's point totals and games played totals and then calculates the scoring averages for each player. 
    Create a struct with members for total points and games played. 
    Create an array of structures that is five elements deep (one for each player) and loop through the array filling it with the point totals and games played totals for each player.

    You can declare an int counter variable and use it to iterate through the array for both points and games.
    output e.g.:
        tokyo:~/LearningC/ # ./assignment22                                          
        Enter Player 1's point total: 44
        Enter Player 1's game total: 5
        Enter Player 2's point total: 21
        Enter Player 2's game total: 5
        Enter Player 3's point total: 33
        Enter Player 3's game total: 5
        Enter Player 4's point total: 67
        Enter Player 4's game total: 5
        Enter Player 5's point total: 8
        Enter Player 5's game total: 5
        Player 1's scoring average was 8.80 ppg.
        Player 2's scoring average was 4.20 ppg.
        Player 3's scoring average was 6.60 ppg.
        Player 4's scoring average was 13.40 ppg.
        Player 5's scoring average was 1.60 ppg.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int pointsPerPlayer;    // 4 bytes
    int gamePerPlayer;      // 4 bytes
} access;

int main()
{
    access *_player = malloc(sizeof(access) * 5);
    /*
        __player[0] - playerOne
        __player[1] - playerTwo
        __player[2] - playerThree
        __player[3] - playerFour
        __player[4] - playerFive
    */

    if(_player == NULL)
        return -1;
    
    for(int y = 0; y < 5; ++y)
    {
        printf("Enter Player %d's point total: ", (y + 1));
        scanf("%d", &_player[y].pointsPerPlayer);
        printf("Enter Player %d's game total: ", (y + 1));
        scanf("%d", &_player[y].gamePerPlayer);
    }
    for(int i = 0; i < 5; ++i)
    {
        float countAverage = _player[i].pointsPerPlayer / (float)_player[i].gamePerPlayer;
        printf("Player %d's scoring average was: %.2f ppg.\n", (i + 1), countAverage);
    }
    free(_player);
    return 0;
}