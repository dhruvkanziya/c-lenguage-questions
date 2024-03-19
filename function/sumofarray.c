#include <stdio.h>

// Function to add two 2D arrays
void addArrays(int rows, int cols, int array1[rows][cols], int array2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

// Function to display a 2D array
void displayArray(int rows, int cols, int array[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Get dimensions of the arrays
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array1[rows][cols], array2[rows][cols], result[rows][cols];

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }

    // Input elements for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &array2[i][j]);
        }
    }

    // Call the function to add arrays
    addArrays(rows, cols, array1, array2, result);

    // Display the original arrays
    printf("\nFirst Array:\n");
    displayArray(rows, cols, array1);

    printf("\nSecond Array:\n");
    displayArray(rows, cols, array2);

    // Display the result
    printf("\nSum of Arrays:\n");
    displayArray(rows, cols, result);

    return 0;
}
