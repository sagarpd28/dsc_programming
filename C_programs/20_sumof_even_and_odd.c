#include <stdio.h>

int main() {
    int n, i;
    int arr[20];
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(i % 2 == 0)
            evenSum += arr[i];   // even index
        else
            oddSum += arr[i];    // odd index
    }

    printf("Sum of even-index elements = %d\n", evenSum);
    printf("Sum of odd-index elements  = %d\n", oddSum);

    return 0;
}
