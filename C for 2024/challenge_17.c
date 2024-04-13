#include <stdio.h>

void swap(int *ptr_a, int *ptr_b) {
    int c = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = c;
    printf("\n inside swap --> after swap a = %d", *ptr_a);
    printf("\n inside swap --> after swap b = %d", *ptr_b);
}

int main() {
    int a = 5;
    int b = 10;
    printf("\nbefore swap a = %d", a);
    printf("\nbefore swap b = %d", b);

    swap(&a,&b); // pass the address of those variable
    printf("\n inside main --> after swap a = %d", a);
    printf("\n inside main --> after swap b = %d", b);
    printf("\n");

    return 0;
}