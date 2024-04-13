#include <stdio.h>

int main() {

int number[5] = {1, 3, 5, 7, 9};

for(int i = 0; i < 5; i++){
    printf("%d = %p\n", number[i], &number[i]);
}

printf("Array Address: %p\n", number);


return 0;
}