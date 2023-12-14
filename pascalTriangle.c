#include <stdio.h>

int main() {
    int i, j, size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int A[size][size];

    for (i =0; i < size; i++) {
        for (j =0; j < size; j++) {
            A[i][j] = 0;
        }
    }

    for (i =0; i < size; i++) {
        A[i][0] = 1;
        A[i][i] = 1;
    }

    for (i = 2; i < size; i++) {
        for (j = 1; j < i; j++) {
            A[i][j] = A[i-1][j-1] + A[i-1][j];
        }
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size ; j++) {
            if (A[i][j]) {
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
