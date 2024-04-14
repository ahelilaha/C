#include <stdio.h>
#include <string.h>

int main() {

char str[100];

printf("Enter some string:");

while (fgets(str, sizeof(str), stdin)) {
    printf("outcome --> %s", str);

    int mismatch = strcmp(str, "exit\n");
    if (mismatch == 0) {
        break;
    }
}
    
return 0;

}