#include <stdio.h>

int main() {
    int n = 5;
    int a[] = {2, 4, 6, 8, 10};
    int P[n];

    P[0] = a[0];
    for(int i = 1; i < n; i++) {
        P[i] = P[i-1] + a[i];
    }

    printf("Prefix sum is: \n");  
    for(int i = 0; i < n; i++) {
        printf("%d ", P[i]);
    }

    return 0;
}
