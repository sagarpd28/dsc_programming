#include <stdio.h>

int main() {
    
    int matrix[3][3];
    int i, j;

    printf("Enter elemnts of 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }    
        printf("\n");
    }
    return 0;
}