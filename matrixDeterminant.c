#include <stdio.h>

int deter2(int A[2][2]) {
    return ( A[1][1] * A[0][0]) - (A[1][0] * A[0][1]);
}

int main() {
    int matrixA[3][3];
    int temp[2][2], constant;

    // get all the values for the 3 by 3 matrix.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter value A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // the main columns that i'll be looping through
    int i = 0;
    for (int j = 0; j < 3; j++) {
        constant =  matrixA[i][j];
        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                temp[k][l] = matrixA[i + 1][(j+l+1)%3];
            }
            i++;
        }
        printf("The matrices are \n");
        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                printf(" %d ", temp[k][l]);
            }
            printf("\n");
        }
    }


    printf("Determinant of the matrix is: %d", deter2(matrixA));
    return 0;
}
