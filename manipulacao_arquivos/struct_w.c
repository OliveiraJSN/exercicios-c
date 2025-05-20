#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float grade;
};

int main(){
    int n, i;

    printf("\nType how many students do you want to register: ");
    scanf("%d", &n);

    struct Student students[n];
    getchar();

    FILE *file = fopen("students.txt", "w");

    if(file == NULL){
        printf("Error to open students.txt!");
        return 1;
    }

    for(i = 0; i < n; i++){
        printf("\nType the student %d name: ", i + 1);
        scanf(" %49[^\n]", students[i].name);

        printf("Type the student %d grade: ", i + 1);
        scanf("%f", &students[i].grade);
        getchar();

        fprintf(file, "%s %.2f\n", students[i].name, students[i].grade);
    }

    fclose(file);
    printf("\n--- The file was saved successfully! ---\n");

    file = fopen("students.txt", "r");

    if(file == NULL){
        printf("Error to open students.txt!");
        return 1;
    }

    char line[100];
    printf("\n--- Reading students.txt ---\n");
    while(fgets(line, sizeof(line), file)){
        printf("- %s", line);
    }

    fclose(file);
    printf("\n--- The file was read successfully! ---\n");

    return 0;
}
