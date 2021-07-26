#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); 
    return rand() % n;
}

int main()
{
    char name[30];
    int n = 0, num, computer, ps = 0, cs = 0;
    printf("Rock, Paper & Scissors Game\n");
    printf("Enter Player Name\n");
    scanf("%s", &name);

    while (n < 3)
    {
        printf("%s's Turn:\n", name);
        printf("Please Choose your Chice:\n\t0 for Rock\n\t1 For Paper\n\t2 For Scissors\n");
        scanf("%d", &num);
        printf("You Choose %d\n", num);
        printf("Computer's Turn:\n");
        computer = generateRandomNumber(3);
        printf("Computer Choose %d\n", computer);
        if (num == computer)
        {
            printf("It's An Tie!\n");
            cs = cs + 1;
            ps = ps + 1;
        }
        else if (num == 0 && computer == 1)
        {
            printf("Computer Won\n");
            cs = cs + 1;
        }
        else if (num == 0 && computer == 2)
        {
            printf("You Won\n");
            ps = ps + 1;
        }
        else if (num == 1 && computer == 0)
        {
            printf("You Won\n");
            ps = ps + 1;
        }

        else if (num == 1 && computer == 2)
        {
            printf("Computer Won\n");
            cs = cs + 1;
        }

        else if (num == 2 && computer == 0)
        {
            printf("Computer Won\n");
            cs = cs + 1;
        }
        else if (num == 2 && computer == 1)
        {
            printf("You Won\n");
            ps = ps + 1;
        }
        else
        {
            printf("Invalid Input pllease Enter 0 to 2\n");
        }

        n++;
    }
    if (cs == ps)
    {
        printf("It's an Tie game!\n");
        printf("%s's Score is %d\n", name, ps);
        printf("Computer's Score is %d\n", cs);
    }
    else if (cs > ps)
    {

        printf("Computer Won the game!\n");
        printf("%s's Score is %d\n", name, ps);
        printf("Computer's Score is %d\n", cs);
    }

    else
    {

        printf("%s Won the game!\n", name);
        printf("%s's Score is %d\n", name, ps);
        printf("Computer's Score is %d\n", cs);
    }

    return 0;
}