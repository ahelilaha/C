#include <stdio.h>
#include <stdbool.h>

int main() {

int number;
printf("Enter a cost : $ ");
scanf("%d",&number);

double percent;
double sub = number;
bool discountApplied = false;

if(number > 100){
    printf("You get 5 percent discount!\n");
    percent = (5.0 * number) / 100.0;
    sub = number - percent;
    discountApplied = true;

}else if (number > 250) {
    printf("You get 10 percent discount!\n");
    percent = (10.0 * number) / 100.0;
    sub = number - percent;
    discountApplied = true;

}else if(number > 500){
    printf("You get 20 percent discount!\n");
    percent = (20.0 * number) / 100.0;
    sub = number - percent;
    discountApplied = true;

} else {
    printf("You get no discount!");
}

if (discountApplied) {
    printf("The discount is %lf \n",percent);
}

printf("You should pay %lf\n", sub);

    return 0;
}