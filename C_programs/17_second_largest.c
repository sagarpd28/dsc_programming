#include <stdio.h>

int main() {
    int a[100], n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize
    largest = secondLargest = a[0];
    smallest = secondSmallest = a[0];

    // Find largest and smallest
    for (i=1; i<n; i++) {
        if (a[i] > largest)
            largest = a[i];
        if (a[i] < smallest)
            smallest = a[i];
    }

    // Find second largest and second smallest
    for (i=0; i<n; i++) {
        if (a[i] != largest && (secondLargest == largest || a[i] > secondLargest))
            secondLargest = a[i];

        if (a[i] != smallest && (secondSmallest == smallest || a[i] < secondSmallest))
            secondSmallest = a[i];
    }

    printf("Second Largest = %d\n", secondLargest);
    printf("Second Smallest = %d\n", secondSmallest);

    return 0;
}
