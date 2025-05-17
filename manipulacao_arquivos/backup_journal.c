#include <stdio.h>
#include <string.h>

int main(){
    
    FILE *source = fopen("multi_journal.txt", "r");
    if(source == NULL){
        printf("Error to open multi_journal.txt\n");
        return 1;
    }

    FILE *destination = fopen("backup_journal.txt", "w");
    if(destination == NULL){
        printf("Error to open backup_journal.txt\n");
        fclose(source);
        return 1;
    }

    char line[100];
    while(fgets(line, sizeof(line), source)){
        printf("- %s", line);
        fprintf(destination, "- %s", line);
    }

    fclose(source);
    fclose(destination);

    printf("\nBackup completed successfully!\n");

    return 0;
}
