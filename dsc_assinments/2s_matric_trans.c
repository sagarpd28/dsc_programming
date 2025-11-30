#include <stdio.h>

int main() {
    
    int a[3][3];
    int i,j;
    float determinant= 0;

    printf("Enter element of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("transporse matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");

    }
    return 0;
}