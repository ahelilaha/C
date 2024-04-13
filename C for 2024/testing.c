#include <stdio.h>

int main() {
    
    int a = 5;
    int b = 10;

    printf("A is located at %p\n", &a);
    printf("B is located at %p\n", &b);

    int *ptr_a = &a;
    int *ptr_b = &b;
    printf("A is located at %p\n", ptr_a);
    printf("B is located at %p\n", ptr_b);
    printf("Ptr_a is located at %p\n", &ptr_a);
    printf("Ptr_b is located at %p\n", &ptr_b);

    printf("value containing the place where Ptr_b is pointing %d\n", *ptr_b);

    return 0;
}