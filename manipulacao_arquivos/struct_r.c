#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float grade;
};

int main(){
    FILE *file = fopen("students.txt", "r");

    if(file == NULL){
        printf("Error to open students.txt!\n");
        return 1;
    }

    struct Student students[100];
    int count = 0;

    while (fscanf(file, "%49s %f", students[count].name, &students[count].grade) == 2) {
        count++;
    }

    fclose(file);

    printf("\n--- Students loaded from file ---\n");
    for(int i = 0; i < count; i++){
        printf("Name: %s | Grade: %.2f\n", students[i].name, students[i].grade);
    }

    return 0;
}
