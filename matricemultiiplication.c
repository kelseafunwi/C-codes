#include <stdio.h>


void getMatrix(int matrix[5][5], int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++ ) {
            printf("enter the element [%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main(void) {
    int a, b, c, d;
    printf("Enter matrix A dimensions AXB: ");
    scanf("%dx%d", &a, &b);
    printf("Enter matrix B dimensions CXD: ");
    scanf("%dx%d", &c, &d);
    if (b != c) {
        printf("Multiplication is not possible between the 2 matrices");
        return 0;
    }
    int array1[a][b];
    int array2[c][d];
    int result[a][d];

    printf("\nEnter the coordinates of the first matrices.\n");
    getMatrix(array1, a, b);
    printf("\nEnter the coordinates of the second matrices.\n");
    getMatrix(array2, c, d);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            result[i][j] = 0;
            for (int k = 0; k < a; k++) {
                result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    printf("The result is\n");
    for (int i = 0; i < a; i++ ) {
        for (int j = 0; j < d; j++) {
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
