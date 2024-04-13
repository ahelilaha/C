#include <stdio.h>

int main() {

int arr1[5]= {1, 2, 3, 4, 5};
int arr2[6]= {5, 10, 20, 25, 26, 28};
int result_add[6];
int result_sub[6];

for (int i = 0; i < 5; i++)
{
    int val1 = *(arr1 + i); // arr1[i]
    int val2 = *(arr2 + i);

    result_add[i] = (val1 + val2);
    result_sub[i] = (val1 - val2);

    printf("\n%d ", result_add[i]);
    printf("%d ", result_sub[i]);
}
    return 0;
}