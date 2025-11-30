#include <stdio.h>

int main() {
    
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nFirst matrix A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    printf("\nMultiplication of A * B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            
            int sum = 0;
            for(k = 0; k < 3; k++){
                sum += a[i][k] * b[k][j];
            }

            c[i][j] = sum;        // store final sum
            printf("%d\t", c[i][j]);  // print result
        }
        printf("\n");
    }

    return 0;
}
