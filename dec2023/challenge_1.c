// problem statement
// take an input and test whether it is an even or odd number
#include <stdio.h>

int main() {

int number ;
printf("Enter number value : ");
scanf("%d", &number);

int remainder = number % 2;
if (remainder == 0) { 
    printf("This number is a even number! \n\n");
} else {
    printf("This number is an odd number!\n\n");
}

return 0;
}