#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int find_column_with_most_primes(int matrix[][3], int rows, int cols) {
    int max_primes = 0;
    int max_primes_column = -1;

    for (int j = 0; j < cols; j++) {
        int primes_count = 0;

        for (int i = 0; i < rows; i++) {
            if (is_prime(matrix[i][j])) {
                primes_count++;
            }
        }

        if (primes_count > max_primes) {
            max_primes = primes_count;
            max_primes_column = j;
        }
    }

    return max_primes_column;
}

int main() {
    int rows, cols;

k
    printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);


    int matrix[rows][cols];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    int max_primes_column = find_column_with_most_primes(matrix, rows, cols);

    if (max_primes_column == -1) {
        printf("Khong co so nguyen to trong mang.\n");
    } else {
        printf("Cot co nhieu so nguyen to nhat: %d\n", max_primes_column);
    }

    return 0;
}
