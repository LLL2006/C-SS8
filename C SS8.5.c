#include <stdio.h>

int main() {
    int matrix[2][2] = {
        {1, 2},
        {3, 4},

    };
    int rows = 2, cols = 2, sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien la: %d\n", sum);

    return 0;
}

