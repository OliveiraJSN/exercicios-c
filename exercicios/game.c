#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int chosed;

    while(secret != chosed){
        printf("\nType a number to guess the secret number (1 to 100): ");
        scanf("%d", &chosed);
        if(chosed > 100 || chosed <= 0){
            printf("\nNot a valid number!");
        } else if(chosed > secret){
            printf("Too high!\n");
        } else if(chosed < secret){
            printf("Too low!\n");
        } else{
            printf("Congratulations you got it!\n");
            break;
        }
    }
    return 0;
}