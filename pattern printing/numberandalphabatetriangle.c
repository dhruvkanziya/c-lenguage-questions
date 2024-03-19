#include <stdio.h>

int main() {
    int rows, i, j, count;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        count = 1;
        for (j = 1; j <= i; j++) {
            if (i % 2 == 0) {
                printf("%d ", count);
                count++;
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}