 // Make a two digit calculator
#include <stdio.h>

int main() {

int digit_1;
int digit_2;
char operation;
printf("Choose digit 1 = ");
scanf("%d", &digit_1);

printf("Choose digit 2 = ");
scanf("%d", &digit_2);

printf("Choose the operation = ");
scanf(" %c", &operation);

int answer;

if (operation == '+') {
    answer = digit_1 + digit_2;
    printf("answer = %d \n",answer);

} else if (operation == '-') {
    answer = digit_1 - digit_2;
    printf("answer = %d \n",answer);

} else if (operation == '*') {
    answer = digit_1 * digit_2;
    printf("answer = %d \n",answer);

} else if (operation == '/') {
    answer = digit_1 / digit_2;
    printf("answer = %d \n",answer);

} else {
    printf("hey, you gave a wrong operator!!!!!\n");
}
    return 0;
}