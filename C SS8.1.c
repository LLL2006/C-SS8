#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("Cac phan tu trong mang la:\n");
    for (int i = 5; i >= 1; i--) {
        printf("Phan tu thu %d: %d\n", i, arr[i-1]);
    }

    return 0;
}
