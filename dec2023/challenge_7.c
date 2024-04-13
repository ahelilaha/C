#include <stdio.h>
#include <stdbool.h>

int main() {

int age;

printf("Enter your age : ");
scanf("%d", &age);

if(age > 10){
    printf("\nYou get 10 chocolates! \n");
}else {
    printf("\nYou get only 5 chocolates!\n");
}


    return 0;
}