#include <stdio.h>

void printFibonacci(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers:\n", n);
    printFibonacci(n);

    return 0;
}

void printFibonacci(int n) {
    int first = 0, second = 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", first);

        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}