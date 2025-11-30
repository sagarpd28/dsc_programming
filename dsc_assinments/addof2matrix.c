#include <stdio.h>

int main() {
    
    int a[3][3], b[3][3], c[3][3];
    int i,j;

    printf("Enter elements of matrix a is :\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements if matrix b is:\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("First matric is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    }
    printf("second  matric is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", b[i][j]);
        }
    printf("\n");
    }
    printf("sum is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]= a[i][j]+b[i][j];
            printf("%d\t", c[i][j]);
        }
    printf("\n");    
    }


    return 0;
}