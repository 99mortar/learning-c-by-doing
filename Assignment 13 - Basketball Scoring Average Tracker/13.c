/*

Assignment 13
    Create a program that prompts the user to input scoring totals for 5 players during 4 basketball games. 
    The program will track which player had the highest scoring average over the 4 games and print the result to the terminal.
    Hint: Use a two-dimensional array and nested for loops.
    The outer-most for loop will iterate on a per game basis gathering scores for the inner-most for loop interating through players. 
    Use this same model to create arrays to store total scores and to calculate averages.

    tokyo:~/LearningC/ # ./assignment13                                          
    Game #1
    Enter scoring total for Player #1: 11
    Enter scoring total for Player #2: 14
    Enter scoring total for Player #3: 13
    Enter scoring total for Player #4: 18
    Enter scoring total for Player #5: 22
    Game #2
    Enter scoring total for Player #1: 22
    Enter scoring total for Player #2: 24
    Enter scoring total for Player #3: 8
    Enter scoring total for Player #4: 17
    Enter scoring total for Player #5: 11
    Game #3
    Enter scoring total for Player #1: 9
    Enter scoring total for Player #2: 21
    Enter scoring total for Player #3: 14
    Enter scoring total for Player #4: 17
    Enter scoring total for Player #5: 22
    Game #4
    Enter scoring total for Player #1: 18
    Enter scoring total for Player #2: 15
    Enter scoring total for Player #3: 17
    Enter scoring total for Player #4: 21
    Enter scoring total for Player #5: 24
    Player #5 had the highest scoring average at 19.00 points per game.

*/


#include <stdio.h>

struct __getInfo 
{
    int numberOfMatch[4];
    /* 
        0 - firstMatch
        1 - secondMatch
        2 - thirdMatch
        4 - fourthMatch
    */
};

int main()
{
    struct __getInfo __gPlayers[5];
    /*
        __gPlayers[0] - playerOne
        __gPlayers[1] - playerTwo
        __gPlayers[2] - playerThree
        __gPlayers[3] - playerFour
        __gPlayers[4] - playerFive
    */

    int totalScores[5] = {0};
    float averageScores[5] = {0};
    int highestPlayerIndex = 0;

    for(int game = 0; game < 4; ++game)
    {
        printf("Game #%d\n", game + 1);
        for(int player = 0; player < 5; ++player)
        {
            printf("Enter scoring total for Player #%d: ", player + 1);
            scanf("%d", &__gPlayers[player].numberOfMatch[game]);
        }
    }
    for(int player = 0; player < 5; ++player)
    {
        for(int game = 0; game < 4; ++game)
        {
            totalScores[player] += __gPlayers[player].numberOfMatch[game];
        }
        averageScores[player] = totalScores[player] / 4.0f;
    }
    for(int i = 1; i < 5; ++i)
    {
        if(averageScores[i] > averageScores[highestPlayerIndex])
        {
            highestPlayerIndex = i;
        }
    }
    printf("Player #%d had the highest scoring average at %.2f points per game.\n",
        highestPlayerIndex + 1, averageScores[highestPlayerIndex]);
    return 0;
}