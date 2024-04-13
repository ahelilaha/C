#include <stdio.h>

void printArray(double arr[], int size);
double findingMax(double arr[], int size);
double findingMin(double arr[], int size);
double sum(double arr[], int size);
double average(double arr[], int size);

// Main part in the coding
int main () {

double arr[10];
int count = 10;

for(int index = 0; index < count; index++){
    double aNumber;
    printf("Enter double/point values!");
    printf("Enter %dth number : ", index);
    scanf("%lf", &aNumber);
    arr[index] = aNumber;
}

printArray(arr, count);
printf("\nMax element: %lf \n", findingMax(arr, count));
printf("Min element: %lf\n", findingMin(arr, count));
printf("The sum : %lf", sum);
printf("Average : %lf", average);

return 0;
}
// Finding the sum \/
double sum(double arr[], int size){
    double sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i]; 
    }
    print("Sum = %lf", sum);
    return sum;
} 

// printing the array numbers\/
void printArray(double arr[], int size) {
    for(int index = 0; index < size; index++){
        printf("%0.2lf ",arr[index] );
    }
}

// Code to find the max within array\/
double findingMax(double arr[], int size) {
    double max = arr[0];
    
    for(int go = 0; go < size; go++){
        double value = arr[go];

        if(value > max){
            max = value;
        }
    }

    return max;
}

// Code to find the min within array\/
double findingMin(double arr[], int size) {
      double min = arr[0];
    
    for(int go = 0; go < size; go++){
        double value = arr[go];

        if(value < min){
            min = value;
        }
    }

    return min;
}
// Finding the average\/
double average(double arr[], int size) {
    double total = sum(arr,size);
    double average = total/size;
    printf("Average : %lf", average);
    return average;
}