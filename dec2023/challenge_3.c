# include <stdio.h>

int main() {
char charecter;


printf("\nEnter letter = \n");
scanf("%c", &charecter);

if (charecter == 'a' || charecter == 'e' || charecter == 'i' || charecter == 'o' || charecter == 'u') {
    printf("This letter is a vowel!\n");
} else {
    printf("This letter is a consonent\n");
}

return 0;
}