#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, numberOfGuesses = 0;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 10 + 1;  // Generates a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 10. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numberOfGuesses++;

        if (guess > number) {
            printf("Lower number please.\n");
        } else if (guess < number) {
            printf("Higher number please.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", numberOfGuesses);
        }
    } while (guess != number);

    return 0;
}
