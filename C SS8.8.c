#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int size = 3, sum = 0;

    printf("Cac phan tu tren duong cheo phu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][size - i - 1]);
        sum += matrix[i][size - i - 1];
    }

    printf("\nTong cac phan tu tren duong cheo phu: %d\n", sum);

    return 0;
}

