#include <stdio.h>

int main() {
    float A[2][2], B[2][2], det, invB[2][2], result[2][2];

    printf("Enter matrix A (2x2):\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%f",&A[i][j]);

    printf("Enter matrix B (2x2):\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%f",&B[i][j]);

    // Determinant
    det = B[0][0]*B[1][1] - B[0][1]*B[1][0];
    if(det == 0){
        printf("Matrix B is singular\n"); //if determinant is zero, then division is not possib
        return 0;
    }

    // Inverse of B
    invB[0][0] =  B[1][1]/det;
    invB[0][1] = -B[0][1]/det;
    invB[1][0] = -B[1][0]/det;
    invB[1][1] =  B[0][0]/det;

    // Multiply A * B^-1
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            result[i][j] = A[i][0]*invB[0][j] + A[i][1]*invB[1][j];

    // Print result
    printf("Result of A / B:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%.2f ", result[i][j]);
        printf("\n");
    }

    return 0;
}