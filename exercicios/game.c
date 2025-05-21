#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int chosed;
    int attempts = 0;
    int dificulty;

    printf("--- GUESSING GAME ----\n");
    printf("\nChoose a difficulty!\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("4. Very Hard\n");
    printf("5. Impossible\n\n");
    scanf("%d", &dificulty);

    switch(dificulty){
        case 1:
            attempts = 10;
            printf("You chose Easy you have 10 attempts!\n");
            break;
        case 2:
            attempts = 7;
            printf("You chose Medium you have 7 attempts!\n");
            break;
        case 3:
            attempts = 5;
            printf("You chose Hard you have 5 attempts!\n");
            break;
        case 4:
            attempts = 3;
            printf("You chose Very Hard you have 3 attempts!\n");
            break;
        case 5:
            attempts = 1;
            printf("You chose Impossible you have 1 attempt!\n");
            break;
        default:
            printf("You chose an invalid number!\n");
            return 1;
    }

    while(attempts > 0){
        printf("\nTry to guess the secret number (1 to 100): ");
        scanf("%d", &chosed);

        if(chosed < 1 || chosed > 100){
            printf("Invalid number. Must be between 1 and 100.\n");
            continue;
        }

        if(chosed > secret){
            printf("Too high!\n");
        } else if(chosed < secret){
            printf("Too low!\n");
        } else {
            printf("Congratulations, you got it!\n");
            return 0;
        }

        attempts--;
        printf("You have %d attempt(s) left.\n", attempts);
    }

    printf("\nYou ran out of attempts! Game over.\n");
    printf("The secret number was: %d\n", secret);

    return 0;
}
