#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int chosed;
    int attempts = 0;
    int dificulty;
    char player[50];
    int attempts_used = 0;
    char result[10];

    printf("--- GUESSING GAME ----\n");
    printf("Type your name: ");
    scanf(" %49[^\n]", player);
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
            printf("You chose Easy - you have 10 attempts!\n");
            break;
        case 2:
            attempts = 7;
            printf("You chose Medium - you have 7 attempts!\n");
            break;
        case 3:
            attempts = 5;
            printf("You chose Hard - you have 5 attempts!\n");
            break;
        case 4:
            attempts = 3;
            printf("You chose Very Hard - you have 3 attempts!\n");
            break;
        case 5:
            attempts = 1;
            printf("You chose Impossible - you have 1 attempt!\n");
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

        attempts--;
        attempts_used++;

        if(chosed > secret){
            printf("Too high!\n");
        } else if(chosed < secret){
            printf("Too low!\n");
        } else {
            strcpy(result, "won");
            printf("Congratulations, you got it!\n");
            break;
        }


        
        printf("You have %d attempt(s) left.\n", attempts);
    }
    
    if(attempts == 0){
        strcpy(result, "lost");
        printf("\nYou ran out of attempts! Game over.\n");
        printf("The secret number was: %d\n", secret);
    }
    
    FILE *f = fopen("results.txt", "a");
    
    if(f == NULL){
        printf("Error to open results.txt!");
        return 1;
    }
    
    fprintf(f, "%s | Level: %d | %s | Attempts used: %d |\n", player, dificulty, result, attempts_used);
    
    fclose(f);
    
    FILE *fview = fopen("results.txt", "r");

    if (fview == NULL) {
        printf("Error opening results.txt for reading!\n");
        return 1;
    }
    
    char name[50];
    int level;
    char history_result[10];
    int history_attempts;
        
    printf("\n--- Game History ---\n");
    
    while (fscanf(fview, " %49[^|]| Level: %d | %9s | Attempts used: %d |", name, &level, history_result, &history_attempts) == 4) {
    printf("Player: %s | Level: %d | Result: %s | Attempts: %d\n", name, level, history_result, history_attempts);
    }

    fclose(fview);
    
    return 0;
}