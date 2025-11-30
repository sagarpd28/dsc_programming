#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sub[] = {3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);  // size of main array
    int m = sizeof(sub) / sizeof(sub[0]);  // size of subarray

    int found = 0; // flag

    // Loop through main array
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (arr[i + j] != sub[j]) {
                break;  // mismatch, exit inner loop
            }
        }
        if (j == m) { // all elements matched
            found = 1;
            printf("Subarray found starting at index %d\n", i);
            break;
        }
    }

    if (!found) {
        printf("Subarray not found\n");
    }

    return 0;
}
