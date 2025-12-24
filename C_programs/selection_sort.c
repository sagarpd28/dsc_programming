#include <stdio.h>

int main() {

    int i, j, n, min, temp;
    int a[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements of array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        min = i;   // FIX 1

        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
