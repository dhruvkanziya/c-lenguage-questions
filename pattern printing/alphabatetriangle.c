#include <stdio.h>

int main() {
    int rows, i, j;
    char currentChar = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
         for(int j=0;j<=i;j++){// for spaces
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%c ", currentChar);
            currentChar++;
             
        }
        printf("\n");
    }

    return 0;
}