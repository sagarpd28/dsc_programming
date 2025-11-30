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

    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
            sum = sum+ matrix[i][j];
        }
        printf("1 | sum is %d\n",sum);
    }
    return 0;
}