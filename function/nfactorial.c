#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factorials of the first %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d! = %llu\n", i, factorial(i));
    }

    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}