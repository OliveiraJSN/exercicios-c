#include <stdio.h>

void printArray(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int sumArray(int v[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    return sum;
}

int findMax(int v[], int n){
    int max = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int main(){
    int v[5] = {3, 8, 1, 4, 6};

    printArray(v, 5);
    printf("Sum: %d\n", sumArray(v, 5));
    printf("Max: %d\n", findMax(v, 5));

    return 0;
}
