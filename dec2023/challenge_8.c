#include <stdio.h>

int main() {

double input;

printf("Enter a number : ");
scanf("%lf", &input);

int num = (int)input;

printf("\n%lf turn into %d\n", input, num);
return 0;
}