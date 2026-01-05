#include <stdio.h>

int main() {
    int a[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Sorting in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Kth smallest element = %d\n", a[k - 1]);
    printf("Kth largest element = %d\n", a[n - k]);

    return 0;
}
