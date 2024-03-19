#include <stdio.h>

int main() {
    int n = 4; // number of rows
    int m = 5; // number of columns

    // Example 2D array
    int a[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int l1 = 1; // row index of top-left corner
    int r1 = 2; // column index of top-left corner
    int l2 = 3; // row index of bottom-right corner
    int r2 = 4; // column index of bottom-right corner

    int sum = 0;
    int i, j;

    for (i = l1; i <= l2; i++) {
        for (j = r1; j <= r2; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum of the rectangle: %d\n", sum);

    return 0;
}
