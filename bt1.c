#include <stdio.h>

void fibonacci_2d(int rows, int cols) {

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i <= 1 && j <= 1) {
                matrix[i][j] = i + j;
            } else {
                matrix[i][j] = matrix[i-1][j] + matrix[i-2][j];
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);


    fibonacci_2d(rows, cols);

    return 0;
}