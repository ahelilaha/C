#include <stdio.h>
#include <stdbool.h>

int main() {

int number = 1231;

// printf("Enter any number : ");
// scanf("%d", &number);

int remainder;
int array[10];// static size array (array size never changes)
int position = 0;
while (number > 0)
{
    remainder = number % 10;
    number = number / 10;
    
    array[position] = remainder;
    position++;
}
// print array
printf("\n Printing array content: ");
for(int index = 0; index < 10; index++) {
  printf("%d ", array[index]);
}

int i = 0;
int j = (position - 1);
bool same = false;

while(i <= j){
  if (array[i] != array[j]){
    same = false;
    break;
  }else {
    i++;
    j--;
    same = true;
  }
}

if(same){
  printf("\n This number is a pallendrome number!");
} else {
  printf("\n This number is not a pallendrome number!");
}

    return 0;

}