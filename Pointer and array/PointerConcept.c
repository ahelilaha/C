#include <stdio.h>

int main() {
    int a = 10;
    int *b = &a; // b contains address of a
    printf("\na = %d \n", a);
    printf("b = %p\n", b);
    printf("address of a = %p\n", &a);
    printf("address of b = %p\n", &b);
    printf("*b = %d\n", *b);

    return 0;
}