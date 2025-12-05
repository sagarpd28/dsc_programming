#include <stdio.h>

int main() {
    
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int trace=0;

    printf("Enter matrix elements: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matrix[i][j]);
            if(i==j){
                trace+=matrix[i][j];
            }
        }
    }
    printf("Trace of matrix= %d\n",trace);
    return 0;
}