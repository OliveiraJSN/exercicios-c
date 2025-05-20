#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;

    printf("%d\n", a);
    printf("%p\n", (void *)&a);
    printf("%p\n", (void *)p);
    printf("%d\n", *p);

    return 0;
}