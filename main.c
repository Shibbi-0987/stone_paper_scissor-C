#include <stdio.h>

int main()
{
    int yourchoice, computerChoice;
    int randomNumber, rem = 0, y = 0, c = 0;
    int arr[3] = {1, 2, 3};

     printf("--------------Welcome to our childhood games-----------------\n");
    printf("-------------------------------------------------------------------\n");
    printf("Hey guys let's start the game..\n");

    printf("--------Options----------");
    printf("\n1.stone\n2.paper\n3.scissor\n\n");

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter your choice:");
        scanf("%d", &yourchoice);

        printf("Enter a random number between 850 to 899 to get random mumber = ");
        scanf("%d", &computerChoice);

        rem = computerChoice % 3;
        randomNumber = arr[rem];

        printf("ComputerChoice= %d\n", randomNumber);

        switch (randomNumber)
        {
        case 1:
            computerChoice = 1;
            break;
        case 2:
            computerChoice = 2;
            break;
        case 3:
            computerChoice = 3;
            break;
        default:
            printf("invalidchoice !!");
        }

        if (yourchoice == computerChoice)
        {
            printf("Match draw!!!.... Its time to play agains\n\n");
        }
        else if ((yourchoice == 1 && computerChoice == 3) || (yourchoice == 2 && computerChoice == 1) || (yourchoice == 3 && computerChoice == 2))
        {
            printf("Congratulation you win!\n\n");
            y++;
        }
        else
        {
            printf("you lost!!... Better luck next time\n\n");
            c++;
        }
    }

    if (y > c)
    {
        printf("you won the series of match");
    }
    else
    {
        printf("Computer won the series of match");
    }
    return 0;
}
