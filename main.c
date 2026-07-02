#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number: 0, 1, or 2
    int player, computer = rand() % 3;
    printf("Enter 0 for rock,1 for paper,2 for scissor:\n");
    scanf("%d", &player);
    switch (player)
    {
    case 0:
        printf("Player:Rock\n");
        break;
    case 1:
        printf("Player:Paper\n");
        break;
    case 2:
        printf("Player:Scissor\n");
        break;
    
    default:
    printf("Invalid input please enter valid one\n");
    
        break;
    }
    switch (computer)
    {
    case 0:
        printf("Computer:Rock\n");
        break;
    case 1:
        printf("Computer:Paper\n");
        break;
    case 2:
        printf("Computer:Scissor\n");
        break;
    }

    if(player==computer){
        printf("It's a draw!\n");
    }
    else if(player==0 && computer==1){
        printf("You lose :(\n");
    }
    else if(player==0 && computer==2){
        printf("You Win :)\n");
    }
    else if(player==1 && computer==0){
        printf("You Win :)\n");
    }
    else if(player==1 && computer==2){
        printf("You lose :(\n");
    }
    else if(player==2 && computer==0){
        printf("You Lose :(\n");
    }
    else if(player==2 && computer==1){
        printf("You Win :)\n");
    }
    return 0;
}