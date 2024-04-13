#include <stdio.h>
#include <stdbool.h>

int main() {
 
int number;
printf("Enter a number : ");
scanf("%d",&number);

int how_much;
int remainder;
bool isPrime = true;

for (how_much = 2; how_much < number; how_much++) {

    int remainder = number % how_much;
    if ( remainder == 0 ) {
     isPrime = false;
     break;
    }
} // end of for loop

if (isPrime){
 printf("%d number is a prime number", number);
} else {
 printf("%d number is not a prime number as %d divides it", number, how_much);
}

return 0;
}


