#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // number guessing game
    srand(time(0));

    int random_num = (rand() % 100) + 1;
    int no_of_guesses= 0;
    int guessingnum;

    do
    {
        printf("Guess the number");
        scanf("%d", &guessingnum);

        if (guessingnum > random_num)
        {
            printf("Please enter lower number\n");
        }
        else if (guessingnum < random_num)
        {
            printf("please enter high number\n");
        }
        else
        {
            printf("CONGRATS!!!YOU GUESSED RIGHT\n");
        }
        no_of_guesses++;
    } while (guessingnum != random_num);

    printf("You guessed number in %d guesses", no_of_guesses);

    return 0;
}