#include <stdio.h>

int main() {

int number;

printf("Enter any number : ");
scanf("%d", &number);

int division = number;
int remainder;
int array[10];// static size array (array size never changes)
int position = 0;
for (;division > 0;)
{
    remainder = division % 10;
    division = division / 10;
    
    array[position] = remainder;
    position++;
}

// print the array
/*
While loop condition
position--;
while(position >= 0) {
    printf("%d ", array[position]);
    position--;
}
*/


for(position--;position >= 0;position--){
  printf("%d ", array[position]);
}


    return 0;
}