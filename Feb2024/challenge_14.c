#include <stdio.h>
#include <stdbool.h>

#define A_Size 5
#define B_Size 4

int main() {
int A[A_Size];
int B[B_Size];
bool ismatch = false;

printf("Enter %d numbers for the first array : ", A_Size);
for (int i = 0; i < A_Size; i++){
    scanf("%d", &A[i]);
}

printf("Enter %d numbers for the second array :", B_Size);
for (int j = 0; j < B_Size; j++){
    scanf("%d", &B[j]);
}

for (int index1 = 0; index1 < A_Size; index1++){
    int e = A[index1];

    for (int index2 = 0; index2 < B_Size; index2++)
    {
        if(e == B[index2]){
            printf("We found a match, number = %d \n", e);
            ismatch = true;
        }
    }
    
}

if(ismatch == false){
    printf("Sorry we haven't found a match!");
}

    return 0;
}