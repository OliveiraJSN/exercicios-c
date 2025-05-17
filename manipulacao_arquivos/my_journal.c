#include <stdio.h>
#include <string.h>

int main(){
    char answer;
    char sentence[80];

    printf("Do you want to add a new journal entry? (y/n): ");
    scanf("%c", &answer);
    getchar();

    if(answer == 'y'){
        printf("Write your short sentence: ");
        fgets(sentence, 80, stdin);
        sentence[strcspn(sentence, "\n")] = '\0';
    } else{
        return 1;
    }

    FILE *file = fopen("journal.txt", "a");

    if(file == NULL){
        printf("Error opening the file for append!\n");
        return 1;
    }

    fprintf(file,"%s", sentence);

    fclose(file);

    printf("\n --- Entry salved to journal.txt --- \n");

    printf("\n --- Journal entries --- \n");

    file = fopen("journal.txt", "r");

    if(file == NULL){
        printf("Error opening the file for reading!\n");
        return 1;
    }

    char line[100];
    while(fgets(line, sizeof(line), file));{
        printf("- %s", line);
    }

    return 0;
}