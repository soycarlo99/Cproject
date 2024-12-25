#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;
    int guessed;
    int lives = 5;

    printf("This is a guessing game!\n");
    printf("You need to choose a number between 0-20\n\n");

    while (lives > 0) {
        printf("You have %d live(s) left.\n", lives);
        printf("Please enter a number between 0-20: ");
        scanf("%d", &guessed);

        if (guessed == randomNumber) {
            printf("You guessed right!!!\n");
            return 0; // Exit the game after a correct guess
        } else if (guessed < randomNumber) {
            printf("Please enter a HIGHER number.\n");
        } else if (guessed > randomNumber) {
            printf("Please enter a LOWER number.\n");
        }

        // Decrease lives after an incorrect guess
        lives--;
    }

    // If the loop exits, it means the player ran out of lives
    printf("Sorry, you've run out of lives. The correct number was %d.\n", randomNumber);

    return 0;
}
