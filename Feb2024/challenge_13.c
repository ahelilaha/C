#include <stdio.h>

// The sum value
int findingSum_v1(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + findingSum_v1(n-1);
    }
}

int global_sum = 0;
void findingSum_v2(int n) {
    if (n == 1) {
        global_sum = global_sum + 1;
    } else {
        global_sum = global_sum + n;
        findingSum_v2(n-1);
    }
}

int findingSum_iteration(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum = findingSum_v1(n);
    printf("\nSum = %d\n", sum);

    findingSum_v2(n);
    printf("\nglobal sum = %d\n", global_sum);

    printf("\niteration sum = %d\n", findingSum_iteration(n));
    return 0;
}
