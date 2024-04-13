#include <stdio.h>

int main() {

   int farenheit;

printf("\nEnter how much Fahrenheit is by your side :  \n");
scanf("%d", &farenheit);

int celsius = (farenheit - 32) * 5/9;
printf("\nIt is %d celsius on your side\n", celsius);

if(celsius > 20) {
printf("\nit is hot\n");
}else if (celsius < 20 & celsius > 0) {
printf("\nit is cold\n");
}else if (celsius < 0) {
printf("\nit is too cold\n");
}

    return 0;
}