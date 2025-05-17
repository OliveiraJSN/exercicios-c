#include <stdio.h>
#include <string.h>

int main(){
    int n, i;

    printf("How many senteces do you wanna enter: ");
    scanf("%d", &n);
    getchar();

    char sentence[n][100];

    for(i = 0; i < n; i ++){
        printf("Write your %d sentence: ", i + 1);
        fgets(sentence[i], 100, stdin);
        sentence[i][strcspn(sentence[i], "\n")] = '\0';
    }

    FILE *file = fopen("multi_journal.txt", "a");

    if(file == NULL){
        printf("Error to open multi_journal.txt");
        return 1;
    }

    for(i = 0; i < n; i ++){
        fprintf(file,"%s \n", sentence[i]);
    }
    
    fclose(file);

    printf("\n--- The file was saved successfully! ---\n");
    printf("\n");

    file = fopen("multi_journal.txt", "r");

    char line[100];
    while(fgets(line, sizeof(line), file)){
        printf("- %s", line);
    }

    printf("\n");

    fclose(file);

    printf("--- The file was read successfully! ---");

    return 0;
}