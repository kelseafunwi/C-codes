#include <stdio.h>

void getMatrices(int matrix[][], int a, int b) {
    // a = rows and b = columns
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++ ) {
            // this should retrive all the elements from the user.
            printf("enter the element [%d][%d]", a, b);
            scanf("%d", &matrix[a][b]);
        }
    }
}

int main(void) {
    int a, b, c, d;
    printf("Enter matrix A dimensions AXB: ");
    scanf("%dx%d", &a, &b);
    printf("Enter matrix B dimensions CXD: ");
    scanf("%dx%d", &c, &d);
    getMatrices(matrixA, a, b);
    getMatrices(matrixB, c, d);

}
