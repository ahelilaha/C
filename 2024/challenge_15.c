#include <stdio.h>
#include <string.h>

int main() {

char str1[100];
char str2[100];

printf("Enter some string for str1:");

if (fgets(str1, 100, stdin)) {
     printf("outcome --> %s", str1);
} 

printf("Enter some string for str2:");

if (fgets(str2, 100, stdin)) {
     printf("outcome --> %s", str2);
} 

for (int i = 0; i < strlen(str1); i++){
    char thing = str1[i];

    for (int j = 0; j < strlen(str2); j++)
    {
        if(thing == str2[j]){
            printf("outcome = %c \n", thing);
        }
    }
    
}

return 0;
}