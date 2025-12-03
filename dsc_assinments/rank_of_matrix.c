#include <stdio.h>

int main() {
    int a[10][10], m, n;
    int rank;

    printf("Enter rows: ");
    scanf("%d", &m);

    printf("Enter columns: ");
    scanf("%d", &n);

    printf("Enter the matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    rank = n;  // assume full rank

    for (int col = 0, row = 0; col < rank && row < m; col++) {

        // If pivot is zero, find a row to swap
        if (a[row][col] == 0) {
            int found = 0;
            for (int i = row + 1; i < m; i++) {
                if (a[i][col] != 0) {
                    // swap rows
                    for (int j = 0; j < rank; j++) {
                        int temp = a[row][j];
                        a[row][j] = a[i][j];
                        a[i][j] = temp;
                    }
                    found = 1;
                    break;
                }
            }

            if (!found) {
                // reduce rank (ignore this column)
                for (int i = 0; i < m; i++)
                    a[i][col] = a[i][rank - 1];

                rank--;
                col--;
                continue;
            }
        }

        // eliminate all rows below
        for (int i = row + 1; i < m; i++) {
            if (a[i][col] != 0) {
                float factor = (float)a[i][col] / a[row][col];
                for (int j = col; j < rank; j++)
                    a[i][j] -= factor * a[row][j];
            }
        }

        row++;
    }

    printf("\nRank of the matrix = %d\n", rank);
    return 0;
}
