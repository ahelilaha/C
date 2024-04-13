#include <stdio.h>

int main() {

int sum;
int average;
int max;
int min;
int count = 5;
int results[5] = {91,89,95,65,35};

int iterate;
max = results[0];
min = results[0];
sum = 0;

for (iterate = 0; iterate < count; iterate++) {
  
  int value = results[iterate];
  printf("%d ", value);
  
  // logic for 'sum'
  sum = sum + value;

  // logic for 'max'
  if(value > max){
    max = value;
  }
  
  // logic for 'min'
  if (value < min){
    min = value;
  }
}

average = sum/count;
printf("\naverage = %d\n", average);
printf("\nmax = %d\n", max);
printf("\nmin = %d\n", min);

return 0;
}